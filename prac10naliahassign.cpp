#include<iostream>
using namespace std;
void fun(int a)
{
	cout<<"Age : "<<a<<endl;
}
void fun(double b)
{
	cout<<"Height : "<<b<<endl;
}
int main()
{
	int age;
	double height;
	cout<<"Enter the age of Naliah: ";
	cin>>age;
	cout<<"\n Enter the height of Naliah: ";
	cin>>height;
	fun(age);
	fun(height);
}
