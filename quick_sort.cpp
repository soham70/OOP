#include <bits/stdc++.h>
using namespace std;

int partition(int *num,int low,int up)
{
    int pivot=num[low];

    int p=low+1;
    int q=up;

    do{
        while(num[p]<=pivot && p<=up)
        {
            p++;
        }
        while(num[q]>pivot)
        {
            q--;
        }
        if(p<q)
        {
            swap(num[p],num[q]);
        }
    }while(p<q);

    swap(num[low],num[q]);

    return q;
}


void quicksort(int *num,int low,int up)
{
    if(low<up)
    {
        int k=partition(num,low,up);
        quicksort(num,low,k-1);
        quicksort(num,k+1,up);
    }
}

int main(){

int num[5]={13,25,16,2,90};

int low=0,up=(sizeof(num)/sizeof(num[0]));
int n=(sizeof(num)/sizeof(num[0]));

quicksort(num,low,up-1);

for(int i=0;i<n;i++)
{
    cout<<num[i]<<" ";
}

return 0;
}