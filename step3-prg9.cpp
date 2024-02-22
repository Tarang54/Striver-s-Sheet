class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& v) {
        int max = 0, c = 0;
        for(int i=0; i<v.size(); i++){
            if(v[i]==1)
                c++;
            if(c>max)
                max=c;
            if(v[i]==0)
                c=0;
        }
        return max;
    }
};
