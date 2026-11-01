#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while(cin >> n){
		int amount=2*n+1;
		int none = 2*n;
		for(int i=1;i<=2*n+1;i++)
		{
			if(i<=n+1)
			{
				for(int j=1;j<=amount;j++)
				{
					if(j<=none) cout << " ";
					else cout<<"*";
				}
				amount--;
				none-=2;
			}
			else{
				if(i==n+2)
				{
					amount+=2;
					none+=4;
				}
				for(int j=1;j<=amount;j++){
					if(j<=none) cout << " ";
					else cout << "*";
				}
				amount++;
				none+=2;
			}
			cout <<endl;
		}
	}
	
	return 0;
}
