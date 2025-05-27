/*
Problem Statement: Check if array is sorted
*/

// Solution:

bool arraySortedOrNot(vector<int>& arr) {
        // code here
        for(int i=0; i< arr.size()-1; i++){
            if(arr[i+1]< arr[i]){
                return false;
            }
        }
        return true;
        
    }
