/*
Problem Statement: Remove duplicates from Sorted array
*/

// Solution:

int removeDuplicates(vector<int> &arr) {
        // code here
        int i =0;
        for(int j = 1; j<arr.size();j++){
            if(arr[i] != arr[j]){
                arr[i+1]= arr[j];
                i++;
            }
        }
        return i+1;
        
    }
