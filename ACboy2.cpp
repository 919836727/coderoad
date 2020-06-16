#include<iostream>
#include<stack>
#include<string>
#include<queue>
using namespace std;
int main()
{string a="FIFO",b="IN";
int t,n,l;
string c,w;
cin>>t;
while(t--)
{cin>>n>>c;
if(c==a)
{queue<int>q;   
while(n--)
            {
                cin>>w;
				if(w==b)
				{cin>>l;q.push(l);}
				else{
				if(q.empty())
				{cout<<"None"<<endl;}
				else{cout<<q.front()<<endl;q.pop();}}
            }}
			else
			{stack<int >s;
			while(n--)
            {
                cin>>w;
				if(w==b)
				{cin>>l;
				s.push(l);}
				else{
				if(s.empty())
				
				{cout<<"None"<<endl;}
				else{cout<<s.top()<<endl;
				s.pop();}}
            }
			}
			}
}

