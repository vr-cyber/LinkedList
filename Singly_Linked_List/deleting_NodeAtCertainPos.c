
#include<stdio.h>

#include<stdlib.h>


//deleting  node at certain position

void del_pos(struct node **,int);
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



   int position =2;
   del_pos(&head,position);
   struct node *ptr = NULL;
	ptr=(struct node *)malloc(sizeof(struct node));
   ptr=head;

while(ptr!=NULL)
{
   printf("%d  ",ptr->data);
   ptr=ptr->link;
   
     	
}
return 0;
}

void del_pos(struct node **head,int position)
{

	struct node *current = *head;
	struct node *previous = *head;

	if(*head==NULL)
		printf("empty");
	else if (position==1)
	{  
		*head=current->link;
		free(current);
		current=NULL;
	}
	else
	{
		

		while(position!=1)
		{
		   previous=current;
		   current=current->link;
		   position--;
			
		}
		
      previous->link=current->link;
		free(current);
		current = NULL;
	
	}
	
}




