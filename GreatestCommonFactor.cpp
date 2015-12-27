#include<iostream>
using namespace std;
int gcf(int a, int b)
{
	int temp;
	if(a<b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	
	while(a%b)
	{
		temp=a;
		a=b;
		b=temp%b;
	}
	return b;
}

int main()
{
	int a,b;
	cout<<"input two integers: ";
	cin>>a>>b;
	cout<<"the greatest common factor of "<<a<<','<<b<<" is "<<gcf(a,b)<<endl;
	return 0;
}
