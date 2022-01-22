
#include<stdio.h>

#include<stdlib.h>


//inserting node at certain position

void add_at_pos(struct node *,int ,int );
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



   int data=70,position=2;
   add_at_pos(head,data,position);
   struct node *ptr=head;

while(ptr!=NULL)
{
   printf("%d  ",ptr->data);
   ptr=ptr->link;
   
     	
}
return 0;
}

void add_at_pos(struct node *head,int data,int pos)
{
	struct node *ptr=head;
	struct node *ptr2= NULL;
	ptr2=(struct node *)malloc(sizeof(struct node));
	ptr2->data=data;
	ptr2->link=NULL;
	pos--;
	while(pos!=1)
	{
		ptr=ptr->link;
		pos--;

	}
	ptr2->link=ptr->link;
	ptr->link=ptr2;
}