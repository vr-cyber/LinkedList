
#include<stdio.h>

#include<stdlib.h>


//deleting  node at last

void del_last(struct node *);
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



 
   del_last(head);
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

void del_last(struct node *head)
{
	if(head==NULL)
		printf("empty");
	else if (head->link==NULL)
	{
		free(head);
		head=NULL;
	}
	else
	{
		struct node *temp =head;
		struct node *temp2 =head;
		while(temp->link!=NULL)
		{
			temp2=temp;
			temp=temp->link;
		}
		temp2->link=NULL;

		free(temp);
		temp = NULL;
	
	}
	
}




//deleting node at last using return type

/*#include<iostream>
#include<stdio.h>
#include<string.h>
#include <bits/stdc++.h>
#include<stdlib.h>
using namespace std;

//deleting  node at last using single pointer

struct node * del_last(struct node *);
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



 
   head=del_last(head);
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

struct node * del_last(struct node *head)
{
	if(head==NULL)
		printf("empty");
	else if (head->link==NULL)
	{
		free(head);
		head=NULL;
	}
	else
	{
		struct node *temp =head;
		struct node *temp2 =head;
		while(temp->link!=NULL)
		{
			temp2=temp;
			temp=temp->link;
		}
		temp2->link=NULL;

		free(temp);
		temp = NULL;
	
	}
	return head;
}
*/


/*
#include<iostream>
#include<stdio.h>
#include<string.h>
#include <bits/stdc++.h>
#include<stdlib.h>
using namespace std;

//deleting  node at last

void del_last(struct node *);
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



 
   del_last(head);
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

void del_last(struct node *head)
{
	if(head==NULL)
		printf("empty");
	else if (head->link==NULL)
	{
		free(head);
		head=NULL;
	}
	else
	{
		struct node *temp =head;

		while(temp->link->link!=NULL)
		{
		
			temp=temp->link;
		}
		

		free(temp->link);
		temp->link = NULL;
	
	}
	
}

*/