#include <iostream>
using namespace std;
int product(int weight[], int size)
{
    int result = 1;
    for(int i=0; i<size; i++)
        result=result*weight[i];
    return result;
}
int main()
{
    int weight[] = {5,1,9,7,4};
    int size = sizeof(weight)/sizeof(weight[0]);
    float result = product(weight, size);
    cout<<" Product of weights : "<<result;
    return 0;
}