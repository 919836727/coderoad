
#include<iostream>

#include<algorithm>

#include<stdio.h>

using namespace std;

int rn(int n)

{

	if (n%4==0&&n%100!=0||n%400==0)

	 return 1;

	return 0;

}

int main()

{

	int n=2014,y=11,r=9,i,a[12]={31,28,31,30,31,30,31,31,30,31,30,31};

	for (i=1;i<=1000;i++)

	{

		 r++;

		if (r>a[y-1])

		{

	          if (rn(n))

		    a[1]+=1;

		  else

		     a[1]=28;

		  r=1;

		  y++;

			if (y>12)

			 {

			 	y=1;

			 	n++;

			 }

		}

	}

	cout<<n<<"-"<<y<<"-"<<r<<endl;

}

