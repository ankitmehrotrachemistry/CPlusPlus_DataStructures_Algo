/* Given 3 integers A, B, and R, the task is to find the sum of all the elements of the matrix
generated by the given rules: 

The first row will contain a single element which is A and the rest of the elements will be 0.
The next row will contain two elements all of which are (A + B) and the rest are 0s.
Third row will contain (A + B + B) three times and the rest are 0s and so on.
The matrix will contain only R rows. */

#include<iostream>
using namespace std;

int sum(int A, int B, int N)
{
    int sum = 0;

    for(int i = 1; i <= N; i++)
    {
        sum += i*A;

        A += B;
    }
    return sum;
}
int main()
{
    int A = 4, B = 4, N = 3;

    cout << sum(A,B,N);
    return 0;
}