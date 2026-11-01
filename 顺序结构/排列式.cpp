#include<bits/stdc++.h>
using namespace std;
bool check(int x,int y,int z){
	string ans;
	int a[10]={0};
	ans=to_string(x)+to_string(y)+to_string(z);
	for(char ch: ans){
		if(ch>='1'&&ch<='9'){
			a[ch-'0']++;
		}
	}
	for(int i=1;i<10;i++){
		if(a[i]!=1){
			return false;
		}
	}
	return true;
}
int main(){
	for(int i=1234;i<=9876;i++){
		int j=1;
		while(j<i){
			if(i%j==0){
				int z=i/j;
				if(check(i,j,z)&&j<z){
					cout<<i<<" = "<<j<<" x "<<z<<endl;
				}
			}
			j++;
		}
	}
	return 0;
}
