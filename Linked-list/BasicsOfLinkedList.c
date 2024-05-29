/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node{
    struct node *next;
    int data;
};
void displayList(struct node*);
void createList(struct node*);
int main(void)
{
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Linked List : Create Your First Linked List...\n\n");
    struct node *n1;
    n1 = (struct node*) malloc(sizeof(struct node));
    createList(n1);
    displayList(n1);
    printf("\n\n");
    return 0;
}

void displayList(struct node *head){
    struct node *current;
    current = head;
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Linked List : Create Your First Linked List\n\n");
    printf("Linked List --> ");
    while(current != 0){
        printf("%3d ", current->data);
        current = current->next;
        if(current != 0){
            printf(": ");
        }
    }
}
void createList(struct node *head){
    struct node *current;
    current = head;
    int size, i = 1;
    printf("Enter the number of elements : ");
    scanf("%d", &size);
    printf("\n");
    while(i <= size){
        printf("Enter element %d : ", i);
        scanf("%d", &current->data);
        if(i == size){
            current->next = 0;
        }
        else{
            current->next = (struct node*)malloc(sizeof(struct node));
            current = current->next;
        }
        i++;
    }
}*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void createLinkedList(struct node *present);
void displayLinkedList(struct node *head);
void searchLinkedList(struct node *head);
void searchReplaceLinkedList(struct node *head);
void insertLinkedList(struct node *head);
void deleteLinkedList(struct node *head);
int main(void)
{
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n ");
    printf("----------------------\n\n");
    printf("Linked List : Creating & Searching Linked List..\n\n");
    struct node *next;
    next = (struct node *)malloc(sizeof(struct node));
    createLinkedList(next);
    // searchLinkedList(next);
    displayLinkedList(next);
    // searchReplaceLinkedList(next);
    // insertLinkedList(next);
    deleteLinkedList(next);
    displayLinkedList(next);
    printf("\n\n");
    return 0;
}
void searchLinkedList(struct node *head)
{
    struct node *current;
    current = head;
    int searchData, count = 0;
    printf("\n\nEnter item to search : ");
    scanf("%d", &searchData);
    printf("\n");
    while (current != 0)
    {
        if (searchData == current->data)
        {
            count++;
        }
        current = current->next;
    }
    if (count == 0)
    {
        printf("Result : %d Not Found!", searchData);
    }
    else if (count == 1)
    {
        printf("Result : %d found 1 time!", searchData);
    }
    else
    {
        printf("Result : %d found %d times!", searchData, count);
    }
}
void displayLinkedList(struct node *head)
{
    struct node *current;
    current = head;
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Linked List : Creating & Searching Linked List..\n\n");
    printf("Your List --> ");
    while (current != 0)
    {
        printf("%-3d", current->data);
        current = current->next;
        if (current != 0)
            printf(": ");
    }
}
void createLinkedList(struct node *head)
{
    struct node *current;
    int size, i = 1;
    current = head;
    printf("Enter the number of elements : ");
    scanf("%d", &size);
    while (i <= size)
    {
        printf("%2d: ", i);
        scanf("%d", &current->data);
        if (size != i)
        {
            current->next = (struct node *)malloc(sizeof(struct node));
            current = current->next;
        }
        else
        {
            current->next = 0;
        }
        i++;
    }
}
void searchReplaceLinkedList(struct node *head)
{
    struct node *current;
    current = head;
    int searchData, replaceData, count = 0;
    printf("\n\nEnter item to search : ");
    scanf("%d", &searchData);
    printf("Enter item to replace : ");
    scanf("%d", &replaceData);
    printf("\n");
    while (current != 0)
    {
        if (searchData == current->data)
        {
            count++;
            current->data = replaceData;
        }
        current = current->next;
    }
    if (count == 0)
    {
        printf("Result : %d Not Found!", searchData);
    }
    else if (count == 1)
    {
        printf("Result : %d found 1 time!", searchData);
    }
    else
    {
        printf("Result : %d found %d times!", searchData, count);
    }
    if (count != 0)
    {
        printf("\n\nUpdated List --> ");
        current = head;
        while (current != 0)
        {
            printf("%3d ", current->data);
            current = current->next;
            if (current != 0)
                printf(":");
        }
    }
}
void insertLinkedList(struct node *head)
{
    struct node *current, *newNode;
    int insertionPosition, sizeOfList = 0, newValue;
    current = head;
    newNode = (struct node *)malloc(sizeof(struct node));
    while (current != 0)
    {
        sizeOfList++;
        current = current->next;
    }
    printf("\n\nEnter Insertion Position(1 - %d) : ", sizeOfList + 1);
    scanf("%d", &insertionPosition);
    printf("Enter Insertion Element  : ");
    scanf("%d", &newValue);
    // If Insertion at Head Node
    current = head;
    if (insertionPosition <= 1)
    {
        insertionPosition = 1;
        newNode->data = current->data;
        newNode->next = current->next;
        current->data = newValue;
        current->next = newNode;
    }
    else if (insertionPosition >= sizeOfList + 1)
    {
        insertionPosition = sizeOfList + 1;
        while (current->next != 0)
        {
            current = current->next;
        }
        current->next = newNode;
        newNode->data = newValue;
        newNode->next = 0;
    }
    else
    {
        int i = 1;
        while (i < insertionPosition - 1)
        {
            current = current->next;
            i++;
        }
        newNode->next = current->next;
        current->next = newNode;
        newNode->data = newValue;
    }
}
void deleteLinkedList(struct node *head)
{
    struct node *current, *newNode;
    current = head;
    newNode = (struct node *)malloc(sizeof(struct node));
    int deletionPosition, sizeOfList = 0;
    while (current != 0)
    {
        current = current->next;
        sizeOfList++;
    }
    printf("\n\nEnter Deletion Position(1 - %d) : ", sizeOfList);
    scanf("%d", &deletionPosition);
    current = head;
    if(deletionPosition <= 1){
        deletionPosition = 1;
        newNode = current->next;
        current->data = newNode->data;
        current->next = newNode->next;
        free(newNode);
    }
    else if(deletionPosition >= sizeOfList){
        deletionPosition = sizeOfList;
        int i = 1;
        while(i < deletionPosition){
            newNode = current;
            current = current->next;
            i++;
        }
        newNode->next = 0;
        free(current);
    }
    else{
        int i = 1;
        while(i < deletionPosition){
            newNode = current;
            current = current->next;
            i++;
        }
        newNode->next = current->next;
        free(current);
    }
}
