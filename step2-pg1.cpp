void selectionSort(vector<int>&v) {
    int n = v.size();
    for(int i = 0; i<n-1 ; i++){
        int temp = i;
        for(int j = i+1; j<n ; j++){
            if(v[j]<v[temp]){
                temp = j;
            }
        }
        int temp2 = v[i];
        v[i] = v[temp];
        v[temp] = temp2;
    }
}
