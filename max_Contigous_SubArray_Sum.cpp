#include<bits/stdc++.h>
using namespace std;
int solve1(vector<int> &arr){
    int ans = 0;
    int n = arr.size();
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            ans=max(sum,ans);
        }
    }
    return ans;
}
int solve2(vector<int> &arr){
    //Most optimize approach
    int ans = 0;
    int sum = arr[0];
    int n = arr.size();
    for(int i=1;i<n;i++){
   
        sum=max(arr[i],arr[i]+sum);
        ans = max(sum,ans);
    }
    return ans;
}
int main(){

    //to find the maximum contigous subarray sum 
    //we have three approaches -:
    /*
    Option 1 : TIME COMPLEXITY O(N^3)
    Option 2 : TIME COMPLEXITY O(N^2)
    Option 3 : TIME COMPLEXITY O(N);                 
    */
   vector<int> arr={-2,-3,4,-1,-2,1,5,-3};
   int ans = solve1(arr);
   int ans2 = solve2(arr);                          

    cout << "O(N^2) Approach Answer is " << ans << endl;
    cout << "O(N) Approach Answer is " << ans2 << endl;

    return 0;
}
