#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} node;

node* createnode(int value) {
    node* p = (node*)malloc(sizeof(node));
    if (p == NULL) {
        printf(" error\n");
        exit(1);
    }
    p->data = value;
    p->next = NULL;
    return p;
}


void insertAtBeginning(node** head, int value) {
    node* newnode = createnode(value);
    newnode->next = *head;
    *head = newnode;
}

void insertAtLast(node** tail, int value) {
    node* newnode = createnode(value);
    if (*tail == NULL) {
        *tail = newnode;
    } else {
        (*tail)->next = newnode;
        *tail = newnode;
    }
}


void insertNode(node** head, node** tail, int value, int index) {
   if (index == 0) {
        insertAtBeginning(head, value);
        if (*tail == NULL) { 
            *tail = *head;
        }
        return;
    }
    node* current = *head;
    for (int i = 0; i < index - 1 && current != NULL; i++) {
        current = current->next;
    }
    if (current == NULL) {
        printf("err\n");
        return;
    }

    node* newnode = createnode(value);
    newnode->next = current->next;
    current->next = newnode;

    if (newnode->next == NULL) { 
        *tail = newnode;
    }
}

void printList(node* head) {
    node* current = head;
    while (current!= NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("\n");
    
}


int main() {
    node* head = NULL;
    node* tail = NULL;
    int value;
    int choice = 1;
    int index;

    printf("Enter the data \n");

    while (choice != 0) {
        printf("Enter 1 to add data, 2 to display, 3 to insert at index, 0 to exit: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter value: ");
            scanf("%d", &value);
            if (value == 0) {
                break;
            }
            insertAtLast(&tail, value);
            if (head == NULL) { 
                head = tail; 
            }
        } else if (choice == 2) {
           
            printList(head);
             printf("\n");
        } else if (choice == 3) {
            printf("Enter value and index: ");
            scanf("%d %d", &value, &index);
            insertNode(&head, &tail, value, index);
        } else if (choice == 0) {
            break; 
        } else {
            printf("Invalid \n");
        }
    }

   
    return 0;
}
