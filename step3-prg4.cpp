class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        int j = 1;
        for(int i = 1; i<v.size(); i++){
            if(v[i] != v[i-1]){
                v[j] = v[i];
                j++;
            }
        }
        return j;
    }
};