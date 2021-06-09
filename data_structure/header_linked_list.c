// C program for a Header Linked List 
#include <malloc.h> 
#include <stdio.h> 
#include<stdlib.h>

// Structure of the list 
struct node { 
	int data; 
	struct node* next; 
}; 

// Empty List 
struct node* head = NULL; 

// Function to create a header linked list 
struct node* create_header_list(int data) 
{ 

	// Create a new node 
	struct node *new_node, *temp; 
	new_node = (struct node*)malloc(sizeof(struct node)); 
	new_node->data = data; 
	new_node->next = NULL; 

	// If it is the first node 
	if (head == NULL)
	{ 
		// Initialize the start 
		head = (struct node*)malloc(sizeof(struct node)); 
		head->next = new_node; 
	} 
	else
	{ 
		// Insert the node in the end 
		temp = head; 
		while (temp->next != NULL)
		{ 
			temp = temp->next; 
		} 
		temp->next = new_node; 
	} 
	return head; 
} 

// Function to display the header linked list 
struct node* display() 
{ 
	struct node* temp; 
	temp = head; 
	temp = temp->next; 
	while (temp!= NULL)
	{ 
		printf("%d ", temp->data); 
		temp = temp->next; 
	} 
	printf("\n"); 
	return head; 
} 

// Driver code 
int main() 
{ 

	// Create the list 
	create_header_list(11); 
	create_header_list(12); 
	create_header_list(13); 

	// Print the list 
	display(); 
	
	create_header_list(14); 
	create_header_list(15); 

	// Print the list 
	display(); 

	return 0; 
} 
