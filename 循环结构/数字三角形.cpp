#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int num=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%4d",num);
			num++;
		}
		printf("\n");
		
	}
}
