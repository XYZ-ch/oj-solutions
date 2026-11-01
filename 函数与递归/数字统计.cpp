#include<bits/stdc++.h>
using namespace std;
int main()
{
	int L,R;
	cin>>L>>R;
	int count=0;
	for(int i=L;i<=R;i++)
	{
		int num=i;
		while(num>0){
			if(num%10==2) count++;
			num/=10;
		}

	}
	cout << count <<endl;
	return 0;
}
