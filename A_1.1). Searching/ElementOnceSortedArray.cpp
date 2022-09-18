#include<iostream>
using namespace std;

void SearchElement(int arr[], int n)
{
   int result = -1;

   for(int i = 0; i < n; i+= 2)
   {
      if(arr[i] != arr[i+1])
      {
         result = arr[i];
         break;
      }
   }
   if(arr[n-2] != arr[n-1])
      result = arr[n-1];

   cout << "Required Element is : " << result << endl;
}
int main()
{
    int arr[] = {1,1,2,3,3,5,5,7,7,8,8};
    int length = sizeof(arr)/sizeof(arr[0]);

    SearchElement(arr, length);
    return 0;
}