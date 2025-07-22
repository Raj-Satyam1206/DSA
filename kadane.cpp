#include<bits/stdc++.h>
using namespace std;


int kadane(vector<int> &arr)
{
    int sum = 0;
    int maxSum = INT_MIN;

    for(int i = 0; i < arr.size(); i++)
    {
        sum = sum + arr[i];
        maxSum = max(maxSum , sum);
        if(sum < 0)
            sum = 0;    
    }
    return maxSum;
}

int main()
{
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    int maxSum = kadane(arr);

    cout<<"Maximum Subarray Sum is :" << maxSum <<endl;

    return 0;
}