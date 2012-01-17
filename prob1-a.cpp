#include<iostream>
using namespace std;
struct Node
{
	int number;
	Node *link;
};
typedef Node* Nodeptr;
Nodeptr head;
Node* new_node(int);
void Push(Nodeptr);
void Display(Nodeptr);	

int main()
{
	head = NULL;
	Nodeptr newptr;
	static int number=1;
	int temp=0;
	char ch ='y';
	while(ch=='y'||ch=='Y')
	{
		cout<<"Enter the number tu put into the stack b/w (0-9)\n";
		cin>>number;
		if(number>9||number<0)
		{
			cout<<"Enter the number again b/s (0-9)\n";
			cin>>number;
		}
		if((temp+1)==number||head==NULL)
		{
			newptr = new_node(number);
			if(newptr==NULL)
			{
				cout<<"\n No new node created\n";
			}
			Push(newptr);
			Display(head);
			temp = number;
		}
		else
		{
			cout<<"PUSH "<<number<<" is not allowed\nEnter again";
		}
		cout<<("\nPress Y to enter more nodes, N to exit\n");
		cin>>ch;
	}
}

Node* new_node(int data)
{
	Nodeptr temp_ptr;
	temp_ptr = new Node;
	temp_ptr->number = data;
	temp_ptr->link = NULL;
	return temp_ptr;
}

void Push(Nodeptr np)
{
	Nodeptr save;
	if(head == NULL)
		head = np;
	else
	{
		save = head;
		head = np;
		np->link = save;
	}
}
		
void Display(Nodeptr np)
{
	cout<<"Stack is ==>\n";
	while(np!=NULL)
	{
		cout<<np->number<<"\n";
		np=np->link;
	}

}
