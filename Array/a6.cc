/* Ques 6: Subarray with maximum sum equal to S
 Find continuous subarray which adds to give  a number given 'S'
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

void findContinousSubarray(int a[] , int n , int key)
{
    int start = -1 ;
    int end = 1;
    int i =0 , j= 0;

    int curr_sum = 0;
 
    while(j<n && curr_sum+a[j] <= key)
    {
        curr_sum +=a[j];
        j++;
    }

    if(curr_sum == key)
    {
        cout<<i+1<<" "<<j<<endl;
        return;
    }
    
    while(j<n)
    {
        curr_sum +=a[j];

        while(curr_sum > key)
        {
            curr_sum -= a[i];
            i++;
        }
        if(curr_sum == key)
        {
            start = i+1;
            end = j+1;
            break;
        }
        j++;
    }
    cout<<start<<" "<<end<<endl;

}

int main()
{
    int n ;
    cin>>n;
    int arr[n];
    int s;
    cin>>s;
    readArray(arr, n);

    findContinousSubarray(arr,n,s);


    return 0;
}