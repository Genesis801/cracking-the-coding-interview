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
void removeDuplicates(Node *head){
    unordered_map<int, int> mp;
    Node *temp=head;
    while(temp != NULL){
        mp[temp->data]++;
        temp=temp->next;
    }
    Node *t=head;
    Node *prev=new Node(0);
    prev->next=t;

    Node *ans=prev->next;

    while(t != NULL){
        if(mp[t->data]>0){
            mp[t->data]=0;
            prev=prev->next;
            t=t->next;
        }
        else{
            prev->next=t->next;
            t=t->next;
        }
    }
    prev->next=t;

}
int main(){
    Node *head= new Node(2);
    Node *node=head;

    Node *node1= new Node(1);
    node->next=node1;
    node=node1;

    Node *node2=new Node(1);
    node->next=node2;
    node = node2;

    Node *node3=new Node(1);
    node->next=node3;
    node = node3;

    Node *node4=new Node(3);
    node->next=node4;
    node = node4;

    Node *node5=new Node(4);
    node->next=node5;
    node = node5;

    printList(head);
    cout<<"\n-----------------------"<<endl;
    
    removeDuplicates(head);
    
    printList(head);
}