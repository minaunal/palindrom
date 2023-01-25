//Mina Ünal

#include <stdio.h>

struct node{
	int data;
	struct node* next;
};
struct node* head;
struct node *tail;

int main(){
add(8);
add(4);
add(5);
add(5);
add(4);
add(8);

palindrom(head);
yazdir();

}

int palindrom(struct node* head){
	struct node* index=head;
	int dizi[5];
	int i=0;
	int j;
	int true=0;
		while(index!=NULL){
		
			dizi[i]=index->data;
			index=index->next;
			i++;
		}
		index=head;
		
		for (j=i; j>=0; j--){
			
			if(dizi[j]==index->data){
				index=index->next;
				true++;
			}
			
		}
	
		if (true==i){
		printf("palindrom\n");
	}
	else{
		printf("palindrom degil.\n");
	}
	
		}
		


int add(int data){
	if (head==NULL){
	struct node *new;
	new=malloc(sizeof(struct node));
		new->data=data;
		new->next=NULL;
		head=tail=new;
	}
	else {
		struct node *new = (struct node *)malloc(sizeof(struct node));
		new->data=data;
		new->next=NULL;
		tail->next=new;
		tail=new;
		
	}return 1;
}
int yazdir(){
	struct node *index=head;
	while(index!=NULL){
	printf("%d ", index->data);
	index=index->next;}
	
		
}


