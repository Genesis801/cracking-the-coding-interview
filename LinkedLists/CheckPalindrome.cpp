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
void checkPalindrome(Node *head){
    stack<int> s;
    Node *fast=head;
    Node *slow=head;

    while(fast->next!= NULL && fast->next->next != NULL){
        s.push(slow->data);
        fast=fast->next->next;
        slow=slow->next;
    }
    if(fast->next==NULL){
        
    }
    else if(fast->next->next == NULL)
    {
        s.push(slow->data);
    }
    slow=slow->next;

    while(slow != NULL){
        int top=s.top();
        
        if(slow->data == top){
            s.pop();
            slow=slow->next;
        }
        else{
            cout<<"Not Palindrome"<<endl;
            return;
        }
    }
    cout<<"Palindrome List"<<endl;
}
// 2  1  1
int main(){
    Node *head= new Node(2);
    Node *node=head;

    Node *node1= new Node(1);
    node->next=node1;
    node=node1;

    Node *node2=new Node(3);
    node->next=node2;
    node = node2;

    Node *node3=new Node(1);
    node->next=node3;
    node = node3;

    Node *node4=new Node(2);
    node->next=node4;
    node = node4;

    /*Node *node5=new Node(2);
    node->next=node5;
    node = node5;*/

    printList(head);
    cout<<"\n-----------------------"<<endl;
    
    checkPalindrome(head);
    
}