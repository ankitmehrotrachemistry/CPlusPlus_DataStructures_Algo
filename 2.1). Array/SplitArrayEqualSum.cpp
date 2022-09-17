#include<iostream>
using namespace std;

int findSplitPointArray(int arr[], int n)
{
    int leftSumArray = 0;

    for(int i = 0; i < n; i++)
    {
        leftSumArray += arr[i];

        int rightSum  = 0;

        for(int j = i+1; j < n; j++)
        rightSum += arr[j];

        if(leftSumArray == rightSum)
        return i+1;
    }
    return -1;
}

void printTwoSubArray(int arr[], int n)
{
    int splitPoint = findSplitPointArray(arr, n);

    if(splitPoint == -1 || splitPoint == n)
    {
        cout<< "Impossible" << endl;
        return;
    }

    for(int i = 0; i < n; i++)
    {
        if(splitPoint == i)
        cout << endl;
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,5};

    int n = sizeof(arr)/sizeof(arr[0]);

    printTwoSubArray(arr, n);
    return 0;
}