#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	
   cout<<"enter the value"<<endl;
   cin>>a>>b>>c>>d;
   if(a>b&&a>c&&a>d)
   {
   	cout<<a<<endl;
   	
	   if (b>a&&b>c&&b>d)
	   { 
		cout<<b<<endl;
		}
		else if(c>a&&c>b&&c>d)
		{
			 cout<<c<<endl;
		}
   }
   else 
     {
   	   cout<<d<<endl;
     }
   
   return 0;
}

