class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;

        for (auto it : nums) {
            mpp[it]++;
        }

        for (auto it : mpp) {
            if (it.second == 1) {
                return it.first;
            }
        }
        return -1;
    }
};


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for (int k = 0; k <= 31; k++) {
            int countOnes = 0;
            for (auto &num : nums) {
                if ((num & (1 << k)) != 0) {
                    countOnes++;
                }
            }
            if (countOnes % 3 == 1) {
                res = res | (1 << k);
            }
        }
        return res;
    }
};
