#include <bits/stdc++.h>
using namespace std;

int main(){

int num[5]={5,12,3,54,70};
    int n = ((sizeof(num))/ (sizeof(num[0])));
int i=0,j=0;
for(i=0;i<n;i++)
{
    int temp=num[i];
    for(j=i-1;j>0;j--)
    {
        if(num[j]>temp)
        {
            num[j+1]=num[j];
        }
        else{
            break;
        }
    }
    num[j+1]=temp;
}

for(int i=0;i<n;i++)
{
    cout<<num[i]<<" ";
}


return 0;
}
