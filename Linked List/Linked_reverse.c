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
        printf("  %d", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
struct node *linkedListReverse(struct node *head)
{
    struct node *curr, *prev, *temp;
    prev = NULL;
    curr = head;
    while (curr != NULL)
    {
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    head = prev;
    return head;
}
int main()
{
    struct node *head,*second,*third,*fourth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 41;
    third->next = fourth;
    fourth->data = 66;
    fourth->next = NULL;
    printf("Linked list before reverse operation\n");
    linkedListTraversal(head);
    head = linkedListReverse(head);
    printf("Linked list after reverse operation\n");
    linkedListTraversal(head);
    return 0;
}