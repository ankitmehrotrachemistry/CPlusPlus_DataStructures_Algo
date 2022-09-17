# include<bits/stdc++.h>
using namespace std;

void RotateByDElements(int arr[], int d, int n)
{
    int temp[n];
	
	int k = 0;
	
	for(int i = d; i < n; i++)
	{
		temp[k] = arr[i];
		k++;
	}
	
	for(int i = 0; i < d; i++)
	{
		temp[k] = arr[i];
		k++;
	}
	
	for(int i = 0; i < n; i++)
	{
		arr[i] = temp[i];
	}	
}

void PrintArray(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] <<  "";
	}
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7};
	int N = sizeof(arr)/sizeof(arr[0]);
	int D = 2;
	
	RotateByDElements(arr, D, N);
	PrintArray(arr, N);
	
	return 0;
}
