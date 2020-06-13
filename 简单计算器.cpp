#include<iostream>
#include<stack>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	//入栈时判断优先级最高的运算
	//出栈时只运算优先级较高的，并存储
	int a,b;
	cin>>a>>b;
	a=a*b;
	cout<<a<<b; 
}
