#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,t;
	cin >> n >> t;
	string s;
	cin >> s;
	size_t p = s.find('.');
	if(p == string :: npos){
		cout << s << endl;
		return 0;
	}
	int pos = -1;
	for(int i= p+1;i<n;i++){
		if(s[i]>='5'){
			pos=i;
			break;
		}
	}
	if(pos != -1){
		bool ifvolve = false;
		while(t>0 && pos > (int)p && s[pos]>='5')
		{
			s.resize(pos);
			t--;
			pos--;
			if(s[pos]=='.'){
				ifvolve=true;
				s.resize(pos);
				break;
			}
			s[pos]++;
		}
		if(ifvolve){
			int j =(int)s.size()-1;
			while(j>=0 && s[j]=='9'){
				s[j]='0';
				j--;
			}
			if(j<0)
			{
				s.insert(s.begin(),'1');
			}
			else s[j]++;
		}
	}
	if(s.find('.') != string :: npos){
		while(!s.empty()&&s.back()=='0'){
			s.pop_back();
		}
		if(!s.empty()&& s.back()=='.'){
			s.pop_back();
		}
	}
	cout << s << endl;
	return 0;
}
