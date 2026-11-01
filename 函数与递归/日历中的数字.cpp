#include<bits/stdc++.h>
using namespace std;
bool isryear(int year){
	if((year%4==0&&year%100!=0)||year%400==0){
		return true;
	}
	return false;
}
int main(){
	int year,month,x;
	int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	while(cin>>year>>month>>x){
		int ans=0;
		int days=m[month];
		if(month==2&&isryear(year))
		{
			days+=1;
		}
		int count=0;
		int temp=year;
		while(temp>0){
			if(temp%10==x){
				count++;
			}
			temp/=10;
		}
		ans+=days*count;
		string sm;
		if(month<10){
			sm="0"+to_string(month);
		}
		else{
			sm=to_string(month);
		}
		int count1=0;
		for(char ch:sm)
		{
			if(ch-'0'==x) count1++;
		}
		ans+=days*count1;
		int count2=0;
		for(int i=1;i<=days;i++)
		{
			int num=i;
			while(num>0){
				if(num%10==x){
					count2++;
				}
				num/=10;
			}
			if(x==0&&i<10){
				count2++;
			}
			
		}
		ans+=count2;
		cout<<ans<<endl;
	}
	return 0;
}
