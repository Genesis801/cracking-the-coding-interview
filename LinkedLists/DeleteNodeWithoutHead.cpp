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
//It is always given that the provided node is not the first or last node in the list
void deleteNodeWithoutHead(Node *node){
    node->data=node->next->data;
    node->next=node->next->next;
}
int main(){
    Node *head= new Node(1);
    Node *node=head;

    Node *node1= new Node(2);
    node->next=node1;
    node=node1;

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

    printList(head);
    cout<<endl;
    deleteNodeWithoutHead(node1);
    printList(head);
}