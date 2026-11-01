#include<bits/stdc++.h>
using namespace std;
int main (void)
{
	int a,b;
	int count= 0;
	cin >> a>>b;
	for(int i=a;i<=b;i++)
	{
		int sum=0;
		int num=i;
		while(num)
		{
			sum+=num%10;
			num/=10;
		}
		if(sum%5==0)
		{
			count++;
		}
	}
	cout << count<< endl;
	return 0;
}
