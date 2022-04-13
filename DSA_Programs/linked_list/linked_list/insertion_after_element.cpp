#include <iostream>
using namespace std;

void insert_after_element(int new_data, int num){
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node -> data = new_data;
    struct node* ptr = NULL;
    struct node* pre_ptr = NULL;
    ptr = head;
    pre_ptr = ptr;
    while(pre_ptr -> data != num){
        pre_ptr = ptr;
        ptr = ptr -> next;
    }
    pre_ptr -> next = new_node;
    new_node -> next = ptr;
}