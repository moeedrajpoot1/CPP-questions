
#include <iostream>
using namespace std;
// Insertation in th headdddddddddddddddddddddddddddddddddddddddddd
// class Node{
//     public:
//     int data;
//     Node* next;

//     public:
//     Node(int val){
//         this->data=val;
//         this->next=nullptr;
//     }
// };

// void insertatHead(Node* &head,int d){
// // New Node Create
//  Node* temp=new Node(d);
//  temp->next=head;
//  head=temp;
// };

// void PrintLinkedList(Node* &head){
// Node* temp=head;
// while(temp!=nullptr){
//     cout<<temp->data<<" ";
//     temp=temp->next;

// }
// cout<<endl;
// };
// int main(){
// Node* node1= new Node(10);
// cout<<node1->data<<endl;
// cout<<node1->next;
// Node* head=node1;
// PrintLinkedList(head);
// insertatHead(head,12);
// PrintLinkedList(head);
// }

//


// Inserting At taaaaaaaaaaaaiiiiiiiiiiiiiiiiLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL
 
// class Node{
//     public:
//     int data;
//     Node* next;

//     public:
//     Node(int val){
//         this->data=val;
//         this->next=nullptr;
//     }
// };


// void AddatEnd(Node* &tail,int d){
// Node* temp= new Node(d);
// tail->next=temp;
// tail=tail->next;


// };

//  void PrintLinkedList(Node* &head){
// Node* temp=head;
// while(temp!=nullptr){
//     cout<<temp->data<<" ";
//     temp=temp->next;

// }
//  };

//  int main(){
//     Node* node1=new Node(200);
//     Node* head=node1;
//     Node* tail=node1;
//     PrintLinkedList(head);
//     AddatEnd(tail,30);
//     PrintLinkedList(head);

//  }

// Insert At  POOOOOSSSSSSSSSSSSIIIIIIIIIIIIIITTTTTTTTTTTTIIIIIIIIIOOONNNNNNNNNNNN


class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int val){
        this->data=val;
        this->next=nullptr;
    }
};








void AddatEnd(Node* &tail,int d){
Node* temp= new Node(d);
tail->next=temp;
tail=tail->next;


};




void insertPosition(Node* &head,int position,int d){
    Node* temp=head;

    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    Node* NodeToInsert= new Node(45);
    NodeToInsert->next=temp->next;
    temp->next=NodeToInsert;

}







 void PrintLinkedList(Node* &head){
Node* temp=head;
while(temp!=nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;

}
 };


 int main(){
    Node* node1=new Node(200);
    Node* head=node1;
    Node* tail=node1;
   
    AddatEnd(tail,30);
    AddatEnd(tail,40);
    AddatEnd(tail,50);
    AddatEnd(tail,60);
    PrintLinkedList(head);
    insertPosition(head,3,45);
    PrintLinkedList(head);

 }