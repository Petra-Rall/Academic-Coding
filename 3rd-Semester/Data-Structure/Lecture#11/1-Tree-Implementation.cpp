#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int Value;
        Node *Left, *Right;
        Node(int Value){
            this->Value = Value;
            this->Left = NULL;
            this->Right = NULL;
        }
};

int main(){

    Node *Root = new Node(1);
    Node *B = new Node(2);
    Node *C = new Node(3);
    Node *D = new Node(4);
    Node *E = new Node(5);
    Node *F = new Node(6);
    Node *G = new Node(7);
    
    Root->Left = B;
    Root->Right = C;

    B->Left = D;
    B->Right = E;

    C->Left = F;
    C->Right = G;

    return 0;
}