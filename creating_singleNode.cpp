#include<iostream>
#include<stdio.h>
#include<string.h>
#include <bits/stdc++.h>
#include<stdlib.h>
using namespace std;

//creating a single node
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
	
	printf("%d",head->data);

    
     	return 0;
}


