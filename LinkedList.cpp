#include<iostream>
using namespace std;

struct Node{  // structure to create a node template which can be used to create new nodes in the list
    int data;
    Node * next;
};

Node* head; // global variavle, can be accessed anywhere

void Insert(int x);
void Print();

int main(){

    head = NULL; // The list is empty till now
    cout<<"how many numbers"<<endl;
    int n,x;
    cin>>n;
    for(int i = 0; i < n; i++){
        cout<<"Enter the number : ";
        cin>>x;
        Insert(x);
        Print();
    }
}

void Insert(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}

void Print(){
    struct Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}