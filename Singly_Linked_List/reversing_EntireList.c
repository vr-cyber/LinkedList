
#include<stdio.h>

#include<stdlib.h>


//deleting  entire list

struct node* reverse(struct node *);
struct node 
{
	int data ;
	struct node *link;
};



int main()
{    
	struct node *head = NULL;
	head=(struct node *)malloc(sizeof(struct node));
	
    head ->data =45;
    head ->link =NULL;
	
	printf("%d\n",head->data);

	struct node *current = NULL;
	current=(struct node *)malloc(sizeof(struct node));
	
    current ->data =50;
    current ->link =NULL;

    head->link=current;

    printf("%d\n",current->data);

   struct node *current2 = NULL;
	current2=(struct node*)malloc(sizeof(struct node));
	
    current2->data =55;
    current2->link =NULL;

    current->link=current2;

    printf("%d\n\n",current2->data);



   
   head=reverse(head);
   struct node *ptr = NULL;
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr=head;
	
	while(ptr!=NULL)
	{
		printf("%d  ",ptr->data);
		ptr=ptr->link;
	}	
	return 0;
    

}

struct node* reverse(struct node *head)
{

	struct node *prev = NULL;
		struct node *next = NULL;

	while(head!=NULL)
	{
		next=head->link;
		head->link=prev;
		prev=head;
		head=next;
	}
	head=prev;
	return head;
}




