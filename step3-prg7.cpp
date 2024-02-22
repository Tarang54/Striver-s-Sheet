vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int i=0, j=0;
    int n = a.size();
    int m = b.size();
    vector<int> v;
    while(i<n && j<m){
        if(a[i]==a[i+1])
            i++;
        else if(b[j]==b[j+1])
            j++;
        else if(a[i]<b[j]){
            v.push_back(a[i]);
            i++;
        }
        else if(a[i]>b[j]){
            v.push_back(b[j]);
            j++;
        }
        else if(a[i] == b[j]){
            v.push_back(a[i]);
            i++;
            j++;
        }
    }
    while(i<n){
        v.push_back(a[i]);
        i++;
    }
    while(j<m){
        v.push_back(b[j]);
        j++;
    }
    return v;
}