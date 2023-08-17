#include<iostream>
using namespace std;
int main()
{
    int scores[]={1,4,7,5,2,8};
    int sum = 0;
    int totalscore = 6;
    for(int i=0;i<totalscore;i++)
    {
        sum += scores[i];
    }
    cout<<"The total of scores is :"<<sum;
    return 0;
}