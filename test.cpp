
#include <iostream>

#include <vector>

using namespace std;

int res[33000];

vector<int>a;

int main()

{

    int n,m;

    while(cin>>n>>m){

        a.clear();

        for(int i=1;i<=2*n;i++){

            a.push_back(i);

            res[i]=0;

        }

        int per=2*n;

        int k=1;

        while(per>n){

            k+=m-1;

            if(k<=per){

                res[a[k-1]]=1;

                a.erase(a.begin()+k-1);

                if(k==per)

                    k=1;

            }

            else{

                k=k%per;

                if(k==0)

                    k=per;

                res[a[k-1]]=1;

                a.erase(a.begin()+k-1);

                if(k==per)

                    k=1;

            }

            per--;

        }

        for(int i=1;i<=2*n;i++){

            if(res[i]==1)

                cout<<"B";

            else

                cout<<"G";

            if(i%50==0)

                cout<<endl;

        }

        if(2*n%50!=0)

                cout<<endl;

        cout<<endl;

    }

    return 0;

}

