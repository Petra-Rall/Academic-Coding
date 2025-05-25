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

void inorder(Node *node){
    if(node == NULL){
        return;
    }
    inorder(node->Left);
    cout << node->Value << " ";
    inorder(node->Right);
}

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

    inorder(Root);

    return 0;
}