
#include<stdio.h>

#include<stdlib.h>


void add_at_end(struct node *,int);
//inserting node at end
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

    printf("%d\n",current2->data);



   add_at_end(head,60);
	

   
     	return 0;
}

void add_at_end(struct node *head,int data)
{
	struct node *ptr , *temp;

	ptr=head;
	temp=(struct node *)malloc(sizeof(struct node));
	
	temp->data=data;
	temp->link=NULL;

	while(ptr->link!=NULL)
	{
		
		ptr=ptr->link;
	}
	ptr->link=temp;
	printf("%d\n",temp->data); 
	
}


