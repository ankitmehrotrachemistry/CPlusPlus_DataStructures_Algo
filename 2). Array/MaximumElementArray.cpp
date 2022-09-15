#include<iostream>
using namespace std;

int LargestElementArray(int array[], int n)
{
    int i;

    int maximumElement = array[0];

    for(int i = 1; i < n; i++)
    {
        if(array[i] > maximumElement)
            maximumElement = array[i];
    }
    return maximumElement;
}
int main()
{
    int array[] = {100,2,1000,1,9999};

    int n = sizeof(array)/ sizeof(array[0]);
    
    cout<<"Largest Element in Array is :" << LargestElementArray(array, n);

    return 0;
}