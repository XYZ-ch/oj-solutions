#include<bits/stdc++.h>
using namespace std;
int main(){
	string s((istreambuf_iterator<char>(cin)), istreambuf_iterator<char>());//要读入全部内容（包括空白和换行)
	string res;
	int n = s.size();
	bool isqu =false;
	bool isclose =false;
	for(int i=0;i<n;i++){
		char c = s[i];
		if(isqu){
			res += c;
			if(c=='\\' && i+1<n && s[i+1]=='"'){
				res+='"';
				i++;
			}
			else if(c=='"'){
				isqu=false;
			}
		}
		else{
			if(c=='\\' && i+1<n && s[i+1]=='"'){
				res+=c;
				res+='"';
				i++;
			}
			else if(s[i]=='"'){
				isqu = true;
				res+=c;
			}
			else if(s[i]=='/' && i+1<n && s[i+1]=='*'&&!isclose){
				size_t e=s.find("*/",i+2);
				if(e == string ::npos){
					isclose=true;
					res+=c;
				}
				else{
					i=e+1;
				}
			}
			else{
				res+=c;
			}
		}
	}
	cout << res;
	return 0;
}
