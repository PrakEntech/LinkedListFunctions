#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
	int num;
	struct node * next;
};

void traversal(struct node *ptr){
	while(ptr!= NULL){
		printf("|%d|",ptr->num);
		ptr=ptr->next;
	}
}

struct node *insertFirst(struct node *head,int num){
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
	ptr->next=head;
	ptr->num=num;
	return ptr;
}

void insertEnd(struct node *head,int num){
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
	ptr->next=NULL;
	ptr->num=num;
	while(head->next!=NULL){
		head=head->next;
	}
	head->next=ptr;
}

void insertBetween(struct node *head, int index, int num){
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
	int q=0;
	ptr->next=NULL;
	ptr->num=num;
	for(int i=0;i<(index-1);i++){
		head=head->next;
		if(head==NULL){q=1;break;}
	}
	if(q==0){
		ptr->next=head->next;
		head->next=ptr;
	}
}

struct node *insertNext(struct node *head,int num){
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
	ptr->next=NULL;
	ptr->num=num;
	head->next=ptr;
	return ptr;
}

struct node *arraytoLL(int a[], int count){
	struct node *head = (struct node *)malloc(sizeof(struct node));
	struct node *body = (struct node *)malloc(sizeof(struct node));
	head->num=a[0];
	head->next=NULL;
	for(int i=1;i<count;i++){
		body = insertNext(body,a[i]);
		if(i==1){head->next=body;}
	}
	body->next=NULL;
	return head;
}

struct node *delFirst(struct node *head){
	struct node *ptr = head;
	head = head->next;
	free(ptr);
	return head;
}

void delBetween(struct node *head, int index){
	int q=0;
	struct node *ptr;
	for(int i=0; i<(index-1); i++){
		head = head->next;
		if(head==NULL){q=1;break;}
	}
	if(q==0){
		ptr = head;
		head = head->next;
		ptr->next=head->next;
		free(head);
	}
}

void delitem(struct node *head, int num){
	while(head->next->num!=num){
		head = head->next;
	}
	struct node *ptr = head;
	head = head->next;
	ptr->next=head->next;
	free(head);
}

void delEnd(struct node *head){
	while(head->next->next!=NULL){
		head = head->next;
	}
	struct node *ptr = head;
	ptr->next=NULL;
	head=head->next;
	free(head);
}

struct node *insertBefore(struct node *head, int num){
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
	ptr->num=num;
	ptr->next=head;
	return ptr;
}

struct node *reverseLL(struct node *head,char y){
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
	struct node * ptr3;
	struct node * ptr2=head;
	int i=0;
	while(ptr2!=NULL){
		if(i==0){ptr->next = NULL;ptr->num=ptr2->num;i++;}
		else{ptr=insertBefore(ptr,ptr2->num);}
		if(y!='y'){ptr3=ptr2;}
		ptr2=ptr2->next;
		if(y!='y'){free(ptr3);}
	}
	if(y!='y'){free(ptr2);}
	return ptr;
}

struct node *deleteLL(struct node *head){
	struct node *ptr3;
	while(head!=NULL){
		ptr3=head;
		head=head->next;
		free(ptr3);
	}
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
	ptr->num=0;
	ptr->next=NULL;
	return ptr;
}

int countLL(struct node *head){
	int c=0;
	while(head->next!=NULL){
		head=head->next;c++;
	}
	return c;
}
int *LLtoarray(struct node *head){
	int c=countLL(head)+1;
	int *arr=(int *)malloc(c*sizeof(int));
	*(arr+0)=c;
	for(int i=1;i<=c;i++){
		*(arr+i) = head->num;
		head=head->next;
	}
	return arr;
}

int main()
{
	struct node *a;
	struct node *atemp;
	struct node *b;
	int temp,n,q,arr[5],*arr2;
	printf("---------Linked-List-Functions----------\n");
	q=-1;
	while(q<0 || q>1){
		printf("0. Linked List\n1. Array-Linked List\n - ");scanf("%d",&q);
	}
	switch(q){
		case 0:
			printf("Create a Linked List -\n");
			n=-1;
			while(n<0){
				printf("\nNumber of Items - ");scanf("%d",&n);
			}
			if(n>1){
			a = (struct node *)malloc(sizeof(struct node));
			b = (struct node *)malloc(sizeof(struct node));
			for(int i=0;i<n;i++){
			if(i==0){
				printf("Element - ");scanf("%d",&a->num);
			}
			else{
				printf("Element - ");scanf("%d",&temp);
				b = insertNext(b,temp);
			}
			if(i==1){a->next=b;}
			}				
		}
			else{
				a = (struct node *)malloc(sizeof(struct node));
				printf("Element - ");scanf("%d",&a->num);
				a->next=NULL;
			}

			traversal(a);printf("\n");
		break;
		case 1:
			printf("Array of 5 Elements -\n");
			for(int i=0;i<5;i++){printf("Element %d - ",i+1);scanf("%d",&arr[i]);}
			printf("Array - ");
			for(int i=0;i<5;i++){printf("|%d|",arr[i]);}
			a = arraytoLL(arr,5);
			printf("\nLinked List - ");
			traversal(a);printf("\n");
		break;
	}
	int temp2,index2,val=0;
	char y='y',q2='1';
	while(y=='y'){
	if(val==1){
		atemp = deleteLL(atemp);
		free(atemp);
		atemp = (struct node *)malloc(sizeof(struct node));
	}
	temp=6;
	while(temp>5 || temp<0){
		printf("0. Insertion\n1. Deletion\n2. Reverse Linked List\n3. Delete Linked List\n4. Total No of Members\n5. Linked List to Array\n - ");scanf("%d",&temp);
	}
	switch(temp){
		case 0:
			n=5;
			while(n>2 || n<0){
				printf("0. Beginning\n1. Between\n2. End\n - ");scanf("%d",&n);
			}
			switch(n){
				case 0:
					printf("Element - ");scanf("%d",&temp2);
					a=insertFirst(a,temp2);
					break;
				case 1:
					printf("Element - ");scanf("%d",&temp2);
					printf("Index - ");scanf("%d",&index2);
					insertBetween(a,index2,temp2);
					break;
				case 2:
					printf("Element - ");scanf("%d",&temp2);
					insertEnd(a,temp2);
					break;
			}
			break;
		case 1:
			n=5;
			while(n>3 || n<0){
				printf("0. Beginning\n1. Between\n2. End\n3. Item\n - ");scanf("%d",&n);
			}
			switch(n){
				case 0:
					a=delFirst(a);
					break;
				case 1:
					printf("Index - ");scanf("%d",&index2);
					delBetween(a,index2);
					break;
				case 2:
					delEnd(a);
					break;
				case 3:
					printf("Item - ");scanf("%d",&index2);
					delitem(a,index2);
					break;
			}
			break;
		case 2:
			printf("Do You want to keep the Original Linked List (y/n) - ");scanf(" %c",&q2);
			if(q2=='y'){
				atemp=reverseLL(a,'y');
				printf("Reversed Linked List - ");
				traversal(atemp);
				printf("\n");
				val=1;
			}
			else{
				a=reverseLL(a,'n');				
			}
			break;
		case 3:
			a=deleteLL(a);
			break;
		case 4:
			printf("Count - %d\n",countLL(a)+1);
		case 5:
			arr2=LLtoarray(a);
			for(int i=1;i<=*(arr2+0);i++){
				printf("|%d|",*(arr2+i));
			}
			printf("\n");
			break;
	}
	printf("Original Linked List - ");traversal(a);
	printf("\nContinue(y/n)?? - ");scanf(" %c",&y);
	}
	getch();
	return 0;
}