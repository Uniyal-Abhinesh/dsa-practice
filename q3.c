//to implement stack uding array
#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Maximum size of the stack

// Function to push an element into the stack
void push(int stack[], int *top, int value) {
    if (*top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        (*top)++;
        stack[*top] = value;
        printf("Pushed %d into the stack.\n", value);
    }
}

// Function to pop an element from the stack
int pop(int stack[], int *top) {
    if (*top == -1) {
        printf("Stack Underflow! No element to pop.\n");
        return -1;
    } else {
        int poppedValue = stack[*top];
        (*top)--;
        printf("Popped %d from the stack.\n", poppedValue);
        return poppedValue;
    }
}

// Function to display the elements in the stack
void display(int stack[], int top) {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int stack[MAX];
    int top = -1;
    int choice, value;

    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(stack, &top, value);
                break;
            case 2:
                pop(stack, &top);
                break;
            case 3:
                display(stack, top);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
