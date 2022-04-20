#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};
struct Node* head;

void insertion_at_beginning(int new_data){
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}
void insertion_at_end(int new_data){
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *ptr = head;
    new_node->data=new_data;
    new_node->next=NULL;
    while (ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = new_node;
}


void print(){
    Node *temp = head;
    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    insertion_at_beginning(20);
    insertion_at_beginning(40);
    insertion_at_end(12);
    insertion_at_end(19);
    print();
}
