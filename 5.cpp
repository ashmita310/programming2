#include<bits/stdc++.h>
using namespace std;
int averageHeight(int arr[],int size) 
{
    int totalHeight=0;
    for (int i=0;i<size;i++) {
        totalHeight+=arr[i];
    }
    int averageHeight=totalHeight/size;
    return averageHeight;
}
int main()
{
    int arr[]={8,5,2,7,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int average=averageHeight(arr,size);
    cout<<"Average height of the trees:"<<average<<endl;
    return 0;
}
