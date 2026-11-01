#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;
int mid[10][10] = {0}; // 0 表示没有中间数字

void init_mid() {
	mid[1][3] = mid[3][1] = 2;
	mid[1][7] = mid[7][1] = 4;
	mid[1][9] = mid[9][1] = 5;
	mid[2][8] = mid[8][2] = 5;
	mid[3][7] = mid[7][3] = 5;
	mid[3][9] = mid[9][3] = 6;
	mid[4][6] = mid[6][4] = 5;
	mid[7][9] = mid[9][7] = 8;
}
bool judge(const string &s)
{
	if(s.size()==0) return false;
	unordered_set<char> used;
	used.insert(s[0]);
	for(int i=1; i<s.size();i++)
	{
		char curr = s[i];
		char pre = s[i-1];
		if(used.count(curr)) return false;
		int m = mid[curr-'0'][pre-'0'];
		if((m!=0)&&(!used.count('0'+m))) return false;
		else used.insert(curr);
	}
	return true;
}
int main()
{
	
	string line;
	init_mid();
	while(getline(cin,line))//while (getline(cin, line)) 是 C++ 按行读取多组输入的标准写法，核心是 “读一行→处理一行→直到读完”；
	{
		if(judge(line))
		{
			cout << "YES" <<endl;
		}
		else
		{
			cout << "NO" << endl;
		}
		
	}
	return 0;
}
