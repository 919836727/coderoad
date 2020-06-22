
#include<iostream>

#include<cstring>

using namespace std;

int a[100],b[100],n,r;

void dfs(int k) {

	for (int i=a[k-1]+1; i<=n; ++i)

		if (!b[i]) {

			a[k]=i;

			b[i]=1;

			if (k==r) {

				for (int j=1; j<=r; ++j)

					printf("%3d",a[j]);

				cout << endl;

			}

			else dfs(k+1);

			b[i]=0;

		}

}

 

int main() {

	cin >> n >> r;

	dfs(1);

	return 0;

}

