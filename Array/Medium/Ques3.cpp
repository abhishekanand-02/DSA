/*
Problem Statement: Majority Element

*/

// Solution1 :O(n^2)

int majorityElement(vector<int> v) {

    int n = v.size();
    for(int i =0; i< n ; i++){
        int count =0;
        for(int j = 0;j<n;j++){
            if(v[i] == v[j]){
                count++;
            }
        }
        if(count > n/2){
            return v[i];
        }
    }
    return -1;
}

// Solution 2: TC, SC => O(n)
int majorityElement(vector<int>& arr) {
        // code here
        unordered_map<int , int> freq;
        int n = arr.size();
        
        for(int i=0;i< n ;i++){
            freq[arr[i]]++;
        }
        for(auto& it: freq){
            if(it.second > n/2 ){
                return it.first;
            }
        }
        return -1;
        
    }