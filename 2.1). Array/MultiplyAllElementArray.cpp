#include<iostream>
using namespace std;

void MultiplyByK(int array[], int k)
{
    for(int i = 0; i < 5; i++)
    array[i] *= k;

    for(int i = 0; i < 5; i++)
    cout << array[i] << " ";
}
int main()
{
    int array[5] = {4,7,9,5,8};

    int k = 2;
    MultiplyByK(array, k);

    return 0;
}