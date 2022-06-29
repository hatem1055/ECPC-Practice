class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>answer{};
        for(int i=0;i<nums.size();i++){
            answer.push_back(nums[i]*nums[i]);
        }
        sort(answer.begin(),answer.end());
        return answer;
    }
};
