#include <bits/stdc++.h>
using namespace std;

void merge(int *num,int low,int mid,int up)
{
    int res[up];
    int k=0,i,j;

    i=low,j=mid+1;

    while(i<=mid && j<=up){
    if(num[i]<num[j])
    {
        res[k]=num[i];
        i++;k++;
    }
    else{
        res[k]=num[j];
        j++;k++;
    }
    }
    while(i<=mid)
    {
        res[k]=num[i];
        i++;k++;
    }
    while(j<=up)
    {
        res[k]=num[j];
        k++;j++;
    }
    int m=0;
		for(i=low;i<=up;i++)
		{
			num[i]=res[m];
			m++;
		}
}

void partition(int *num,int low,int up)
{
    if(low<up)
    {
        int k=(low+up)/2;
        partition(num,low,k);
        partition(num,k+1,up);
        merge(num,low,k,up);
    }
}

int main(){

int num[7]={13,5,55,87,8,15,20};
int low=0,up=(sizeof(num)/sizeof(num[0]));
int n=up=(sizeof(num)/sizeof(num[0]));

// merge(num,0,(low+up)/2,up-1);
partition(num,low,up-1);

for(int i=0;i<n;i++)
{
    cout<<num[i]<<" ";
}

return 0;
}