// //code for removing the duplicate from sorted array
// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *prev;
//     Node *next;

//     // constructor
//     Node(int d)
//     {
//         this->data = d;
//         this->prev = NULL;
//         this->next = NULL;
//     }
//     ~Node()
//     {
//         int val = this->data;
//         if (next != NULL)
//         {
//             delete next;
//             next = NULL;
//         }
//         cout << "memory free or node with data" << val << endl;
//     }
// };
// Node *uniquesortedlist(Node *head)
// {
//     if (head == NULL)
//         return NULL;
//     Node *curr = head;
//     while (curr != NULL)
//     {
//         if ((curr->next != NULL) && curr->data == curr->next->data)
//         {
//             Node *next_next = curr->next->next;
//             Node *nodeTodelete = curr->next;
//             delete (nodeTodelete);
//             curr->next = next_next;
//         }

//         else
//         {
//             curr = curr->next;
//         }
//     }
//     return head;
// }
//code for removing the element from unsorted array
