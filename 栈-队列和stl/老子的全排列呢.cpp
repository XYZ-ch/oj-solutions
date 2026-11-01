#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5,6,7,8};
	do
	{
		for(int num:arr)
		{
			cout<< num << " ";
		}
		cout << endl;
	}while(next_permutation(arr,arr+8));
	return 0;
}
