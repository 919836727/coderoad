#include<iostream>
#include<stack>
#include<queue>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	int n,m,i,t,a;
	                               //stringÓÃ·¨ 

	string q="FIFO",p="FILO",o="IN",u="OUT";
	string c,w;
	cin>>i; 
	 while(i--)
	{        

		 cin>>m>>c;    
	 	if(q==c)    
{

while(m--)
	 	{
	 	     queue<int>qu1;
			 cin>>w;
	 	    if(w==o)
	 	    {
	 	    cin>>a;
			qu1.push(a);
			}if(w==u)
	 	    {
	 	    if(qu1.empty())
	 	    {
			 cout<<"None"<<endl;
		}
			else
			{
			cout<<qu1.front()<<endl;
	 	    qu1.pop();}
}
}
}
		if(p==c)    
		{
	
	while(m--)	
		{
			stack<int>st1;
			cin>>w;
			if(w==o)
		    {
			cin>>a;
			st1.push(a);
		}
			if(w==u)
		    {
		    if(st1.empty())
		    {
		    	cout<<"None"<<endl;
			}
			else
		    {
			cout<<st1.top()<<endl;
		    st1.pop();
			}
		}
		}
		}
		
}
	return 0;
} 
