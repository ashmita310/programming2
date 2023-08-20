#include<bits/stdc++.h>
using namespace std;

int main(){
    char string1[20];
    int i, length;
    int m = 0;
    
    cout << "Enter a string: ";
     cin >> string1;
    
    length =strlen(string1);
    
    for(i=0;i < length ;i++)
    {
        if(string1[i] != string1[length-i-1])
        {
            m = 1;
            break;
        }
    }
    
    if (m) 
    {
        cout << string1 << " is not a palindrome" << endl; 
    }    
    else 
    {
        cout << string1 << " is a palindrome" << endl; 
    }
    return 0;
}