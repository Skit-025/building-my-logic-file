#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int queue[MAX];

// Function to insert (enqueue)
int enqueue(int queue[], int rear, int ITEM, int front) {
    if(rear == MAX - 1) {
        printf("Queue Overflow\n");
        return rear;
    } else {
        if(front == -1) front = 0;  // first insertion
        rear++;
        queue[rear] = ITEM;
        printf("Inserted element: %d\n", ITEM);
        return rear;
    }
}

// Function to delete (dequeue)
int dequeue(int queue[], int front, int rear) {
    if(front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return front;
    } else {
        int ITEM = queue[front];
        printf("Deleted element: %d\n", ITEM);
        front++;
        return front;
    }
}

// Function to display queue
void Display(int queue[], int front, int rear) {
    if(front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements are:\n");
        for(int i = front; i <= rear; i++) {
            printf("%d\n", queue[i]);
        }
    }
}

int main() {
    int front = -1, rear = -1, choice, ITEM;
    do {
        printf("\n//MENU//\n");
        printf("1. INSERT (Enqueue)\n");
        printf("2. DELETE (Dequeue)\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter element to be inserted: ");
                scanf("%d", &ITEM);
                rear = enqueue(queue, rear, ITEM, front);
                if(front == -1) front = 0;  // ensure front is set
                break;
            case 2:
                front = dequeue(queue, front, rear);
                break;
            case 3:
                Display(queue, front, rear);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while(choice != 4);

    return 0;
}