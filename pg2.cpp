void bubbleSort(vector<int>& v, int n) 
{
    //write your code here
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i-1; j++){
            if(v[j] > v[j+1]){
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}