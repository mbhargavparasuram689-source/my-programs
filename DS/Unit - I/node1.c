#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

int main() {
    struct Node* node1 = createNode(10);
    struct Node* node2 = createNode(18);
    printf("Node created with data = %d\n", node1->data);
     printf("Node created with data = %d\n", node2->data);
    free(node1);
    free(node2);
    return 0;
}