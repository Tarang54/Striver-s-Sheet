class Solution {
public:
    void moveZeroes(vector<int>& v) {
        int c = 0;
        for(int i = 0; i<v.size(); i++){
            if(v[i]!=0){
                v[c]=v[i];
                c++;
            }
        }
        while(c<v.size()){
            v[c]=0;
            c++;
        }
    }
};