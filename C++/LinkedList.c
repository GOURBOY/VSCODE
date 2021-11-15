#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node* link;
}
struct node* start =NULL;
void traverse(){
    struct node* temp;
    if(start==NULL){
        printf();    
    }
    else{
        temp=start;
        while(temp!=NULL){
            printf("\nData is: %d\n",&temp->info);
            temp=temp->link;
        }
    }

    void insertAtPosition()
{
	struct node *temp, *newnode;
	int pos, data, i = 1;
	newnode = malloc(sizeof(struct node));
	printf("\nEnter position and data :");
	scanf("%d %d", &pos, &data);
	temp = start;
	newnode->info = data;
	newnode->link = 0;
	while (i < pos - 1) {
		temp = temp->link;
		i++;
	}
	newnode->link = temp->link;
	temp->link = newnode;
}



}


