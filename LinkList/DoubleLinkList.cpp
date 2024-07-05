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




}








int main(){
  Node* node1=new Node(20);
  Node* head=node1;
  PrintList(head);
cout<<getLength(head)<<" the Length is  ";
  InsertatHead(head,10);
}


