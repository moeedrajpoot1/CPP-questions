
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




// void insertPosition(Node* &head,int position,int d){
//     Node* temp=head;

//     int cnt=1;
//     while(cnt<position-1){
//         temp=temp->next;
//         cnt++;
//     }
//     Node* NodeToInsert= new Node(45);
//     NodeToInsert->next=temp->next;
//     temp->next=NodeToInsert;

// }







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
   
//     AddatEnd(tail,30);
//     AddatEnd(tail,40);
//     AddatEnd(tail,50);
//     AddatEnd(tail,60);
//     PrintLinkedList(head);
//     insertPosition(head,3,45);
//     PrintLinkedList(head);

//  }


// All 3 insertions in Single Linked List 



class Node{
    public:
    int data;
    Node* next;
    Node(int val){
     this->data=val;
     this->next=nullptr;
    }
};

void insertAtEnd(Node* &tail,int d){
Node* temp=new Node(d);
tail->next=temp;
tail=temp;

}


void insertHead(Node* &head,int d){
Node* temp=new Node(d);
temp->next=head;
head=temp;
}
 void PrintLinkedList(Node* &head){
Node* temp=head;
while(temp!=nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;

}
cout<<endl;
 };


 void insertAtmid(Node* &tail,Node* &head,int position, int d){
    if(position==1){
     return insertHead(head, d);
    };
Node* temp=head;
int count=1;
while(count<position-1){
    temp=temp->next;
    count++;
}
if(temp->next==nullptr){
    return insertAtEnd(tail, d);
}

Node* NewAdd=new Node(d);
NewAdd->next=temp->next;
temp->next=NewAdd;
}

// Deleting Nodesss

// void deleteNode(int position,Node* &head){
// if(position==1){
//     Node* temp=head;
//   head=head->next;

//   //memory free start node
//   delete temp;


// }
// else{
//      Node* current=head;
//      Node* prev=NULL;
//      int count=1;
//      while(count<position){
//         prev=current;
//         current=current->next;
        
//         count++;
//      }
//      prev->next=current->next;
//      delete current;
// }
// }

int deleteNode(int position,Node* &head){
    if(position==1){
           Node* temp=head;
           head=head->next;
           delete temp;               
    }
    else{
         Node* current=head;
         Node* prev=NULL;
         int count =1;
         while(count<position){
            prev=current;
            current=current->next;
            count++;
         }
         prev->next=current->next;
         delete current;
    }
}

int main(){
    Node* node1=new Node(20);
    Node* head=node1;
    Node* tail=node1;

    insertHead(head,10);
    insertHead(head,5);
     insertAtEnd(tail,30);
     insertAtEnd(tail,40);
     insertAtmid(tail,head,1,4);
     insertAtmid(tail,head,7,41);
    PrintLinkedList(head);
     deleteNode(7,head);
      PrintLinkedList(head);

}