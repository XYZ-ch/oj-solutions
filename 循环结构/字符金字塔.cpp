#include<bits/stdc++.h>
using namespace std;
int main(){
	char ch;
	cin >> ch;
	int f=0;
	char a[27]={'0','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	for(int i=0;i<27;i++){
		if(a[i]==ch){
			f=i;
			break;
		}
	}
	int amount=f;
	int z=f-1;
	for(int i=1;i<=f;i++){
		int num=1;
		for(int j=1;j<=amount;j++){
			if(j<=f){
				if(j<=z){
					cout << " ";
				}
				else{
					cout<<a[num];
					num++;
				}
			}
			else{
				if(num==i+1) num-=2;
				cout<<a[num];
				num--;
			}
		}
		z--;
		amount++;
		cout<<endl;
	}
	return 0;
}
