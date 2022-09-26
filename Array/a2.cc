//Ques 2: Find the sum of all the sub arrays

#include<bits/stdc++.h>
using namespace std;

void readArray(int a[] , int n)
{
    for(int i = 0 ; i<n ; i++)
    {
        cin>>a[i];
    }
}

void sumOfSubArray(int a[] , int n)
{  
    int sum ;
    for(int i =0 ;i<n ; i++)
    {     sum = 0 ;
        for(int j = i ; j < n ; j++)
        {
            sum += a[j];
            cout<<sum<<" ";
        }
        
    }
}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    
    readArray(arr, n);
    sumOfSubArray(arr,n);
    cout<<endl;
    return 0;
}