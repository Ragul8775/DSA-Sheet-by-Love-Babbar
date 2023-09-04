/* Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.



Example 1:

Input:
N = 6
A[] = {3, 2, 1, 56, 10000, 167}
Output: 1 10000
Explanation: minimum and maximum elements of array are 1 and 10000.


Example 2:

Input:
N = 5
A[]  = {1, 345, 234, 21, 56789}
Output: 1 56789
Explanation: minimum and maximum element of array are 1 and 56789. */

#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends

pair<long long, long long> getMinMax(long long a[], int n)
{
    pair<long long, long long> minmax;
    sort(a, a + n);
    minmax.first = a[0];
    minmax.second = a[n - 1];
    return minmax;
}
// Linear Search Method
/* pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long> minmax;
    int i;

    if(n==1){
        minmax.first=a[0];
        minmax.second=a[0];
    }

    if(a[0]>a[1]){
        minmax.first=a[1];
        minmax.second=a[0];
    }
    else{
        minmax.first=a[0];
        minmax.second=a[1];
    }
    for(i=2;i<n;i++){
        if(a[i]>minmax.second){
            minmax.second=a[i];
        }
        else if(a[i]<minmax.first){
            minmax.first=a[i];
        }
    }
    return minmax;
} */