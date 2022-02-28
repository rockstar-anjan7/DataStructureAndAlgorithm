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
// case first when we insert data at beginning
struct node *InsertAtFirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
// case 2 when we insert data at the end
struct node *InsertAtEnd(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p=head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
   return head;
}
// case 3 when we add data at any index
struct node *insertAtIndex(struct node *head, int data,int index){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
// case 4 when we add data after any node
struct node * insertAfterNode(struct node *head, struct node *prevNode, int data){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = data;
 
    ptr->next = prevNode->next;
    prevNode->next = ptr;
 
    return head;
}
int main()
{

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next =fourth;
    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;
    printf("Linked list before insertion\n");
    linkedListTraversal(head);
    head = InsertAtFirst(head, 55);
    head=InsertAtEnd(head,45);
    head=insertAtIndex(head,101,2);
    head=insertAfterNode(head,third,2);
    printf("Linked list after insertion\n");
    linkedListTraversal(head);
    return 0;
}