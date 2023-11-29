#include <stdio.h>
#include "IntegersQueue.h"
#include "IntegersStack.h"

int isPalindrome(int num);

int main(void) {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("It's a palindrome\n");
    } else {
        printf("It's not a palindrome\n");
    }

    return 0;
}

int isPalindrome(int num) {
    // Create a stack and a queue
    Stack* stack = StackCreate(11);
    Queue* queue = QueueCreate(11);

    int tempNum = num;

    // Push digits onto the stack and enqueue them
    while (tempNum > 0) {
        int digit = tempNum % 10;
        StackPush(stack, digit);
        QueueEnqueue(queue, digit);
        tempNum /= 10;
    }

    // Compare digits from the stack and the queue
    while (!StackIsEmpty(stack) && !QueueIsEmpty(queue)) {
        int stackDigit = StackPop(stack);
        int queueDigit = QueueDequeue(queue);

        if (stackDigit != queueDigit) {
            // Not a palindrome
            StackDestroy(&stack);
            QueueDestroy(&queue);
            return 0;
        }
    }

    // Clean up the data structures
    StackDestroy(&stack);
    QueueDestroy(&queue);

    // If we reach this point, it's a palindrome
    return 1;
}
