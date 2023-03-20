#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// void reverse(Node*&head, Node*curr,Node *prev){
//     //base case
//     if(curr=NULL){
//         head=prev;
//         return;

//     }
//     Node*forward=curr->next;
//     reverse(head,forward,curr);
//     curr->next=prev;

// }

// Node *reversedlinkedlist(Node * head)
// {
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }
//     Node *prev = NULL;
//     Node *curr = head;
//     Node *forward = curr->next;
//     while (curr->next != NULL)
//     {
//         forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
//     }
//     return prev;
// }
// Node *reversedlinkedlist(Node * head)
// {
//     Node*curr=head;
//     Node*prev= NULL;
//     reverse(head ,curr,prev);
//     return head;

// // }
Node *getMiddle(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

if (head->next->next == NULL)
{
    return head->next;

}
Node*slow=head;
Node*fast=head->next;
while(fast!=NULL){
    fast=fast->next;
    if(fast!=NULL){
        fast=fast->next;

    }
    slow=slow->next;
    
    }
    return slow;
}
int getlength(Node *head)
{

    int len = 0;
    while (head != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}
Node*findmiddle(Node*head){
    return getMiddle(head);
}
// Node *findmiddle(Node *head)
// {
//     int len = getlength(head);
//     int ans = (len / 2);

//     Node *temp = head;
//     int cnt = 0;
//     while (cnt < ans)
//     {
//         temp = temp->next;
//         cnt++;

//     }
//     return temp;
// }
int main(){
    Node *node1= new Node(10);
}