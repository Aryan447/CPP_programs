#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head;
void insertionAtStart(int newData)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}
void insertionAtEnd(int newData){
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *ptr = head;
    newNode->data=newData;
        newNode->next=NULL;
    
         while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newNode;

    }
void insertAtNPosition(int data, int n)
{
    struct Node *temp1 = (struct Node *)malloc(sizeof(struct Node));
    temp1->data = data;
    temp1->next = NULL;
    if (n == 1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }
    Node *temp2 = head;
    for (int i = 0; i < n - 2; i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}
void insertAfterAnElement(int newData, int num)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = newData;
    struct Node *ptr = NULL, *prePtr = NULL;
    ptr = head;
    prePtr = ptr;

    while (prePtr->data != num)
    {
        prePtr = ptr;
        ptr = ptr->next;
    }
    prePtr->next = newNode;
    newNode->next = ptr;
}
void print()
{
    Node *temp = head;
    while (temp != NULL)
    {
        std::cout << temp->data << " " << std::ends;
        temp = temp->next;
    }
    cout << endl;
}
void delStart()
{
    if (head == NULL)
    {
        cout << "List is empty";
    }
    else
    {
        struct Node *ptr = head;
        head = head->next;
        free(ptr);
    }
}
void delEnd()
{
    struct Node *ptr = head, *prePtr = head;
    if (head == NULL)
    {
        cout << "List is empty";
    }
    else if (head->next == NULL)
    {
        struct Node *ptr = head;
        head = NULL;
        free(ptr);
        free(prePtr);
    }
    else
    {
        while (ptr->next != NULL)
        {
            prePtr = ptr;
            ptr = ptr->next;
        }
        prePtr->next = NULL;
        free(ptr);
    }
}
void delATNPosition(int n)
{
    struct Node *temp1 = head;
    if (n == 1)
    {
        head = temp1->next;
        free(temp1);
        return;
    }
    for (int i = 0; i < n - 2; i++)
    {
        temp1 = temp1->next;
    }
    struct Node *temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
}
void delElement(int num)
{
    struct Node *ptr = NULL, *prePtr = NULL;
    ptr = head;
    ;
    prePtr = ptr;
    if (ptr->data == num)
    {
        head = ptr->next;
        free(ptr);
        return;
    }
    while (ptr->data != num)
    {
        prePtr = ptr;
        ptr = ptr->next;
    }
    prePtr->next = ptr->next;
    free(ptr);
}
int main()
{
    insertAtNPosition(20, 1);
    insertAtNPosition(10, 1);
    insertAtNPosition(4, 3);
    insertAtNPosition(1, 2);
    insertAtNPosition(8, 5);
    insertAtNPosition(2, 1);
    insertionAtStart(78);
    insertionAtEnd(55);
    print();
    insertAfterAnElement(37, 20);
    print();
    delStart();
    print();
    delEnd();
    print();
    delATNPosition(3);
    print();
    delElement(37);
    print();
    insertionAtStart(20);
    return 0;
}