#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int x){
        val=x;
        next=nullptr;
    }
};

void print(Node* &head){
    Node * temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

Node * InsertAtHead(Node * &head,int value){
    Node * temp= new Node(value);
    if(head==NULL){
        head=temp;
    }
    temp->next=head;
    head=temp;
    return head;
}

Node* InsertAtEnd(Node * &head,int newval){
    Node* newNode=new Node(newval);
    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    return head;
}

Node * InsertAtPos(Node* &head, int val ,int pos){
    Node * temp= new Node(val);
    Node *ptr=head;
    for(int i=1;i<pos;i++){
        ptr=ptr->next;
    }
    temp->next=ptr->next;
    ptr->next=temp;
    return head;
}
int main() {
    Node * head = new Node(10);
    head->next=new Node(22);
    head->next->next=new Node(31);
    print(head);
cout<<endl;
    InsertAtHead(head,199);
    print(head);
    cout<<endl;
    InsertAtEnd(head,299);
    print(head);
    cout<<endl;
    InsertAtPos(head,399,3);
    print(head);
    return 0;
}
