// Problem Link : https://leetcode.com/problems/two-sum/description/

// Brute Force Approach :
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {};
    }
};
// Time Complexity : O(n^2)  
// Space Complexity: O(1)

// Optimal Approach : Hash Map
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mpp;

        for (int i = 0; i < n; i++) {
            int x = target - nums[i];

            if (mpp.find(x) != mpp.end()) {
                return {i, mpp[x]};
            }
            mpp[nums[i]] = i;
        }        

        return {-1, -1};
    }
};
// Time Complexity: O(n)
// Space Complexity: O(n)
