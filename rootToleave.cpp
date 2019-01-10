#include<bits/stdc++.h>
#include <vector> 
using namespace std;

struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
};

struct Node* createNode(int data)
{
	
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=data;
	new_node->left=NULL;
	new_node->right=NULL;
	return new_node;
}

void printThegraph(struct Node* node)
{
	
	if(node==NULL)
		return;
	else
	{
		cout<<node->data<<" ";
		if(node->left!= NULL)printThegraph(node->left);
		if(node->right!= NULL)printThegraph(node->right);
	}
}

void print(int arr[],int len)
{

	for(int i=0;i<len;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
}

void printPath(struct Node* head ,int arr[], int temp)
{

	if(head==NULL)
		return;
	
	arr[temp++]=head->data;

	if(head->left==NULL && head->right==NULL )
		print(arr,temp);
	
	printPath(head->left,arr,temp);
	printPath(head->right,arr,temp);
}

int main()
{
	
	int temp=0;
	int arr[5];
	struct Node* head=createNode(12);
	head->left=createNode(10);
	head->right=createNode(8);
	head->left->left=createNode(5);
	head->left->right=createNode(9);
	head->right->left=createNode(7);
	head->right->right=createNode(3);
	
	printf("This is the main");
	printThegraph(head);
	cout<<"\n";
	printPath(head,arr,temp);
	return 0;
}