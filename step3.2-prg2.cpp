class Solution {
public:
    void swap(int &a, int &b){
        int temp = a;
        a=b;
        b=temp;
    }
    void sortColors(vector<int>& a) {
        int high = a.size()-1;
        int low = 0, mid = 0;
        while(mid<=high){
            if(a[mid]==0){
                swap(a[mid], a[low]);
                low++;
                mid++;
            }else if(a[mid]==1){
                mid++;
            }else if(a[mid]==2){
                swap(a[mid],a[high]);
                high--;
            }
        }
    }
};
