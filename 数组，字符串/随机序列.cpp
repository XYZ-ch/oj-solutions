#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int T,num;
	double s,q,p;
	double result[1000000];int result1[1000000];
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
		int b[100000];
		int sum=0; long double sum1=0;
		int max=0;int min=1000000;
		scanf("%d",&num);
		for(int j=0;j<num;j++)
		{
			scanf("%d",&b[j]);
			if(b[j]<min)
			{
				min=b[j];
			}
			if(b[j]>max)
			{
				max=b[j];
			}
			sum+=b[j];
		}
		p=((double)sum/num);
		for(int m=0;m<num;m++)
		{
			long double y=(double)(b[m]-p)*(b[m]-p);
			sum1+=y;
		}
		s=((double)sum1/num);
		q=max-min;
		result[i]=s;
		result1[i]=q;
	}
	for(int i=1;i<=T;i++)
	{
		printf("%d %.3f\n",result1[i],result[i]);
	}
	return 0;
}
