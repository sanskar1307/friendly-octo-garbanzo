#include "iostream"
using namespace std;

class Node {
    public:

    int data;
    Node *next;
};

void display(Node *head){
   Node *tail = head;
   while(tail != NULL){
       cout<<tail->data<<" ";
       tail = tail->next;
   }
   cout<<endl;
    
}

int main(){
    Node *head = new Node();
    Node *first = new Node();
    Node *second = new Node();
    head->data = 1;
    head->next = first;

    first->next = second;
    first->data = 2;

    second->next = NULL;
    second->data = 3 ;

    display(head);

}