#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"please enter the number of triangle:"<<endl ;
	cin>>a ;
	int b=1 ;
	for ( ; b<=a ; b++)
{ int c=1 ;
for ( ; c>b ; c--)
cout<<" ";
int d=1 ;
for ( ; d<=b ; d++)
cout<<"*" ;
cout<<"\n" ;
}
	return 0 ;
}