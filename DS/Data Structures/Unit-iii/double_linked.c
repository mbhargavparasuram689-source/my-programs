#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node* prev;
    int data;
    struct node* next;
}*head = NULL;

void create_dll() {
    struct node *temp, *ptr;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = temp->next = NULL;

    printf("Enter data in node: ");
    scanf("%d", &temp->data); 

    if (head == NULL) {
        head = temp;
    } else {
        ptr = head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->prev = ptr;
    }
}

void display_dll() {
    struct node *ptr = head;

    if (head == NULL) {
        printf("Double Linked List is empty.\n");
        return;
    }

    while (ptr != NULL) {
        printf("<-%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

void first_insert() {
    struct node *temp =malloc(sizeof(struct node));
    temp->prev = temp->next = NULL;

    printf("Enter data: ");
    scanf("%d", &temp->data);

    if (head == NULL) {
        head = temp;
    } else {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void last_insert() {
    struct node *temp =malloc(sizeof(struct node)), *ptr;
    temp->prev = temp->next = NULL;

    printf("Enter data: ");
    scanf("%d", &temp->data);

    if (head == NULL) {
        head = temp;
    } else {
        ptr = head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->prev = ptr;
    }
}

void anypos() {
    struct node *ptr = head, *temp, *ptr1;
    int pos, count = 0;

    while (ptr != NULL) {
        count++;
        ptr = ptr->next;
    }

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > count + 1) {
        printf("Invalid position.\n");
        return;
    }

    if (pos == 1) {
        first_insert();
        return;
    }

    if (pos > count) {
        last_insert();
        return;
    }

    temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = temp->next = NULL;

    printf("Enter data: ");
    scanf("%d", &temp->data);

    ptr = head;
    for (int i = 1; i < pos - 1; i++) {
        ptr = ptr->next;
    }

    temp->next = ptr->next;
    temp->prev = ptr;

    ptr->next->prev = temp;
    ptr->next = temp;
}

void first_del() {
    struct node *ptr = head;

    if (ptr == NULL) {
        printf("Double Linked List is empty.\n");
        return;
    }

    head = ptr->next;
    if (head != NULL)
        head->prev = NULL;

    free(ptr);
}

void last_delete() {
    struct node *ptr = head;

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    while (ptr->next != NULL) {
        ptr = ptr->next;
    }

    if (ptr->prev != NULL) {
        ptr->prev->next = NULL;
    } else {
        head = NULL;
    }

    free(ptr);
}

void anypos_del() {
    struct node *ptr = head, *temp;
    int pos, count = 0;

    while (ptr != NULL) {
        count++;
        ptr = ptr->next;
    }

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > count) {
        printf("Invalid position.\n");
        return;
    }

    if (pos == 1) {
        first_del();
        return;
    }

    ptr = head;
    for (int i = 1; i < pos; i++) {
        ptr = ptr->next;
    }

    temp = ptr;
    ptr->prev->next = ptr->next;

   

    free(temp);
}

int main() {
    int ch;

    while (1) {
        printf("\n0. Exit\n1. Create\n2. Display\n3. First Insert\n4. Last Insert\n5. Any Position Insert\n6. Any Position Delete\n7. Last Delete\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 0: exit(0);
            case 1: create_dll(); break;
            case 2: display_dll(); break;
            case 3: first_insert(); break;
            case 4: last_insert(); break;
            case 5: anypos(); break;
            case 6: anypos_del(); break;
            case 7: last_delete(); break;
            default: printf("Invalid choice.\n");
        }
    }

    return 0;
}
