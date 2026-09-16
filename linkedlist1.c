#include<stdio.h>

/*first we create a nofe with a two parts it is a data part and the pointer part*/
struct node                   
{
    /* data */
    int data;
    struct node *next; // this struct use to pointer to the next node
    
};
struct node *head =NULL; // head is note a data part its point to the first node of the linked list that why we use *sign before the head

/*inserting the node */
struct node*instert_beg(struct node*head,int num ){
    struct node *first_node;
    printf("\n Enter the data:");
    scanf("%d",&num);
    first_node = (struct node*)malloc(sizeof(struct node));
    first_node -> data =num;
    first_node -> next =NULL;
    head = first_node;
    return head;
    
}
