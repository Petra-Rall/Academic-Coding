#include<bits/stdc++.h>
#include<cmath>
using namespace std;

struct Point {
    int x, y;
};

Point reff; // Global reference point for sorting

// Function to find the reference point (lowest y, then lowest x)
Point findRef(vector<Point> &points) {
    Point minPoint = points[0]; // Assume first point is the minimum

    for (int i = 1; i < points.size(); i++) {
        if ((points[i].y < minPoint.y) || (points[i].y == minPoint.y && points[i].x < minPoint.x)) {
            minPoint = points[i]; // Update reference point
        }
    }
    return minPoint;
}

// Returns the second-to-top element of the stack
Point nextToTop(stack<Point> &S) {
    Point p = S.top();
    S.pop();
    Point res = S.top();
    S.push(p); // Restore the popped element
    return res;
}

// Computes the squared Euclidean distance between two points
int squaredDist(Point p1, Point p2) {
    return ((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

// Calculates the angle of a point relative to the reference point
double getAngle(Point p) {
    return atan2(p.y - reff.y, p.x - reff.x);
}

// Comparator function for sorting points based on polar angle
bool compare(Point p1, Point p2) {
    double angle1 = getAngle(p1);
    double angle2 = getAngle(p2);
    if (angle1 == angle2) {
        return squaredDist(reff, p1) < squaredDist(reff, p2); // Tie-break by distance
    }
    return angle1 < angle2;
}

/* Alternative function to determine the orientation of three points:
   0 -> Collinear, 1 -> Clockwise, 2 -> Counterclockwise */
int orientation(Point p, Point q, Point r) {
    int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
    if (val == 0) return 0;  // collinear
    return (val > 0) ? 1 : 2; // Clockwise or counterclockwise
}

// Implements the Graham Scan algorithm to find the convex hull
stack<Point> GrahamScan(vector<Point> &p) {

    if(p.size() == 2 && p[0].x == p[1].x && p[0].y == p[1].y){
        stack<Point> s;
        s.push(p[0]);
        return s;
    }
    Point ref = findRef(p); // Find reference point (lowest y, then x)
    sort(p.begin(), p.end(), compare); // Sort points based on polar angle
   
    // If two or more points make same angle with p0,
    // Remove all but the one that is farthest from p0
    // Remember that, in above sorting, our criteria was
    // to keep the farthest point at the end when more than
     // one points have same angle.
    int m = 1; // Initialize size of modified array
    for (int i=1; i<p.size(); i++){
        // Keep removing i while angle of i and i+1 is same
        // with respect to p0
        while (i < p.size()-1 && orientation(p[0], p[i], p[i+1]) == 0){
          i++;
        }

        p[m] = p[i];
        m++;  // Update size of modified array
    }

    stack<Point> s;
    s.push(p[0]);
    s.push(p[1]);

    // loop using orientation function:
    for (int i = 2; i < m; i++) {
        while (s.size() > 1 && orientation(nextToTop(s), s.top(), p[i]) != 2)
            s.pop();
        s.push(p[i]);
    }
    
    return s;
}

int main() {
    while(true){
        int n, x, y;
        cin >> n;
        if(n==0) break;
        vector<Point> points;
        while(n--){
            cin >> x >> y;
            Point a = {x, y};
            points.push_back(a);
        }

        stack<Point> s = GrahamScan(points);

        // Reverse stack to print in correct order
        stack<Point> t;
        while (!s.empty()) {
            t.push(s.top());
            s.pop();
        }
        cout << t.size() << endl;
        while (!t.empty()) {
            cout << t.top().x << " " << t.top().y << "\n";
            t.pop();
        }
    }
    return 0;
}