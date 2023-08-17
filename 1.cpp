#include<bits/stdc++.h>
using namespace std;
void reversecandy(string candy[],string rev_candy[],int size)
{
    for(int i=0;i<size;i++)
    rev_candy[i]=candy[size-i-1];
}

int main()
{
    string candy[]={"kitkat","eclairs","dairymilk","milkybar"};
    int size=sizeof(candy)/sizeof(candy[0]);
    string rev_candy[size];
    reversecandy(candy,rev_candy,size);
    cout <<"Before reversed"<<endl;
    for(int i=0;i<size;i++)
    cout<<candy[i]<<endl;
    cout<<"Reversed"<<endl;
    for(int i=0;i<size;i++)
    cout<<rev_candy[i]<<endl;
    return 0;
}