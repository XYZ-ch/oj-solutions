#include<bits/stdc++.h>
using namespace std;
int main (void)
{
	long long x,y,z;
	cin >> x >> y;
	if(y%x==0)
	{
		z=x+y;
	}
	else
	{
		z=y-x;
	}
	cout << z << endl;
	return 0;
}
