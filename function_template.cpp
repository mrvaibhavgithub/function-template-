#include<iostream>
using namespace std;

template<class T>
void mul(T a, T b)
{
	cout<<"\nans\t"<<a*b;
}
int main()
{
	cout<<"\nfirst answer:";
	mul(40,3);
	cout<<"\nsecound answer:";
	mul(3.4,6.2);
}