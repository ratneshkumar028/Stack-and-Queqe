#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:

    void solve(int idx, vector<int> &arr, int target,
               vector<int> &curr, vector<vector<int>> &ans){

        if(target == 0){
            ans.push_back(curr);
            return;
        }

        for(int i = idx; i < arr.size(); i++){

            if(arr[i] > target) continue;

            curr.push_back(arr[i]);

            solve(i, arr, target - arr[i], curr, ans);

            curr.pop_back(); // backtracking
        }
    }

    vector<vector<int>> targetSumComb(vector<int> &arr, int target) {

        vector<vector<int>> ans;
        vector<int> curr;

        solve(0, arr, target, curr, ans);

        return ans;
    }
};