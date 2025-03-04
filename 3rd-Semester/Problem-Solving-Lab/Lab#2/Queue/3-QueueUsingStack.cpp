#include <bits/stdc++.h>
using namespace std;

class MyQueue {
private:
    stack<int> s1;
    stack<int> s2;

public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if (s2.empty()) { // Transfer only when s2 is empty
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int x = s2.top();
        s2.pop();
        return x;
    }
    
    int peek() {
        if (s2.empty()) { // Transfer only when s2 is empty
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};

int main() {
    MyQueue* myQueue = new MyQueue();
    
    myQueue->push(1);
    myQueue->push(2);
    myQueue->push(3);

    cout << "Front element: " << myQueue->peek() << '\n'; // Should print 1
    cout << "Popped: " << myQueue->pop() << '\n'; // Should print 1
    cout << "Popped: " << myQueue->pop() << '\n'; // Should print 2
    cout << "Queue empty? " << (myQueue->empty() ? "Yes" : "No") << '\n'; // Should print No
    cout << "Popped: " << myQueue->pop() << '\n'; // Should print 3
    cout << "Queue empty? " << (myQueue->empty() ? "Yes" : "No") << '\n'; // Should print Yes
    
    delete myQueue;
    return 0;
}
