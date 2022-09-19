#include<iostream>
using namespace std;

const int MAX  = 100;

void printPrincipalDiagonal(int mat[][MAX], int n)
{
   cout << "Principal Diagonal is : ";

   for(int i = 0; i < n; i++)
   {
      for(int j = 0; j < n; j++)
      {
          if(i == j)
          cout << mat[i][j] << ", ";
      }
   }
   cout << endl;
}

void printSecondaryDiagonal(int mat[][MAX], int n)
{
    cout << "Secondary Diagonal is : ";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if((i+j) == (n-1))
               cout << mat[i][j] << ", ";
        }
    }
    cout << endl;
}

int main()
{
    int n = 4;

    int arr[][MAX] = {
                     { 1, 2, 3, 4 },
                     { 5, 6, 7, 8 },
                     { 1, 2, 3, 4 },
                     { 5, 6, 7, 8 } 
                     };
    
    printPrincipalDiagonal(arr, n);
    printSecondaryDiagonal(arr, n);

    return 0;
}