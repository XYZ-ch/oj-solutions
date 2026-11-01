#include<bits/stdc++.h>
using namespace std;
int main (void)
{
	int n;
	cin>>n;
	if(n%2==0)
	{
		n/=2;
	}
	else
	{
		n=3*n+1;
	}
	cout << n<<endl;
	return 0;
}
