#include <iostream>
using namespace std;
int search(int arr[], int size, int item)
{
    int position=-1;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==item)
        {
            position = i;
            break;
        }
    }
    return position;
}
int main()
{
    int arr[] = {1,5,9,7,3,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int item;
    cout<<" Enter search element : ";
    cin>>item;
    int position = search(arr, size, item);
    if(position!=-1)
        cout<<" Element found in position "<<position; 
    else
        cout<<" Element not found ";   
    return 0;
}