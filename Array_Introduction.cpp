#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int input;
    cin >> input;
    int ar[input];
    for (int i = 1; i <= input; i++)
    {
        cin >> ar[i];
    }
    for (int i = input; i >= 1; i--)
    {
        cout << ar[i] << " ";
    }

    return 0;
}
