#include<bits/stdc++.h>
using namespace std;

void multiply(vector<int> &arr , int &size , int i)
{
    int carry = 0;
    for(int j = 0; j < size; j++)
    {
        int res = arr[j] * i;
        res = res + carry;
        
        arr[j] = res % 10;
        carry = res / 10;
    }
    
    while(carry > 0)
    {
        arr[size]  = carry%10;
        size++;
        
        carry = carry/10;
    }
}
    
vector<int> factorial(int n) {
    
    vector<int> arr(10000);
    int size = 1;
    arr[0] = 1;
    
    for(int i = 2; i <= n; i++)
    {
        multiply(arr,size, i);
    }
    
    vector<int> ans;
    for(int i =size-1; i>= 0; i--)
    {
        ans.push_back(arr[i]);
    }
    
    return ans;
    
}

int main()
{
    int n = 5;
    vector<int> ans(10000);

    ans = factorial(5);

    for(int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<",";
    }

    return 0 ;

}