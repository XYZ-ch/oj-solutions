#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin >> n)//while(cin>>n) 读到EOF自动结束，不会死循环！
	{
		int j=n;
		int a=n-1;
		for(int i=1;i<=2*n-1;i++){
			if(i<=n){
				for(int z=1;z<=j;z++){
					if(z<=a) cout << " ";
					else cout <<"*";
				}
				cout <<endl;
				a--;
				j++;
			}
			else
			{
				if(i==n+1) a=1;
				for(int z=1;z<=j-2;z++){
					if(z<=a) cout << " ";
					else cout <<"*";
				}
				cout<<endl;
				j--;
				a++;
			}
		}
	}
	return 0;
}

