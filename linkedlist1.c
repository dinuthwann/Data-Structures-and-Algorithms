#include<stdio.h>
#include <stdlib.h>

/*first we create a nofe with a two parts it is a data part and the pointer part*/
struct node                   
{
    /* data */
    int data;
    struct node *next; // this struct use to pointer to the next node
    
};
struct node *head =NULL; // head is note a data part its point to the first node of the linked list that why we use *sign before the head

/*inserting the node */
struct node*instert_beg(struct node*head,int val ){
    struct node *first_node;
    printf("\n Enter the data:");
    scanf("%d",&val);
    first_node = (struct node*)malloc(sizeof(struct node));
    first_node -> data =val;
    first_node -> next =NULL;
    head = first_node;
    return head;
    
}
struct node*instert_end(struct node *head,int val){
    struct node *ptr ,*first_node;
    printf("\n Enter the data : ");
    scanf("%d",&val);
    first_node = (struct node*)malloc(sizeof(struct node));
    first_node ->data= val;
    first_node ->next=NULL;
    ptr = head;
    while (ptr->next!= NULL)
    {
        /* code */
        ptr = ptr ->next;
        ptr ->next= first_node;
    }
    
}
void display(struct node*head){
    struct node* ptr;
    ptr = head;
    while (ptr!=NULL)
    {
        /* code */
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    
}
int main() {
    int choice, val = 0;

    while (1) {
        printf("\n--- Linked List Menu ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                head = insert_beg(head, val);
                break;
            case 2:
                head = insert_end(head, val);
                break;
            case 3:
                display(head);
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
