#include<stdio.h>
struct node{
	int info;
	struct node* link;
}
struct node* start=NULL;
void traverse()
{  struct node* temp;
     if(start==NULL){
		 printf("\nList is Empty.\n");
	 }
	 else{
		 temp=start;
		 while(temp!=NULL){
			 printf("\nData is: %d\n",temp->info);
		     temp=temp->link;
		 }
	 }
}
void insertAtPosition(){
	struct node* temp,newnode;
	int pos,data,i=1;
	newnode=malloc(sizeof(struct node));
    temp=start;
	printf("\nEnter position and Data: ");
	scanf("%d %d",&pos,&data);
	

}
