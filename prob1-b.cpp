#include<iostream>
using namespace std;

int stack[1000];
int sp=0;

void push(int value)
{
	stack[sp++] = value;
	cout<<"push "<<value<<endl;
}

int pop()
{
	cout<<"pop "<<stack[sp-1]<<endl;
	return stack[--sp];
}

int main()
{
	int i,size=0;
	int *arr;
	int ctr=0;
	cout<<"\nEnter the size of input in sequence\n";
	cin>>size;
	arr = new int[size];
	for (i=0; i<size; i++) 
		cin>>arr[i];
	
	for (i=0; i<10 && ctr<size; i++)
	{
		push(i);
		while(arr[ctr]==stack[sp-1] && ctr<size)
		{
			pop();
			ctr++;
		}
	}
	if (ctr==size)
		cout<<"Possible"<<endl;
	else
		cout<<"Not possible"<<endl;
}
