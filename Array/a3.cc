//Ques 2: Find the length of  longest arithmetic  sub arrays

#include<bits/stdc++.h>
using namespace std;

void readArray(int a[] , int n)
{
    for(int i = 0 ; i<n ; i++)
    {
        cin>>a[i];
    }
}

void  lengthOfLongestSubArray(int a[] , int n)
{  
    int prevDiff = a[1]-a[0];
    int current = 2;

    int length = INT_MIN;
    for(int i =2 ;i<n ; i++)
    {   
        if(prevDiff == (a[i] - a[i-1]) )
        {
            current++;
        }
        else{
            prevDiff = a[i] - a[i-1];
            current = 2;
        }
       
       length = max(length , current);
    }
    cout<<length<<endl;
}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    
    readArray(arr, n);
    lengthOfLongestSubArray(arr,n);
    cout<<endl;
    return 0;
}