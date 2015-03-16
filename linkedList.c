#include <stdio.h>

struct ListNode
{
	int data;
	struct ListNode *next;
	
};

struct ListNode *head,*cur,*pre,*temp;

void insert(int data)
{
	temp = (struct ListNode *) malloc(sizeof(struct ListNode));
	temp->data = data;
	temp->next = NULL;

	if(head == NULL)
	{
		head = temp;
		return;
	}
		
	else
		cur = head;

	while(cur->next != NULL)
		cur = cur->next;

	
	cur->next = temp;
	
}

int delete()
{
	if(head == NULL){
		printf("List is Empty\n");
		return;
	}
	printf("Deleted element is: %d",head->data);
	temp = head;
	head = head->next;
	free(temp);
}

void display()
{
	if(head == NULL){
		printf("Empty List\n");
		return;
	}
	else
		cur = head;
		printf("Elements in the list are: ");
		while(cur != NULL){
			printf("	%d", cur->data);
			cur = cur->next;
		}
}
int main()
{
	int option, data;
	while(1)
	{
		printf("\nSelect the operation:\n1. Insert \n2. Delete \n3. Traverse\n");
		scanf("%d", &option);

		switch(option)
		{
			case 1: 	printf("Enter data element: ");
					  	scanf("%d",&data);
					  	insert(data);	
					  	break;
			case 2: 	delete();
					  	break;
			case 3: 	display();
					  	break;
			default: 	printf("Invalid Input\n");

		}
	}	

}
