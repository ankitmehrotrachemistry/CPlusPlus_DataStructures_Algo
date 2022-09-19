#include<iostream>
using namespace std;

#define MAX 100

void DiagonalSquare(int mat[][MAX], int row, int col)
{
   cout << "Diagonal One : ";
   for(int i = 0; i < row; i++)
   {
      for(int j = 0; j < col; j++)
      {
          if(i == j)
          {
             cout << mat[i][j] * mat[i][j] << " ";
          }
      }
   }

   cout << "\nDiagonal Two : ";
   for(int i = 0; i < row; i++)
   {
       for(int j = 0; j < col; j++)
       {
          if(i+j == col - 1)
          {
             cout << mat[i][j] * mat[i][j] << " ";
          }
       }
   } 
}

int main()
{
    int mat[][MAX] = {
                         {1,2,3,4},
                         {8,7,6,5},
                         {4,6,8,2},
                         {5,7,9,11}
                     };
    DiagonalSquare(mat,4,4);
}