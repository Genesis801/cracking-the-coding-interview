#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int x){
        data=x;
        next=NULL;
    }
};
void printList(Node *head){
    Node *temp=head;
    while(temp !=  NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void returnKthFromLast(Node *head, int k){
    if(head == NULL || head->next==NULL)
        return;
    Node *fast=head;
    Node *slow=head;

    while(k>0){
        fast=fast->next;
        k--;
    }
    while(fast != NULL){
        slow=slow->next;
        fast=fast->next;
    }
    cout<<"Ans: "<<slow->data<<endl;
    return;
}
int main(){
    Node *head= new Node(1);
    Node *node=head;

    Node *newnode= new Node(2);
    node->next=newnode;
    node=newnode;

    Node *node2=new Node(3);
    node->next=node2;
    node = node2;

    Node *node3=new Node(4);
    node->next=node3;
    node = node3;

    Node *node4=new Node(5);
    node->next=node4;
    node = node4;

    Node *node5=new Node(6);
    node->next=node5;
    node = node5;

    int k;
    cin >> k;
    returnKthFromLast(head,k);
    printList(head);
}