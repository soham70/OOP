#include <bits/stdc++.h>
using namespace std;

int main(){

int arr[5]={1,2,3,4,5};

int up=(sizeof(arr[0])/sizeof(int));
int low=0,mid,x;
cin>>x;
int flag=0;

for(mid=(low+up)/2;low<=up;mid=(low+up)/2)
{
    if(x==arr[mid])
    {
        flag=1;
        cout<<"\nData Found";
        break;
    }
    if(x<arr[mid])
    {
        up=mid-1;
    }
    // if(x>arr[mid])
    else
    {
        low=mid+1;
    }
}
    if(flag==0)
    {
        cout<<"\nData Not Found";
    }

return 0;
}