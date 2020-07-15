#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	string str;
	int i,j;
	int N;
	cin>>N;
	while(N--)
	{
		cin>>str;

		int num=1;
		char t=str[0];
	    for(i=1;i<=str.length();i++)
	        {
	        	if(str[i]==t)
	        	num++;
	        	
				else
				{
					if(num!=1)
					cout<<num<<t;
					
					else
					cout<<t;
					
					num=1;
					t=str[i];
				}
			}
			cout<<endl;
	}
	system("pause");
	return 0;
}
