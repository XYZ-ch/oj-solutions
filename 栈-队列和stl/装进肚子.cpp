#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin >>n>>k;
	vector<long long> a(n+1);
	vector<long long> b(n+1);
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	vector<long long> d(n+1);
	for(int i=1;i<=n;i++){
		d[i]=a[i]-b[i];
	}
	sort(d.begin()+1,d.end(),greater<long long>());//降序，greater比较数组元素，<元素类型>
	long long ans=0;
	for(int i=1;i<=n;i++){
		ans+=b[i];
	}
	for(int i=1;i<=k;i++)
	{
		ans+=d[i];
	}
	cout << ans << endl;
	return 0;
}
