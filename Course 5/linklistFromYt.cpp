#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *link;
};

void display(struct node *start);
struct node *addatbeg(struct node *start, int num);

main(){
	struct node *start = NULL;
	int choice, num; 
	
	while(1){
		printf("\n1. Display\n");
		printf("2. Input data\n");
		printf("9. Exit\n");
		
		scanf("%d", &choice);
		switch(choice){
			case 1:
				display(start);
				break;
			case 2:
				printf("Masukkan angka : \n");
				scanf("%d", &num);
				start = addatbeg(start, num);
				break;	
			case 9:
				exit(1);
			default:
				printf("Invalid choice\n");
		}
	}
}

void display(struct node *start){
	struct node *p;
	if(start == NULL){
		printf("List is empty\n\n");
		return;
	}
	
	p= start;
	while(p != NULL){
		printf("%d ", p->info);
		p=p->link;
	}
}

struct node *addatbeg(struct node *start, int num){
	struct node *temp;
	//pointer = (data type *) malloc (sizeof(data type));
	temp = (struct node *) malloc (sizeof(struct node));
	temp->info = num;
	temp->link = start;
	start = temp;
	return start;
}