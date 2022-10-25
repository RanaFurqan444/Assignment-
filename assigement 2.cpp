
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x,y;
    char operato;
	while(1)
	{
		cout<<"enter a  number:";
		cin>>x;
		cout<<"enter a  number:";
		cin>>y;
		cout<<"enter a operator:";
		cin>>operato;
switch(operato)
{
	case '+':
	cout<<"add:"<<x+y<<endl;
	break;
	case'-':
	cout<<"subtr:"<<x-y<<endl;
	break;
	case'*':
	cout<<"multiply:"<<x*y<<endl;	
	break;
	case'/':
	cout <<"divide:"<<x/y<<endl;
	break;
	case'%':
	cout <<"Rem:"<<x%y<<endl;
	break;
	default:
	cout<<"\ninvild operator\n";
}
char choice;
cout<<"\nEnter your choice for continue for y or not foy n:\n ";
cin>>choice;
if(choice=='y')
{
	continue;
}
else if(choice=='n')
{
	break;
}
else
{
	cout<<"\ninvild  choice";
	break;
}
}
}