#include<iostream>
using namespace std;

int main()
{
	int i,n;
	int arr[n];
	int *ptr;
	ptr=arr;
	
	cout<<"Enter the size of the array :";
	cin>>n;
	cout<<endl;
	
	for(i=0;i<n;i++)
	{
		cout<<"Enter the number :";
		cin>>arr[i];
		cout<<endl;
	}
	
		cout<<"You entered :";
	
	for(i=0;i<n;i++)
	{
	
		cout<<*ptr<<endl;
		ptr++;
	}
	return 0;
}
