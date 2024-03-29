class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p;
        vector<int> n;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]<0) n.push_back(nums[i]);
            if(nums[i]>=0) p.push_back(nums[i]);
        }
        int nn = 0, pn = 0;
        for(int i = 0; i<nums.size(); i++){
            if(i%2 == 0){
                nums[i] = p[pn];
                pn++;
            }
            if(i%2 != 0){
                nums[i] = n[nn];
                nn++;
            }
        }
        return nums;
    }
};
