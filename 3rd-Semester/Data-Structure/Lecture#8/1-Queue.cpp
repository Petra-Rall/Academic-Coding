#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 20

//Create an empty queue
class Queue{
private:
    int arr[MAX_SIZE];
    int front, back;

public: 
    //Constructor to initialize an empty queue
    Queue(){
        front = -1;
        back = -1;
    }

    //Add a new item
    void push(int value){
        if(back >= MAX_SIZE - 1){
            cout << "Queue Overflow\n";
            return;
        }
        arr[++back] = value;
        if(front < 0){
            front++;
        }
    }

    //Remove the item that was added most recently
    int pop(){
        if(front < 0 || front > back){
            cout << "Queue Underflow\n";
        }
        int x = arr[front];
        if(front + 1 <= back){
            front++;
        }
        else{
            front = -1;
            back = -1;
        }
        return x;
    }

    //Determine whether a queue is empty
    bool isEmpty(){
        return front == -1 || front > back;
    }
    
    bool isFull(){
        return back == MAX_SIZE - 1;
    }

    //Retrieve the item that was added most recently 
    int getFront(){
        if(front < 0){
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[front];
    }

    int getBack(){
        if(back < 0){
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[back];
    }

    void swap(Queue &q2) {
        // Temporary storage for q2
        int tempArr[MAX_SIZE];
        int tempFront = q2.front;
        int tempBack = q2.back;
    
        // Copy q2 to tempArr
        for (int i = tempFront, j = 0; i <= tempBack; i++, j++) {
            tempArr[j] = q2.arr[i];
        }
    
        // Copy q1 to q2
        q2.front = front;
        q2.back = back;
        for (int i = front; i <= back; i++) {
            q2.arr[i] = arr[i];  // Ensure correct placement
        }
    
        // Copy tempArr to q1
        front = tempFront;
        back = tempBack;
        for (int i = tempFront, j = 0; i <= tempBack; i++, j++) {
            arr[tempFront] = tempArr[j];
        }
    }
    

};

//Destroy stack

int main(){
    Queue q1, q2;

    // Test: Push items to q1
    cout << "Pushing elements to q1\n";
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);

    // Test: Push items to q2
    cout << "Pushing elements to q2\n";
    q2.push(100);
    q2.push(200);

    // Test: Display front and back of both queues
    cout << "q1 front: " << q1.getFront() << ", q1 back: " << q1.getBack() << endl;
    cout << "q2 front: " << q2.getFront() << ", q2 back: " << q2.getBack() << endl;

    // Test: Pop from q1 and q2
    cout << "Pop from q1: " << q1.pop() << endl;
    cout << "Pop from q2: " << q2.pop() << endl;

    // Test: Display front and back after popping
    cout << "q1 front: " << q1.getFront() << ", q1 back: " << q1.getBack() << endl;
    cout << "q2 front: " << q2.getFront() << ", q2 back: " << q2.getBack() << endl;

    // Test: Is empty for q1 and q2
    cout << "Is q1 empty? " << (q1.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is q2 empty? " << (q2.isEmpty() ? "Yes" : "No") << endl;

    // Test: Full queue check (won't be full here as we haven't filled to MAX_SIZE)
    cout << "Is q1 full? " << (q1.isFull() ? "Yes" : "No") << endl;
    cout << "Is q2 full? " << (q2.isFull() ? "Yes" : "No") << endl;

    // Test: Swap the queues
    cout << "Swapping q1 and q2\n";
    q1.swap(q2);

    // Test: Display front and back after swap
    cout << "After swap:\n";
    cout << "q1 front: " << q1.getFront() << ", q1 back: " << q1.getBack() << endl;
    cout << "q2 front: " << q2.getFront() << ", q2 back: " << q2.getBack() << endl;

    // Test: Pop from swapped queues
    cout << "Pop from swapped q1: " << q1.pop() << endl;
    cout << "Pop from swapped q2: " << q2.pop() << endl;

    // Test: Display front and back after popping from swapped queues
    cout << "q1 front after pop: " << q1.getFront() << ", q1 back: " << q1.getBack() << endl;
    cout << "q2 front after pop: " << q2.getFront() << ", q2 back: " << q2.getBack() << endl;

    // Test: Pop all remaining elements from q1 and q2
    cout << "Popping all remaining elements from q1\n";
    while (!q1.isEmpty()) {
        cout << "Pop from q1: " << q1.pop() << endl;
    }

    cout << "Popping all remaining elements from q2\n";
    while (!q2.isEmpty()) {
        cout << "Pop from q2: " << q2.pop() << endl;
    }

    // Test: Is empty after popping all elements
    cout << "Is q1 empty after popping all elements? " << (q1.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is q2 empty after popping all elements? " << (q2.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}