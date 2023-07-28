#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num[5] = {10, 32, 1, 14, 44};
    int n = (sizeof(num[0]) / sizeof(int));

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(num[i]>num[j])
            {
            swap(num[i], num[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}