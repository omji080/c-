#include<iostream>
using namespace std;
int max()
{
	int a,b,c,d;
	if(a>b&&a>c&&a>d)
	{
		return a;
		
	}
	if (b>c&&b>d&&b>a){
		return b;
	}
	if (c>d&&c>b&&c>a)
	{
		return c;
	}
	else
	{
		return d;
	}
	
}
int main()
{
	int a=10;
	int b=20;
	int c=30;
	int d=12;
	cout<<(a>b&&a>c&&a>d)<<endl;
	cout<<(b>c&&b>d&&b>a)<<endl;
	cout<<(c>d&&c>b&&c>a)<<endl;
	return 0;

}

	

