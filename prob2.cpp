#include<iostream>
using namespace std;
int main()
{
	int M,N;
	int count,p=0,temp=0,n=0;
	cout<<"Enter the number of kids (M) and Random number (N) which less than M\n";
	cin >> M >> N;
	int arr[M];
	if(N>M)
	{
		cout<<"\nEnter value of N again which is less than M\n";
		cin >> N ;
	}
	for(int i=0; i<M;i++)
		arr[i] = i+1;
	n=N-1;	
	while(M>1)
	{
		n=n+p;
		if(p==0)
			p=n;
		if(n>(M-1))
			n=n%M;
		for(int k=n;k<=(M-1);k++)
			arr[k]=arr[k+1];
		M--;
		for(int r=0;r<M;r++)
			temp = r;
	}
	cout<<"Kid standing at "<<arr[temp]<<" position is the winner!!\n";
}	
