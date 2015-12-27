#include<iostream>
using namespace std;
int gcf(int a, int b)
{
	a = a>b?a:b;
	b = a<b?a:b;
	int temp;
	while(a%b)
	{
		temp=a;
		a=b;
		b=temp%b;
	}
	return b;
}
