#include<iostream>
#include<stack>
#include<string>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
	stack<string>stf,stb;                  //���string���ͺ�char���͵����� 
	string f="FORWARD",b="BACK",v="VISIT",q="QUIT";
	string t,url;
	int n,count=1;
	cin>>n;
	while(n--)
	{   
	    stb.push("http://www.lightoj.com/");
		printf("Case %d:\n",count++);
		while(1)
		{
		cin>>t;
        /*while(URL[i]!='\0')
        {
        	url[i]=URL[i];
        	i++;
		}
		i=0;*/
		if(t==f)
		{
		if(!stf.empty())
		{
		stb.push(stf.top());
		stf.pop();
		cout<<stb.top()<<endl;
	}
	    else
	    cout<<"Ignored"<<endl;
	}
		else if(t==b)
		{
		if(!stb.empty())
		{
		stf.push(stb.top());
		stb.pop();
		if(stb.empty())
		{
			stb.push(stf.top());
			stf.pop();
			cout<<"Ignored"<<endl;
		}
		else
		cout<<stb.top()<<endl;
		}
		}                            //�ܲ��ܽ�һ�����ַ���ֱ����ջ 
			                                             //ֱ�ӽ��������뼴�� 
			
		else if(t==v)
		{
		cin>>url;                   //string���͵����� 
        stb.push(url);
        while(!stf.empty())
        stf.pop();
        cout<<url<<endl;
	}
	
		else
		break;
			
		}
		while(!stb.empty())
		stb.pop();
		while(!stf.empty())
		stf.pop();
	}
	return 0;
}
