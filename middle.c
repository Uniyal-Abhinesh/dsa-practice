//CODE to find the middle element in a singly ll
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

void findmiddle(node *head) {
    node *slow = head;
    node *fast = head;
    
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    printf("The middle element is: %d\n", slow->data);
}

int main() {
    node *head = (node*)malloc(sizeof(node));
    node *second = (node*)malloc(sizeof(node));
    node *third = (node*)malloc(sizeof(node));
    node *fourth = (node*)malloc(sizeof(node));

    head->data = 1;
    head->next = second;
    
    second->data = 2;
    second->next = third;
    
    third->data = 3;
    third->next = fourth;
    
    fourth->data = 4;
    fourth->next = NULL;

    findmiddle(head);

    // Free allocated memory
    free(head);
    free(second);
    free(third);
    free(fourth);

    return 0;
}

