#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;
bool compare(const string &a,const string &b)
{
	return (a+b)>(b+a);//如果结果为true，则ab不交换，否则ab前后交换
}
int main()
{
	int n;
	cin >> n;
	vector<string> num(n);
	for(int i=0;i < n; i++)
	{
		cin >> num[i];
	}
	sort(num.begin(),num.end(),compare);
	string reu;
	for(const string &s : num)
	{
		reu += s;
	}
	if(reu[0]=='0') cout << "0" << endl; 
	else cout << reu << endl;
	return 0;
}
