#include<iostream>
using namespace std;
void bubble_sort(int a[],int n)
{
	for(int i = n; i>1;i--)
	{
		bool flag = false;
		for (int j=1; j<i; j++)
		{
			if(a[j] > a[j+1])
				swap(a[j] , a[j+1]);
			flag = true;
		}
		if (flag == false) return;
	}
}
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0 ;i < n ; i++)
	{
		cin >>arr[i];
	}
	bubble_sort(arr,n);
	for(int i=n-1; i > 0; i--)
	{
		if(arr[i-1]+arr[i-2]>arr[i])
		{
			cout << arr[i-2] << " " << arr[i-1] << " " << arr[i] << endl;
			break;
		}
		else
		{
			cout << "No solution" << endl;
			break;
		}
	}
	return 0;
}
