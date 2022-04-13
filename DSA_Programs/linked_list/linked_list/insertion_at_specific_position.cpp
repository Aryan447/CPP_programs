#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

struct node* head = NULL;
void insert(int data, int n){
    struct node* temp1 = (struct node*)malloc(sizeof(struct node));
    temp1 -> data = data;
    temp1 -> next = NULL;
    if(n==1){
        temp1 -> next = head;
        head = temp1;
        return;
    }
    node* temp2 = head;
    for(int i=0; i<n-2; i++){
        temp2 = temp2 -> next;
    }
    temp1 -> next = temp2 -> next;
    temp2 -> next = temp1;
}

void print(){
    node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<endl;
        temp = temp -> next;
    }
}

int main(){
    head = NULL;
    insert(2, 1);
    insert(3, 2);
    insert(4, 1);
    insert(5, 2);
    print();
}