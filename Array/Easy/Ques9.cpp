/*
Problem Statement:Find the number that appears once, and other numbers twice.

*/

// Solution: 1
int findUnique(vector<int> &arr) {
        // code here
        unordered_map<int , int> freq;

        for(int i=0;i<arr.size(); i++){
            freq[arr[i]]++;
        }
        for(auto it: freq){
            if(it.second == 1){
                return it.first;
            }
        }
        // return -1;

    }

// Solution:2

int findUnique(vector<int> &arr) {
        // code here
        int result =0;

        for(int i=0; i< arr.size();i++){
            result = result ^ arr[i];
        }
        return result;

    }
