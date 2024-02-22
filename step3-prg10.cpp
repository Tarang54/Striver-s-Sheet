class Solution {
public:
    int singleNumber(vector<int>& v) {
        int num = 0;
        for(int i=0; i<v.size(); i++){
            num = num^v[i];
        }
        return num;
    }
};
