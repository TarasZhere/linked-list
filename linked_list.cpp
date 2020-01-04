/* 
Linked list

This linked list is a simple way to understand the functionality of it.
it will create a list of 10 nodes and hold it the values 1 to 10.

*/

#include <iostream>

using namespace std;

struct Node {
	int num;
	Node *next;
};

Node* createList();
void printList(Node*);
void delList(Node*);

int main()
{
	Node* head = createList();

	printList(head);
	delList(head);

	system("pause");
	return 0;
}

Node* createList()
{
	Node* head = new(Node);
	head->num = 0;

	Node* temp = head;

	for (int i = 1; i < 10; i++)
	{
		temp->next = new(Node);
		temp = temp->next;
		temp->next = NULL;
		temp->num = i; /* change this line code for storing a diferent value */
	}

	return head;
}

void printList(Node* head)
{
	Node* temp = head;
	int i=1;

	while (temp)
	{
		cout << "Node #"<< i++ << " \t Number Holded: " << temp->num << endl;
		temp = temp->next;
	}
}

void delList(Node* head)
{
	Node* temp = head;
	int i = 1;

	while (temp)
	{
		cout << "Deleting Node #" << i++ << endl;
		temp = head->next;
		free(head);
		head = temp;
	}
}
