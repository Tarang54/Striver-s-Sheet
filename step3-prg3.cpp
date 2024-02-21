class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int index = 0;
        bool is = false;
        for(int i=0; i<n-1; i++){
            if(nums[i+1]<nums[i]){
                index = i;
                is = true;
                break;
            }
        }
        if(is){
        vector<int> v2 (nums.begin(), nums.begin()+index+1);
        vector<int> v1 (nums.begin() + index+1 , nums.end());
        v1.insert(v1.end(),v2.begin(),v2.end());
        vector<int> v = v1;
        sort(v1.begin(),v1.end());
        if(v == v1)
            return true;
        else
            return false;
        }
        return true;
    }
};