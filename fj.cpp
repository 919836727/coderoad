#include<iostream>
using namespace std;
void FJ(int n)
{
     char a;
     a='A'+n-1;
	 if(n==1)
     cout<<"A";
     else
     {
	 FJ(n-1);
	 cout<<a;
     FJ(n-1);
}
}

int main()
{
	int n;
	cin>>n;
	FJ(n);
	return 0;
}
