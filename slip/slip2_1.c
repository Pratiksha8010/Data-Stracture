// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>

// typedef struct node
// {
// int data;
//  struct node * next;
// }NODE;
//  NODE  * create(NODE *list)
//  {
//  NODE *temp,*newnode;
//    int i,n;
//    printf("\n enter limit for list .....");
//    scanf("%d",&n);
//    for(i=0;i<n;i++){
//     printf("\n enter data for node.....");
//      newnode=(NODE *)malloc(sizeof(NODE));
//     scanf("%d",&newnode->data);
//     newnode->next=NULL;
//     if(list==NULL){

//     temp=list=newnode;
//     }
//     else{
//      temp->next=newnode;
//      temp=newnode;
//      }

//    }
//     return list;
//  }
//  /*
//   void disp(NODE *list)
//   {
//   NODE *temp;
//   for(temp=list;temp!=NULL;temp=temp->next)
//   printf("%d",temp->data);

//   }
//    */
//    void disp(NODE *list){
//    NODE *temp=list;
//    while(temp!=NULL){
//    printf("%d\t",temp->data);

//  temp=temp->next;

//    }


//    }
// void union1(NODE *list,NODE *list1)
// {
//    NODE *temp,*temp1;
//    int f=0,val;
//    for(temp=list;temp!=NULL;temp=temp->next){
//     for(temp1=list1;temp1!=NULL;temp1=temp1->next){
//           if(temp->data==temp1->data){
//             f=1;
//              val=temp->data;
//             break;

//           }
//     }
//          if(f==1){
//            break;
//          }
//    }
//    if(f==1){
//     printf("\n %d",val);

//    }
//    else{
//     printf("\n not");
//    }


// }



// int main()
// {
//   NODE * list=NULL,*list1=NULL;

//   list=create(list);
//     printf("\n create list is......");
//   disp(list);
//   list1=create(list1);
//   printf("\n create list2 is...");
//   disp(list1);
//  union1(list,list1);
//   return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>

// typedef struct node
// {
// int data;
//  struct node * next;
// }NODE;
//  NODE  * create(NODE *list)
//  {
//  NODE *temp,*newnode;
//    int i,n;
//    printf("\n enter limit for list .....");
//    scanf("%d",&n);
//    for(i=0;i<n;i++){
//     printf("\n enter data for node.....");
//      newnode=(NODE *)malloc(sizeof(NODE));
//     scanf("%d",&newnode->data);
//     newnode->next=NULL;
//     if(list==NULL){

//     temp=list=newnode;
//     }
//     else{
//      temp->next=newnode;
//      temp=newnode;
//      }

//    }
//     return list;
//  }
//  /*
//   void disp(NODE *list)
//   {
//   NODE *temp;
//   for(temp=list;temp!=NULL;temp=temp->next)
//   printf("%d",temp->data);

//   }
//    */
//    void disp(NODE *list){
//    NODE *temp=list;
//    while(temp!=NULL){
//    printf("%d\t",temp->data);

//  temp=temp->next;

//    }


//    }
// void union1(NODE *list,NODE *list1)
// {
//    NODE *temp,*temp1,*temp2,*temp3;
//    int f=0,val;
//               for(temp1=list;temp1!=NULL;temp1=temp1->next) { 

//              for(temp=list1;temp!=NULL;temp=temp->next){
                
//                    if(temp->data!=temp1->data){
//                        printf("\n %d",temp->data);
//              }
//              }


//               } 



// }




// int main()
// {
//   NODE * list=NULL,*list1=NULL;

//   list=create(list);

//   list1=create(list1);
//     printf("\n create list is......");
//   disp(list);
//   printf("\n create list1 is...");
//   disp(list1);

//  printf("\n fist list union is......");
//  disp(list);
//  printf("\n");
//   union1(list,list1);
 
//   return 0;
// }

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node
{
int data;
 struct node * next;
}NODE;
 NODE  * create(NODE *list)
 {
 NODE *temp,*newnode;
   int i,n;
   printf("\n enter limit for list .....");
   scanf("%d",&n);
   for(i=0;i<n;i++){
    printf("\n enter data for node.....");
     newnode=(NODE *)malloc(sizeof(NODE));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(list==NULL){

    temp=list=newnode;
    }
    else{
     temp->next=newnode;
     temp=newnode;
     }

   }
    return list;
 }
 /*
  void disp(NODE *list)
  {
  NODE *temp;
  for(temp=list;temp!=NULL;temp=temp->next)
  printf("%d",temp->data);

  }
   */
   void disp(NODE *list){
   NODE *temp;
   for(temp=list;temp!=NULL;temp=temp->next){
                 printf("%d\t",temp->data);
   }


   }
// void union1(NODE *list,NODE *list1)
// {
//    NODE *temp,*temp1,*temp2,*temp3;
//    int f=0,val;
//               for(temp1=list;temp1!=NULL;temp1=temp1->next) { 

//              for(temp=list1;temp!=NULL;temp=temp->next){
                
//                    if(temp->data!=temp1->data){
//                        printf("\n %d",temp->data);
//              }
//              }


//               } 



// }

NODE *conc(NODE *list,NODE *list1)
{
 NODE *temp;
for(temp=list;temp->next!=NULL;temp=temp->next); 
temp->next=list1;

return list;
}


void union1(NODE *list){
NODE *temp;
for(temp=list;temp->next!=NULL;temp=temp->next){
         if(temp->data!=temp->next->data){
            printf("%d\t",temp->data);
         }
         
}
printf("%d",temp->data);
}
    




NODE *sort(NODE  *list)
{
  int t;
  NODE *temp,*temp1;
  for(temp=list;temp!=NULL;temp=temp->next)
  {
    for(temp1=temp->next;temp1!=NULL;temp1=temp1->next)
    {
       if(temp->data>temp1->data)
       {
          t=temp->data;
          temp->data=temp1->data;
          temp1->data=t;
       }
    }
  }return list;
}



int main()
{
  NODE * list=NULL,*list1=NULL;

  list=create(list);

  list1=create(list1);
    printf("\n create list is......");
  disp(list);
  printf("\n create list1 is...");
  disp(list1);
  printf("\n concat list is .......\n ");
  list= conc(list,list1);
  disp(list);

printf("\n sorted list is......");
sort(list);
disp(list);

printf("\n union....");
 union1(list);
  
 
  return 0;
}