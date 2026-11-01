#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin >> T;
	for(int i=0;i<T;i++)
	{
		int n;
		cin >> n;
		int j=(n+1)/2;
		int a=(n+1)/2-1;
		for(int i=1;i<=n;i++){
			if(i<=(n+1)/2){
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
				if(i==(n+1)/2+1) a=1;
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

