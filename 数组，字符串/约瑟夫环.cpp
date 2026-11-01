#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,m;
	int num[100]={0};
	int count=0;
	cin >> n>>k>>m;
	int S=n;
	int a=k;
	while(S>1)
	{
		if(num[a]==0)
		{
			count++;
		}
		if(count==m)
		{
			num[a]=1;
			count=0;
			S--;
		}
		a=(a+1)%n;
	}
	for(int i=0;i<n;i++)
	{
		if(num[i]==0)
		{
			cout << i<<endl;
			break;
		}
	}
	return 0;
}
