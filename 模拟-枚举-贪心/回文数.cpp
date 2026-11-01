#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10]={0};
	int count = 0;
	int odd=0;
	int oddnum=-1;
	for(int i=0;i<10;i++){
		cin >> a[i];
		count+=a[i];
		if(a[i]%2==1){
			odd++;
			oddnum=i;
		}
	}
	if(odd>1){
		cout << -1 << endl;
		return 0;
	}
	if(count==1){
		cout << oddnum <<endl;
		return 0;
	}
	string half;
	int first=-1;
	for(int i=1;i<10;i++){
		if(a[i]>=2){
			first=i;
			break;
		}
	}
	if(first==-1){
		cout << -1 << endl;
		return 0;
	}
	half+=char('0'+ first);
	a[first]-=2;
	for(int i =0;i<10;i++){
		half+=string(a[i] / 2, char('0' + i));
	}
	string res = half;
	reverse(half.begin(),half.end());
	if(oddnum!=-1){
		res+=char('0'+oddnum);
	}
	res += half;
	cout << res <<endl;
	return 0;
}
