#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>a;
	vector<int>::iterator it;
	a.push_back(1);
	it=a.begin();
	cout<<*it<<endl;
	return 0;
 } 
