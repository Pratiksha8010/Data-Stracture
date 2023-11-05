#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *left,*right;
}*root;

struct node *insert(struct node *root,int num)
{

 if(root==NULL){
    root=(struct node *)malloc(sizeof(struct node));
    root->data=num;
    root->right=NULL;
    root->left=NULL;
    return root;            

 }
 if(num>root->data){
    root->right=insert(root->right,num);
    return root;
 }
 if(num<root->data){
    root->left=insert(root->left,num);
    return root;
 }
    
}

void disp(struct node*root){
    if(root !=NULL){
        disp(root->left);
        printf("%d",root->data);
        disp(root->right);
    }
}


int main()
{

int num,n,i;
printf("limit....");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("\n enter num...");
scanf("%d",&num);
root=insert(root,num);
}

disp(root);
    return 0;
}