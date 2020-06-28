#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,m,i,j;
	vector<int>table;
    while(cin>>n>>m)
    {
    	table.clear(); 
    	for(i=0;i<2*n;i++) 
    	table.push_back(i);
    	
    	int pos=0;
    	for(i=0;i<n;i++)
    	{
		pos=(pos+m-1)%table.size();
    	table.erase(table.begin()+pos);
	}
	    int j=0;
	    for(i=0;i<2*n;i++)
	    {
	    if(!(i%50)&&i)
	    cout<<endl;
		if(j<table.size()&&i==table[j])
	    {
	    	j++;
	    	cout<<"G";
		}
		else
		cout<<"B";
}
        cout<<endl<<endl;
}
        return 0;
}
