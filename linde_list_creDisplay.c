#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main()
{
	int num;
	struct node *new_node,*ptr,*start;
	printf("Eneter a number: ");
	scanf("%d",&num);
	while(num!=-1)
	{
		new_node=(struct node*)malloc(sizeof(struct node));
		new_node->data=num;
		if(start==NULL)
		{
			start=new_node;
			ptr=new_node;
		}
		else
		{
			while(ptr!=NULL)
			{
				ptr->next=new_node;
				ptr=new_node;
				ptr->next=NULL;
				
			}
				ptr->next=new_node;
				new_node->next=NULL;
	    }
			scanf("%d",&num);
		}
		printf("Linked List added");
		printf("Values Added to linked list\n");
		
			ptr=start;
			while(ptr!=NULL)
			{
				printf("%d\t",ptr->data);
				ptr=ptr->next;
			}
		
		return 0;
	}
		
			
