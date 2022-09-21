#include<iostream>
#include<string>
using namespace std;

void ReverseNumber(int n)
{
    if(n < 10)
    {
        cout << n;
        return;
    }
    else
    {
        cout << n%10;
        ReverseNumber(n/10);
    }
}
int main()
{
    int n;

    cout << "Enter a number to reverse : ";
    cin >> n;
    
    cout << "Reverse of number is : ";
    ReverseNumber(n);
    
    return 0;
}