#include <iostream>
using namespace std;


class Node{
  public:
  int data;
  Node* prev;
  Node* next;
  //constructor
  Node(int val){
   this->data=val;
   this->prev=nullptr;
   this->next=nullptr;
  }
};



// Print Link List  



void PrintList(Node* &head){
 Node* temp=head;
 while(temp!=nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;
 }
 cout<<endl;
};


//Gives  A Length Of Linked List 
int getLength(Node* &head){
 int len=0;
 Node* temp=head;
 while(temp!=nullptr){
    len++;
    temp=temp->next;
 }
 return len;
}

void InsertatHead(Node* &head,int d){
Node* temp=new Node(d);
temp->next=head;
head->prev=temp;
head=temp;

}

void insertatEnd(Node* &tail,int d){
Node* temp=new Node(d);
tail->next=temp;
temp->prev=tail;
tail=temp;
}

void insertAtPosition(Node* &head,int position, int d){

Node* temp=head;
int count=1;
while(count<position-1){
    temp=temp->next;
    count++;
}
Node* element=new Node(d);
element->next=temp->next;
temp->next->prev=element;
temp->next=element;
element->prev=temp;



}







int main(){
  Node* node1=new Node(20);
  Node* head=node1;
  Node* tail=node1;
 
//   InsertatHead(head,10);
insertatEnd(tail,30);
insertatEnd(tail,40);

  PrintList(head);
   insertAtPosition(head,2,31);
   PrintList(head);
  
}


