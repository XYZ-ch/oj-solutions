#include<iostream>
#include<vector>
#include<string>
#include<queue>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i = 0;
	vector<vector<string>> a(n);
	while(i<n)
	{
		string nums;
		cin >> nums;
		queue<char> res;
		for(int j = 0; j < nums.size(); j++)
		{
			if(nums[j]=='0'||nums[j]=='2'||nums[j]=='4'||nums[j]=='6'||nums[j]=='9')
			{
				res.push(nums[j]);
				
			}
			if(nums[j]=='z'&&nums[j+1]=='e'&&nums[j+2]=='r'&&nums[j+3]=='o')
			{
				res.push('0');
				j+=3;
			}
			if(nums[j]=='t'&&nums[j+1]=='w'&&nums[j+2]=='o')
			{
				res.push('2');
				j+=2;
			}
			if(nums[j]=='f'&&nums[j+1]=='o'&&nums[j+2]=='u'&&nums[j+3]=='r')
			{
				res.push('4');
				j+=3;
			}
			if(nums[j]=='s'&&nums[j+1]=='i'&&nums[j+2]=='x')
			{
				res.push('6');
				j+=2;
			}
			if(nums[j]=='n'&&nums[j+1]=='i'&&nums[j+2]=='n'&&nums[j+3]=='e')
			{
				res.push('9');
				j+=3;
			}
			while(!res.empty())
			{
				a[i].push_back(string(1,res.front()));//
				res.pop();
			}
		}
		i++;
	}
	for(int j =0 ;j < n ; j++)
	{
		for(int z=0;z < a[j].size();z++)
		{
			cout << a[j][z];
		}
		cout << endl;
	}
	return 0;
}
