#include<bits/stdc++.h>
using namespace std;
int evenNumbers(int arr[], int size)
{
    int evennum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evennum++;
        }
    }
    return evennum;
}

int main()
{
    int arr[]={2,5,8,6,1,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int even = evenNumbers(arr,size);
    cout<<"The number of even count in the array:"<<even<<endl;
    return 0;
}
