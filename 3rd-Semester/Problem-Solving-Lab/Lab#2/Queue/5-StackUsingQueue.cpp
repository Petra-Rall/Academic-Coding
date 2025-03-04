#include <bits/stdc++.h>
using namespace std;

class MyStack {
private:
    queue<int> q;

public:
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        for (int i = 0; i < q.size() - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int val = q.front();
        q.pop();
        return val;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

int main() {
    MyStack* myStack = new MyStack();
    
    myStack->push(1);
    myStack->push(2);
    myStack->push(3);
    
    cout << "Top element: " << myStack->top() << '\n'; // Should print 3
    cout << "Popped: " << myStack->pop() << '\n'; // Should print 3
    cout << "Popped: " << myStack->pop() << '\n'; // Should print 2
    cout << "Stack empty? " << (myStack->empty() ? "Yes" : "No") << '\n'; // Should print No
    cout << "Popped: " << myStack->pop() << '\n'; // Should print 1
    cout << "Stack empty? " << (myStack->empty() ? "Yes" : "No") << '\n'; // Should print Yes
    
    delete myStack;
    return 0;
}
