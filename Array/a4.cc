/* Ques 4: Tell the number of days are the  record braking day 
the day is record breaking if  it fololows the following two conditions
1. the number of visitors on the day is strictly larger than the number of visitors on each of the previous day
2. Either it is the last day or the number of visitors on the day is strictly larger than the number of visitors on the following day
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

int countRecordBreakingDay(int a[] , int n)
{
    int maxi = INT_MIN;
    int count = 0 ;

    for(int i = 0 ; i<n ; i++)
    {
        if(a[i] > maxi && a[i] > a[i+1])
        {
            count++;
        }
        maxi = max(maxi , a[i]);
    }

    return count;
}

int main()
{
    int n ;
    cin>>n;
    int arr[n+1];
    arr[n] = -1;

    readArray(arr, n);

    cout<<countRecordBreakingDay(arr,n)<<endl;

    return 0;
}