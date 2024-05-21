// In this question we have used bit manipulation 
// in th first loop we get number from 0 to 2^n(number of subsets)
// in the second loop we use AND operator top compare the binary numbers from the first loop and with a left shifted binary 
// and the result is added to vector V

// Example --> num = 3 == 011, here the num [1,2] is added to the vector v in first left shift we have a set 
// 011 & 1 --> 1 therefore [1] is added , on second iteration we have 011 & 10 so we have 10 so, [2] is added to vector 
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        
        for(int i=0;i<(1<<n);i++){
            vector<int>v;
            for(int j=0;j<n;j++){
                if((1<<j)&i){
                    v.push_back(nums[j]);
                }
               
            }ans.push_back(v);
        }
        return ans;
    }
};
