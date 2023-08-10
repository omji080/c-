#include<iostream>
using namespace std;
int main()
{
	int arr[5]={5,8,4,6,8},max;
	max=arr[0];
	for(int i=1;i<5;i++)
	{
		if(max<arr[i])
		{
			max=arr[i]
			;
		}
	}
	for(int j=1;j<5;j++)
	{
		if(arr[j]==max)
		{
			arr[j]=arr[j]-max;
		}
	}
	max=arr[0];
	for(int k=1;k<5;k++)
	{
		if(max<arr[k])
		{
			max=arr[k];
		}
	}

	if(max==0)
	{
		cout<<"second number not found"<<endl;
	}
	else
	{
		cout<<"second grestest no: "<<max<<endl;
	}
	return 0;
	
}

