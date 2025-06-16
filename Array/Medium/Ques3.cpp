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

//Solution3 : Moore's Voting Algorithm --> O(n)
int majorityElement(vector<int>& arr) {
        // code here
        int count = 0;
        int element;
        
        for(int i=0;i<arr.size();i++){
            if(count == 0){
                count = 1;
                element = arr[i];
            }
            else if(arr[i] == element){
                count++;
            }
            else{
                count--;
            }
        }
        int count1=0;
        for(int i =0;i<arr.size();i++){
            if(arr[i] == element){
                count1++;
            }
        }
        if(count1 > (arr.size() / 2)){
            return element;
        }
        return -1;
    }

//Solution - Tc = O(nlogn)*n , sc = o(1)
int majorityElement(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());
        int n = arr.size();
        // freq count 
        int freq= 1; 
        int ans  = arr[0];
        
        if(n == 1){
            return ans;
        }
        
        
        for(int i=1;i<arr.size();i++){
            if(arr[i] == arr[i-1]){
                freq++;
            }
            else{
                freq=1;
                ans = arr[i];
            }
            if(freq >n/2 ){
                return ans;
            }
        }
        return -1;
    }