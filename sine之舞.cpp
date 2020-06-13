#include<iostream>
using namespace std;

void an(int k,int n)
{
	if(n==k)
	return;
	printf("sin(%d",k+1);
	if(k+1!=n)
	{
		if(k/2==0)
		printf("+");
		else
		printf("-");
	}
	else
	printf(")"); 
	
	k++;
	an(k,n);
}
void sn(int i)
{
    int j,k,t;
    if (i==0)
        return ;
    for (k=1; k<i; k++)
        printf("(");
    k=1;
    t=1;
    while (i)
    {       
        an(0, k);
        for (j=1; j<t; j++)
            printf(")");
        printf("+%d", i);
        if (i!=1)
            printf(")");
        k++;
        i--;
        t++;
    }
}



int main()
{
	int a;
	cin>>a;
	sn(a);
	cout<<endl;
	an(0,a);
}
