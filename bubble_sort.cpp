#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    int num[5] = {13, 10, 7, 21, 3};
    int n = (sizeof(num) / sizeof(num[0]));

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (num[j] > num[j + 1])
            {
                swap(&num[j], &num[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}