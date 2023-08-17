#include<bits/stdc++.h>
#include<string>
using namespace std;
int copy(string book[],string author[],int size)
{
    for(int i=0;i<size;i++)
        author[i]=book[i];
}
int main()
{
    string book[] = {"a","b","c","d","e"};
    int size=sizeof(book)/sizeof(book[0]);
    string author[size];
    copy(book,author,size);
    cout<<"Book"<<endl;
    for(int i=0; i<size; i++)
        cout<<book[i]<<endl;
    cout<<"Author"<<endl;
    for(int i=0;i<size;i++)
        cout<<author[i]<<endl;
}