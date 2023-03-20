#include <iostream>
#include <map>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free or node with data" << val << endl;
    }
};

// traversing a linked list
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtHead( Node *&head, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
    }
    else
    {

        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void insertAttail( Node *&tail, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        temp = tail;
    }
}
// insert at position
void insertAtposition(Node *&tail, Node *&head, int position, int d)
{
    // insert at start
    if (position == 1)
    {
        insertAtHead( head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // insert at last position
    if (temp->next == NULL)
    {
        insertAttail(tail, d);
        return;
    }
    head = temp;
}

    bool detectLoop(Node * head)
    {
        if (head == NULL)
            return false;
        
        map<Node *, bool> visited;

        Node *temp = head;

        while (temp != NULL)
        {
            // cycle is present
            if (visited[temp] == true)
            {
                return true;
            }
            visited[temp] = true;
            temp = temp->next;
        }
        return false;
    }
    int main()
    {
        Node *node1 = new Node(10);

        Node *head = node1;
        Node *tail = node1;
        insertAttail(tail, 12);
        insertAttail(tail, 15);
        insertAtposition(tail, head, 4, 22);
        print(head);
        tail->next=head->next;
        cout<<"head"<<head->data<<endl;
        cout<<"tail"<<tail->data<<endl;

        
    }
