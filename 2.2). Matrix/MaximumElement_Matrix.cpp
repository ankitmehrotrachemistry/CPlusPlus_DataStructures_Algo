#include<iostream>
using namespace std;

#define M 4
#define N 4

int FindMaximumElement(int mat[N][M])
{
    int maxElement = INT_MIN;

    for(int i = 0; i < M; i ++)
    {
        for(int j = 0; j < N; j++)
        {
            if(mat[i][j] > maxElement)
            {
                maxElement = mat[i][j];
            }
        }
    }
    return maxElement;
}

int main()
{
    int mat[M][N] = {
                       {1,2,3,4},
                       {20,5,8,14},
                       {8,6,4,2},
                       {24,8,4,1}
                    };
    
    cout << "Maximum Element in Matrix is : " << FindMaximumElement(mat) << endl;
    return 0;
}