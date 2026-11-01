#include<bits/stdc++.h>
using namespace std;
int main(){
	int L;
	int M;
	cin >>L >>M;
	vector<int> tree(L+1,1);
	for(int i=0;i<M;i++)
	{
		int r,l;
		cin >> l>>r;
		for(int j=l;j<=r;j++)
		{
			tree[j]=0;
		}
	}
	int count=0;
	for(int i=0;i<=L;i++){
		if(tree[i]==1) count++;
	}
	cout << count<<endl;
	return 0;
}
