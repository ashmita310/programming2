#include<bits/stdc++.h>
using namespace std;
void swap(string color[], int size)
{
    string temp = color[0];
    color[0]=color[size-1];
    color[size-1]=temp;
}
int main()
{
    string color[] = {"violet","indigo","blue","green","yellow","orange","red"};
    int size = sizeof(color)/sizeof(color[0]);
    cout<<"Before Swapping"<<endl;
    for(int i=0; i<size; i++)
        cout<<color[i]<<endl;
    swap(color,size);
    cout<<"After Swapping"<<endl;
    for(int i=0; i<size; i++)
        cout<<color[i]<<endl;
    return 0;
}