#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};
struct node * start = NULL, *end = NULL ;

/*	STACK IMPLEMENTATION	
struct node * createList() {
	int i, n;
	printf("\nEnter the number of Nodes : ");
	scanf("%d",&n);
	for(i=0; i<n; ++i) {
		int val;
		printf("\nEnter the value : ");
		scanf("%d",&val);
		struct node *temp = (struct node *)malloc(sizeof(struct node));
		temp -> data = val;
		temp -> next = start;
		start = temp;
	}
	return start;
}
*/


/*	NORMAL LINKED LIST	*/
struct node * createList() {
	int i, n;
	printf("\nEnter the number of Nodes : ");
	scanf("%d",&n);
	for(i=0; i<n; ++i) {
		int val;
		printf("\nEnter the value : ");
		scanf("%d",&val);
		struct node *temp = (struct node *)malloc(sizeof(struct node));
		if(start == NULL) {
			start = temp;
			end = temp;
		}
		end -> next = temp;
		temp -> data = val;
		temp -> next = NULL;
		end = temp;
		//printf(" %d",end -> data);
	}
	return start;
}


void printList(struct node *s) {
	struct node *temp = s;
	printf("\nThe List is : ");
	while(temp) {
		printf(" %d",temp -> data);
		temp = temp -> next;
	}
	printf("\n");
}

struct node * reverseList() {
	struct node *bef, *mid, *aft;
	bef = start;
	mid = start -> next;
	aft = mid -> next;
	bef -> next = NULL;
	while (aft) {
		mid -> next = bef;
		bef = mid;
		mid = aft;
		aft = aft -> next;
	}
	mid -> next = bef;
	return mid;
}

int main() {
	int n;
	start = createList();
	printList(start);
	start = reverseList();
	printList(start);
	return 0;
}
	
