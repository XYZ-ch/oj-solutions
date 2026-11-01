#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int var[30]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int ob;
	int last[100];
	int len=30;
	scanf("%d",&ob);
	for(int i=0;i<ob;i++)
	{
		scanf("%d",&last[i]);
	}
	bool has_up =false;
	bool has_down=false;
	for(int i=0;i<len;i++)
	{
		if(ob>=2)
		{
			for(int j=ob-2;j<ob;j++)
			{
				int l=(i-1)%len;
				int l2=(j-1)%ob;
				if(var[i]==last[j]&&last[l2]==var[l])
				{
					int next=(i+1)%len;
					if(var[next]>last[j])
					{
						has_up=true;
					}
					else
					{
						has_down=true;
					}	
				}
				if(last[l2]==1&&last[j]==0)
				{
					has_up=true;
				}
			}
		}
		
	}
	if(ob==1)
	{
		if(last[0]==0)
		{
			printf("UP");
		}
		else if(last[0]==15)
		{
			printf("DOWN");
		}
		else
		{
			printf("-1");
		}
	}
	if(has_up&&ob>1)
	{
		printf("UP");
	}
	if(has_down&&ob>1)
	{
		printf("DOWN");
	}
	return 0;
}
