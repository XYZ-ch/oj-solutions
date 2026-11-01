#include<bits/stdc++.h>
using namespace std;
bool isPrime (long long num)
{
	if(num<=1) 
		return false;
	if(num==2)
		return true;
	if(num%2==0)
		return false;
	for(long long  i=3;i<=sqrt(num);i+=2)
	{
		if(num % i ==0)
			return false;
	}
	return true;
}
int main(void)
{
	char b[100],a[1000];
	scanf("%s",b);
	int len=strlen(b);
	strcpy(a,b);
	for(int i=len-2;i>=0;i--)
	{
		a[len+(len-2-i)]=b[i];
	}
	a[2*len-1]='\0';
	long long num=0;
	for (int i=0;a[i]!='\0';i++)
	{
		num=num*10+(a[i]-'0');
	}
	if(isPrime(num))
	{
		printf("prime");
	}
	else
	{
		printf("noprime");
	}
	return 0;
}
