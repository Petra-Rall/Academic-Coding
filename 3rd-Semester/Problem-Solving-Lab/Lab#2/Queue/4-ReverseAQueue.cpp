#include <bits/stdc++.h> 
using namespace std;

queue<int> reverseQueue(queue<int> q)
{
    stack<int> s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    return q;
}



int main(){
    int t, n, a;
    cin >> t;
    while(t--){
        queue<int> q, q2;
        cin >> n;
        while(n--){
            cin >> a;
            q.push(a);
        }
        q2 = reverseQueue(q);
        while(!q2.empty()){
            cout << q.front() << " ";
        }
        cout << "\n";
    
    }
}