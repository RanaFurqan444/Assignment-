#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char l;	
	while(1)
	{
		cout<<"select an Operation(+,-,*,/,%)"<<endl;
		cin>>l;
		cout<<"Enter any Number=";
		cin>>a;
		cout<<"Enter any Number=";
		cin>>b;
		if(l=='+')	
		{
			cout<<a<<"+"<<b<<"="<<a+b<<endl;
		}
		else if(l=='-')
		{
			cout<<a<<"-"<<b<<"="<<a-b<<endl;
		}
		else if(l=='*')
		{
			cout<<a<<"*"<<b<<"="<<a*b<<endl;
		}
		else if(l=='/')
		{
			cout<<a<<"/"<<b<<"="<<a/b<<endl;
		}
		else if(l=='%')
		{
			cout<<a<<"%"<<b<<"="<<a%b<<endl;
		}
		
		else
			{
			cout<<"You enter an invalid function"<<endl;
			break;
			}
		
	}	
			//return 0;	
}
