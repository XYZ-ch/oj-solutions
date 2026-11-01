#include<bits/stdc++.h>
using namespace std;
void mul(char s1[2005],char s2[2005],char result[2005])
{
	int a[2005]={0},b[2005]={0},c[2005]={0};
	int la,lb,lc;	
	la=strlen(s1);
	lb=strlen(s2);
	for(int i=0;i<la;i++)
	{
		a[la-i-1]=s1[i]-'0';
	}
	for(int i=0;i<lb;i++)
	{
		b[lb-i-1]=s2[i]-'0';
	}
	lc=la+lb;
	for(int i=0;i<la;i++)
	{
		for(int j=0;j<lb;j++)
		{
			c[i+j]+=a[i]*b[j];
			c[i+j+1]+=c[i+j]/10;
			c[i+j]%=10;
		}
	}
	while(lc > 1 && c[lc - 1] == 0) 
	{
		lc--;
	}
	int index=0;
	for(int j=lc-1;j>=0;j--)
	{
		result[index++] = c[j] + '0';
	}
	result[index]='\0';
}
int main()
{
	int n;
	char s1[2005],s2[2005],result[2005];
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin>>s1>>s2;
		mul(s1,s2,result);
		cout << result<<endl;
	}
	return 0;
}
