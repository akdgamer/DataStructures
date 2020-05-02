#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head;

void Insert(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}
void Print(){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}
void Delete(int n){
    Node* temp1 = head;
    for(int i = 0; i < n-2; i++){
        if(n == 1){
            head = temp1->next;
            free(temp1);
            return; 
        }
        temp1 = temp1->next; //points to n-1 th node
        Node* temp2  = temp1->next;// n th node
        temp1->next = temp2->next; // n+1 th node
        free(temp2);//delete temp2; 
    }
}

int main(){
    head = NULL;
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5);
    Print();
    int n;
    cout<<"Enter position"<<endl;
    cin>>n;
    Delete(n);
    Print();
    return 0;
}