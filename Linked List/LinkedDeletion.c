#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf(" %d", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
// Case 1: Deleting the first element from the linked list
struct node *deleteFirst(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
// Case 2: Deleting the element at a given index from the linked list
struct node *deleteAtIndex(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
// Case 3: Deleting the last element
struct node *deleteAtLast(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
// Case 4: Deleting the element with a given value from the linked list
struct node *deleteAValue(struct node *head, int value)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}
int main()
{
    struct node *head,*second,*third,*fourth;
    // Allocate memory for nodes in the linked list in Heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    // Link first and second nodes
    head->data = 4;
    head->next = second;
    // Link second and third nodes
    second->data = 3;
    second->next = third;
    // Link third and fourth nodes
    third->data = 8;
    third->next = fourth;
    // Terminate the list at the third node
    fourth->data = 1;
    fourth->next = NULL;
    printf("Linked list before deletion\n");
    linkedListTraversal(head);
    // head = deleteFirst(head); // For deleting first element of the linked list
    // head = deleteAtIndex(head, 2);
    // head = deleteAtLast(head);
    head = deleteAValue(head, 3);
    printf("Linked list after deletion\n");
    linkedListTraversal(head);
    return 0;
}