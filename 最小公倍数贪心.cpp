#include<iostream>
using namespace std;
int main()
{
	long long int n,min;
	cin>>n;
	if(n<=2)
	min=n;
	else if(n%2==1)
    min=n*(n-1)*(n-2);
    else
    {
    	if(n%3==0)
	min=(n-1)*(n-2)*(n-3);
	else
	min=n*(n-1)*(n-3);
	}
    cout<<min;
} 
