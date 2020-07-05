https://leetcode.com/problems/subsets/submissions/
class Solution {
public:
    void dfs(vector<int>& nums, vector< int >& tmp, vector< vector < int > >& res, int start)
    {
        res.push_back(tmp);
        for(int i = start; i<nums.size(); i++)
        {
            tmp.push_back(nums[i]);
            dfs(nums, tmp, res, i+1);
            tmp.pop_back();
        }
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector< vector < int > > res;
        vector< int > tmp;
        dfs(nums, tmp, res, 0);
        return res;
    }
};
