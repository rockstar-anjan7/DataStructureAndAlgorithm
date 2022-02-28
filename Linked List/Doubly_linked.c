#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
void linkedListTraversal(struct node *ptr)
{
    while (ptr->next != NULL)
    {
        printf("  %d", ptr->data);
        ptr = ptr->next;
    }
    printf(" %d",ptr->data);
    printf("\n After linked list traversal backward\n");
     while (ptr->prev != NULL)
    {
        printf("  %d", ptr->data);
        ptr = ptr->prev;
    }
    printf(" %d",ptr->data);
}
 

int main()
{

    struct node *head, *second, *third, *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // Link first and second nodes
    head->prev = NULL;
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->prev = head;
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->prev = second;
    third->data = 41;

    third->next = fourth;

    // Terminate the list at the third node
    fourth->prev = third;
    fourth->data = 66;

    fourth->next = NULL;

    printf(" Doubly Linked list after creation of List\n");
    linkedListTraversal(head);
    // printf("Doubly linked list traverse in reverse direction\n");
    // DoublyLinkedListReverse(head);

    return 0;
}