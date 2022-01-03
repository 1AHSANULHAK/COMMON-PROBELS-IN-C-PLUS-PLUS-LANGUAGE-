#include<stdio.h>

#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
struct node *deleteatindex(struct node * head,int index){
    struct node *p=head;
    struct node *q=p->next;
    for(int i=0;i<index-1;i++){
        p=p->next;
        q=p->next;
        
    
    }
  p->next=q->next; 
  return head;
}
void TraversList(struct node *ptr)
{
    while(ptr!=NULL){
        printf("element is %d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    struct node * head;
    struct node * second ;
    struct node * third;
    head= (struct node*)malloc (sizeof(struct node));
    second= (struct node*)malloc (sizeof(struct node));
    third= (struct node*)malloc (sizeof(struct node));

    head->data=8;
    head->next=second;


    second->data=4;
    second->next=third;
    TraversList(head);
    printf("before deletion of an data");
    TraversList(head);

    third->data=7;
    third->next=NULL;
    
    head=deleteatindex(head,2);
    printf("after deletion\n");
    TraversList(head);
    return 0;
}
