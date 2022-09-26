/* Ques 5: First repeating element in the array of integers i.e an element 
that occurs more than once and whose index of first occurence is smallest.
*/

#include<bits/stdc++.h>
using namespace std;

void readArray(int a[] , int n)
{
    for(int i = 0 ; i<n ; i++)
    {
        cin>>a[i];
    }
}

void firstOccurrenceElemet(int a[] , int n)
{
   const int N = 25;
    int idx[N];
    int min_index = INT_MAX;
    for(int i = 0 ; i<N ; i++)
    {
        idx[i] = -1;
    }

    for(int i = 0 ; i<n ; i++)
    {
        if(idx[i] != -1)
        {
            min_index = min(min_index , idx[a[i]]);
        }
        else{
            idx[a[i]] = i;
        }
    }
    if(min_index == INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else{
        cout<<a[min_index]<<endl;
    }
}

int main()
{
    int n ;
    cin>>n;
    int arr[n];
    readArray(arr, n);

     firstOccurrenceElemet(arr,n);


    return 0;
}