#include<bits/stdc++.h>
using namespace std;


int maxWater(vector<int> &arr) {
        int n = arr.size();
        int ans = 0;
        int left[n] , right[n];
        
        left[0] = arr[0];
        for(int i = 1; i < n; i++)
            left[i] = max(left[i-1] , arr[i]);
            
        right[n-1] = arr[n-1];
        for(int i = n-2; i >= 0; i--)
            right[i] = max(right[i+1] , arr[i]);
        
        for(int i = 0; i < n; i++)
            ans = ans + (min(left[i] , right[i]) - arr[i]);
        
        
        return ans;
    }
    
int main()
{
    vector<int> arr = {3, 0, 1, 0, 4, 0, 2};
    int ans = maxWater(arr);

    cout<<"Amount of water trapped is"<<" "<< ans;

    return 0;
}