#include<stdio.h>
#include<stdlib.h>


struct node {
	int data;
	struct node *next;
};


int main(){
	
	struct node*ilkdugum;
	
	ilkdugum= (struct node *)malloc (sizeof(struct node));
	struct node * ikincidugum=(struct node *)malloc(sizeof(struct node));
	
	ilkdugum->data=15;
	ilkdugum->next=ikincidugum;
	ikincidugum->data= 20;
	ikincidugum->next= NULL;
	
	printf("%d => %d",ilkdugum->data, ikincidugum->data);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
