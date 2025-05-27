/*
Problem Statement: Linear Search in Array
*/

// Solution:

int search(vector<int>& arr, int x) {

        // Your code here
        for(int i=0; i<arr.size();i++){
            if(arr[i] == x){
                return i;
            }
        }
        return -1;
    }