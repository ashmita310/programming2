#include<bits/stdc++.h>
using namespace std;
int temp(int arr[],int size)
{
    int max_temp=arr[0];
    for(int i =1;i<size;i++)
    {
        if(arr[i]>max_temp)
        max_temp=arr[i];
    }
    return max_temp;
}
int main()
{
    int exp_temp[]={90,180,140,137,50};
    int size = sizeof(exp_temp)/sizeof(exp_temp[0]);
    cout<<"Max temp among all is:"<<temp(exp_temp,size);
    return 0;
}