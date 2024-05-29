#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void createList(struct node *head);
void displayList(struct node *head);
void searchList(struct node *head);
void searchReplaceList(struct node *head);
void insertionList(struct node *head);
void deletionList(struct node *head);
int main(void)
{
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Linked List : Menu Driven Operations..\n\n");
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    createList(head);
    displayList(head);
    printf("\n\n");
    return 0;
}
void createList(struct node *head)
{
    struct node *current;
    current = head;
    int i = 1, size;
    printf("Enter the Number of Elements : ");
    scanf("%d", &size);
    printf("\nEnter %d Elements...\n", size);
    while (i <= size)
    {
        printf("[%2d] : ", i);
        scanf("%d", &current->data);
        if (i < size)
        {
            current->next = (struct node *)malloc(sizeof(struct node));
            current = current->next;
        }
        else
            current = 0;
        i++;
    }
}
void displayList(struct node *head)
{
    struct node *current;
    current = head;
    int i = 1;
    int choice = 0;
    do{
    system("clear");
    printf("C   ||  BHARAT ACHARYA\n");
    printf("----------------------\n\n");
    printf("Linked List : Menu Driven Operations..\n\n");
    printf("\nYour List --> ");
    while (current != 0)
    {
        printf("%3d", current->data);
        current = current->next;
        if (current != 0)
        {
            printf(": ");
        }
    }
    current = head;
    printf("\n\nYour Options : 1) Search List");
    printf("\n               2) Search & Replace List");
    printf("\n               3) Insert New Element");
    printf("\n               4) Delete Element");
    printf("\n               5) Exit\n\n");
    printf("Enter Your Choice : ");
    scanf("%d", &choice);
    switch(choice){
        case 1: 
            searchList(current);
            getchar();
            getchar();
            break;
        case 2: 
            searchReplaceList(current);
            getchar();
            getchar();
            break;
        case 3: 
            insertionList(current);
            break;
        case 4: 
            deletionList(current);
            break;
        case 5:
            printf("\nThank you!!");
            break;
        default:
            printf("Incorrect Input. Try Again!");
    }
    }
    while(choice != 5);
}
void searchList(struct node *head)
{
    struct node *current;
    current = head;
    int searchElement, count = 0;
    printf("\nEnter Search ELement : ");
    scanf("%d", &searchElement);
    while (current != 0)
    {
        if (searchElement == current->data)
        {
            count++;
        }
        current = current->next;
    }
    if (count == 0)
    {
        printf("\nResult --> %d not found!!", searchElement);
    }
    else if (count == 1)
    {
        printf("\nResult --> %d found %d time!!", searchElement, count);
    }
    else
        printf("\nResult --> %d found %d times!!", searchElement, count);
    printf("\n");
}
void searchReplaceList(struct node *head){
    struct node *current;
    current = head;
    int count = 0;
    int searchElement, replaceElement;
    printf("\nEnter Search Element  : ");
    scanf("%d", &searchElement);
    printf("Enter Replace Element : ");
    scanf("%d", &replaceElement);
    while(current != 0){
        if(current->data == searchElement){
            count++;
            current->data = replaceElement;
        }
        current = current->next;
    }
    if (count == 0)
    {
        printf("\nResult --> %d not found!!", searchElement);
    }
    else if (count == 1)
    {
        printf("\nResult --> %d found %d time!!", searchElement, count);
    }
    else
        printf("\nResult --> %d found %d times!!", searchElement, count);
    printf("\n");
}
void insertionList(struct node *head){
    struct node *current, *newNode;
    current = head;
    newNode = (struct node*)malloc(sizeof(struct node));
    int size = 0, i = 1;
    int insertionPosition, insertionElement;
    while(current != 0){
        current = current->next;
        size++;
    }
    current = head;
    printf("\nEnter Insertion Position(1 - %d) : ", size + 1);
    scanf("%d", &insertionPosition);
    printf("Enter Insertion Element : ");
    scanf("%d", &insertionElement);
    if(insertionPosition <= 1){
        insertionPosition = 1;
        newNode->data = current->data;
        newNode->next = current->next;
        current->data = insertionElement;
        current->next = newNode;
    }
    else if(insertionPosition >= size + 1){
        insertionPosition = size + 1;
        while(current->next != 0){
            current = current->next;
        }
        newNode->data = insertionElement;
        newNode->next = 0;
        current->next = newNode;
    }
    else{
        while(i < insertionPosition - 1){
            current = current->next;
            i++;
        }
        newNode->next = current->next;
        newNode->data = insertionElement;
        current->next = newNode;
    }
}
void deletionList(struct node *head){
    struct node *current, *trace;
    current = head;
    trace = (struct node*)malloc(sizeof(struct node));
    int size = 0, i = 1;
    int deletionPosition;
    while(current != 0){
        current = current->next;
        size++;
    }
    current = head;
    printf("\n\nEnter Deletion Position(1 - %d) : ", size);
    scanf("%d", &deletionPosition);
    if(deletionPosition <= 1){
        deletionPosition = 1;
        trace = current->next;
        current->data = trace->data;
        current->next = trace->next;
        free(trace);
    }
    else if(deletionPosition >= size){
        deletionPosition = size;
        while(i < size - 1){
            current = current->next;
            i++;
        }
        trace = current->next;
        current->next = 0;
        free(trace);
    }
    else{
        while(i < deletionPosition - 1){
            current = current->next;
            i++;
        }
        trace = current->next;
        current->next = trace->next;
        free(trace);
    }
}