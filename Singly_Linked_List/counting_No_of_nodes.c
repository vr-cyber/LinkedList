
#include<stdio.h>

#include<stdlib.h>


void count_of_nodes(struct node *);
//creating three  nodes
//method-2
//counting no of nodes
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

   
	//current=malloc(sizeof(struct node));
	
    current->data =55;
    current->link =NULL;

    head->link->link=NULL;

    printf("%d\n",current->data);



   count_of_nodes(head);
	

    
     	return 0;
}

void count_of_nodes(struct node *head)
{
	int count=1;
	if(head==NULL)
		printf("empty");
	struct node *ptr = NULL;
	ptr=head;
	while(ptr!=NULL)
	{   count++;
		
		ptr=ptr->link;
	}
	printf("%d",count);
	
	
}


