#include<iostream>
#include<cstring>
using namespace std;

int CheckPalindromeOfNumber(char str[], int first, int last)
{
    if(first < last +1)
    {
        first++;
        last--;

        return CheckPalindromeOfNumber(str, first, last);
    }

    if(first == last)
    {
        return 1;
    }
    if(str[first] != str[last])
    {
        return 0;
    }
    return 1;
}
int main()
{
    char str[] = "labal";
    int result;

    int length = strlen(str);

    if(length == 0)
    {
       result = 1;
    }
    else
    {
        result = CheckPalindromeOfNumber(str, 0, length - 1);
    }

    if(result == 1)
    {
        cout << "String is palindrome";
    }
    else
    {
        cout << "String is not a palindrome";
    }
    return 0;
}