#include <bits/stdc++.h>
using namespace std;

int SumOfArrayElements(int arr[], int n)
{
	int sumOfArray  = 0;
	
	for(int i = 0; i < n; i++)
	sumOfArray += arr[i];
	
	return sumOfArray;
}
int main()
{
    int arr[]  = {12,7,4,56,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Sum of Elements of Array are :" << SumOfArrayElements(arr, n);
    return 0;
}

