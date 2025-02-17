#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node 
{
    char name[50];
    int roll_no;
    struct node *next;
}node;
void displayList(struct Node* head) {     if (!head) { 
        printf("List is empty.\n"); 
        return; 
    } 
    while (head != NULL) { 
        printf("Name: %s, Roll No: %d\n", head->name, head->rollNo);         head = head->next; 
    } 
} 
void deleteduplicate() 
int main() {     struct Node* head = NULL;     int choice, rollNo; 
    char name[50]; 
    do { 
        printf("\n--- Menu ---\n");         printf("1. Insert a student\n");         printf("2. Display the linked list\n");         printf("3. Remove duplicate names\n"); 
        printf("4. Exit\n");         printf("Enter your choice: ");         scanf("%d", &choice);         switch (choice) {         case 1: 
            printf("Enter student's name: ");             scanf("%s", name);             printf("Enter roll number: ");             scanf("%d", &rollNo); 
            insertEnd(&head, name, rollNo); 
            break;         case 2: 
            printf("Current Linked List:\n");             displayList(head); 
            break;         case 3: 
            deleteDuplicates(head); 
            printf("Duplicate names removed successfully.\n");             break;         case 4: 
            printf("Exiting the program.\n"); 
            break; 
        } 
    } while (choice != 4);     return 0; 
