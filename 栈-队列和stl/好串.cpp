#include<iostream>
#include<string>
using namespace std;
int main()
{
	string t;
	int count1,count2=0;
	cin >> t;
	bool f=true;
	for(char ch : t)
	{
		if(ch!='a'&&ch!='b') 
		{
			f=false;
			break;
		}
		else if(ch == 'a')
		{
			count1++;
		}
		else if(ch =='b')
		{
			count2++;
		}
		if(count1<count2) 
		{
			f=false;
			break;
		}
	}
	if(f && (count1==count2))
		cout<<"Good"<<endl;
	else
		cout<<"Bad"<<endl;
	return 0;
}
