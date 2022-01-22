
#include<stdio.h>

#include<stdlib.h>


//deleting  node at begining

struct node * del_first(struct node *);
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
   head=del_first(head);
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

struct node * del_first(struct node *head)
{
	if(head==NULL)
		printf("empty");
	else
	{
		struct node *temp =head;
		head=head->link;
		free(temp);
	
	}
	return head;
}
