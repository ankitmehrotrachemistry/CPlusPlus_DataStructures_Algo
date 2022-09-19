#include<iostream>
using namespace std;

int main()
{
    int M = 4;
    int N = 4;

    int arr[][4]  = 
                  {
                     {1,2,3,4},
                     {5,6,7,8},
                     {4,2,1,4},
                     {8,7,5,2}
                  };
    
     for(int i = 0; i < M; i++)
     {
        for(int j = 0; j < N; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
     }
    return 0;
}