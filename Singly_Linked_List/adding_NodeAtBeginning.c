
#include<stdio.h>

#include<stdlib.h>


//inserting node at begining
struct node 
{
	int data ;
	struct node *link;
};


struct node* add_beg(struct node *,int);
void print_data(struct node *);

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



   int d=70;
   head=add_beg(head,d);
   

    print_data(head);
     	return 0;
}

struct node* add_beg(struct node *head,int d)
{
	struct node *ptr = NULL;
	ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=d;
    ptr->link=NULL;

    ptr->link=head;
	head=ptr;
	return head;
	
}
void print_data(struct node *head)
{
	
	if(head==NULL)
		printf("no data");
	struct node *ptr = NULL;
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->link;
	}
	
	
}


