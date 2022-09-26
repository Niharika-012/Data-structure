// Ques 1: Find the maximum number till ith position

#include<bits/stdc++.h>
using namespace std;

int maxTillI(int a[] , int n)
{  
    int maxi = INT_MIN;
    for(int i = 0 ; i<n ; i++)
    {
        maxi = max(maxi , a[i]);
    }

    return maxi;
}

int main()
{
    int n ;
    cin>>n;
    int arr[n];
    
    for(int i = 0 ; i <n ; i++)
    {
        cin>>arr[i];
    }

   cout<< maxTillI(arr,n)<<endl;


    return 0;

}