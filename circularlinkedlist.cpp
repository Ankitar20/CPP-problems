#include<iostream>
using namespace std;
class Node{
    int data;
    Node*next;

   //constructor
   Node(int d){
       this->data =d;
       this->next=NULL;

   }
  ~ Node(){
      int value=this->data;
      if(this->next !=NULL){
        delete next;
        next=NULL;

      }
      cout<<"memory is free for node with data"<<value<<endl;

  }
};

void insertNode(Node*&tail, int element , int d){
    //empty list
    if(tail==NULL){
        Node* newNode= new Node(d);
        tail=newNode;
        

    }
}
int main(){

return 0;
}