
#include<stdio.h>

#include<stdlib.h>


void print_data(struct node *);
//printing data
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



   print_data(head);
	

    
     	return 0;
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


