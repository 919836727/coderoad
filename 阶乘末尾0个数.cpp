#include <bits/stdc++.h>  
using namespace std;  

int main()  
{  
    int n;  
    cin>>n;  
    int cnt=0;  
    do{  
        n/=5;  
        cnt+=n;  
    }while(n);  
    cout<<cnt<<endl;  
    return 0;  
}  

