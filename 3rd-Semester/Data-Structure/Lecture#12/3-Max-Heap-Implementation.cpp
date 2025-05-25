#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
private:
    vector<int> heap;

    void heapifyUp(int index){
        if(index == 0) return;
        int parent = (index - 1) / 2; //heap starts at 0 index

        if(heap[index] > heap[parent]){
            swap(heap[index], heap[parent]);
            heapifyUp(parent);
        }
    }

    void heapifyDown(int index){
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        int largest = index;

        if(left < heap.size() && heap[left] > heap[largest]){
            largest = left;
        }
        if (right < heap.size() && heap[right] > heap[largest]) {
            largest = right;
        }

        if(largest != index){
            swap(heap[index], heap[largest]);
            heapifyDown(largest);
        }
    }

public:
    void insert(int value){
        heap.push_back(value);
        heapifyUp(heap.size()-1);
    }

    void removeMax(){
        if(heap.empty()){
            cout << "Heap is empty. \n";
            return;
        }
        heap[0] = heap.back(); //replace root with the last node
        heap.pop_back(); // remove last node
        heapifyDown(0);
    }

    int getMax() {
        if (heap.empty()) {
            cout << "Heap is empty." << endl;
            return -1;
        }
        return heap[0];
    }

     void printHeap() {
        for (int val : heap) {
            cout << val << " ";
        }
        cout << endl;
    }

};

int main(){

    MaxHeap h;
    h.insert(10);
    h.insert(20);
    h.insert(15);
    h.insert(30);
    h.insert(40);

    cout << "Max Heap: ";
    h.printHeap();

    cout << "Maximum: " << h.getMax() << endl;

    h.removeMax();
    cout << "Heap after removing max: ";
    h.printHeap();

    return 0;
}