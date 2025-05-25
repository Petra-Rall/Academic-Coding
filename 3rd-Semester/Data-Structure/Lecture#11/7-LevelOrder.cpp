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


void levelorder(Node *node){
    if(node == NULL){
        cout << "Tree is empty.\n"; 
        return;
    }
    queue<Node *> q;
    q.push(node);
    while(!q.empty()){
        Node *Temp = q.front();
        q.pop();
        cout << Temp->Value << " ";
        if(Temp->Left){
            q.push(Temp->Left);
        }
        if(Temp->Right){
            q.push(Temp->Right);
        }
    }
    
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

    levelorder(Root);

    return 0;
}