#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next,*prev;
}NODE;

NODE *create(NODE *list)
{
	NODE *newnode,*temp;
	int n,i;
	printf("Enter limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(NODE*)malloc(sizeof(NODE));
		printf("Enter value:");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(list==NULL)
		{
			list=newnode;
			temp=newnode;	
		}
		else
		{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
		}
	}
	return list;
}
void disp(NODE *list)
{
	NODE *temp;
	for(temp=list;temp!=NULL;temp=temp->next)
	{
		printf("%d\t",temp->data);
	}
}
NODE *insert(NODE *list,int num,int pos)
{
	NODE *newnode,*temp;
	int i;
	newnode=(NODE*)malloc(sizeof(NODE));
	newnode->data=num;
	if(pos==1)
	{
		newnode->next=list;
		list->prev=newnode;
		list=newnode;
	}
	else
	{
		for(i=1,temp=list;i<(pos-1)&&temp->next!=NULL;i++,temp=temp->next);
		newnode->next=temp->next;
		temp->next->prev=newnode;
		temp->next=newnode;
		newnode->prev=temp;
	}
	return list;
}
NODE *del(NODE *list,int pos)
{
	NODE *temp,*temp1;
	int i;
	if(pos==1)
	{
		temp=list;
		list=list->next;
		free(temp);
	}
	else
	{
		for(i=1,temp=list;i<(pos-1)&&temp->next->next!=NULL;i++,temp=temp->next);
		temp1=temp->next;
		temp->next=temp1->next;
		temp1->next->prev=temp;
		free(temp1);
	}
	return list;
}
int main()
{
	struct node *list=NULL;
	int num,pos,ch;
	do
	{
		printf("\n1-create \n2-disp \n3-insert \n4-delete");
		printf("\nEnter choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:list=create(list);
					break;
			case 2:disp(list);
					break;
			case 3:printf("Enter number: ");
					scanf("%d",&num);
					printf("Enter pos: ");
					scanf("%d",&pos);
					list=insert(list,num,pos);
					break;
			case 4:	printf("Enter pos: ");
					scanf("%d",&pos);
					list=del(list,pos);
					break;
			default:printf("Invalid choice...");
		}
	}while(ch<5);
}