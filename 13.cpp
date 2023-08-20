#include <iostream>
using namespace std;
void sort(int height[], int size)
{
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-1-i; j++)
        {
            if(height[j]>height[j+1])
            {
                int temp=height[j];
                height[j]=height[j+1];
                height[j+1]=temp;
            }
        }
    }
}
int main()
{
    int height[] = {1,9,7,3,5,4};
    int size = sizeof(height)/sizeof(height[0]);
    cout<<"Height before sorting"<<endl;
    for(int i=0; i<size; i++)
        cout<<" "<<height[i];
    sort(height, size);
    cout<<"\nHeight after sorting"<<endl;
    for(int i=0; i<size; i++)
        cout<<" "<<height[i];
    return 0;
}