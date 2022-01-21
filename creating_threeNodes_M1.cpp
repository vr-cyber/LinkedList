#include<iostream>
#include<stdio.h>
#include<string.h>
#include <bits/stdc++.h>
#include<stdlib.h>
using namespace std;

//creating three  nodes
//method-1
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
	current2=(struct node *)malloc(sizeof(struct node));
	
    current2 ->data =55;
    current2 ->link =NULL;

    current->link=current2;

    printf("%d",current2->data);
	

    
     	return 0;
}


