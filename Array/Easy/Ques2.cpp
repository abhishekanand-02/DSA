/*
Problem Statement: Second Largest Element in an Array without sorting
*/

// Solution:
int getSecondLargest(vector<int> &arr) {
        
        int largest = -1;
        int secondLargest = -1;

        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] > largest) {
                secondLargest = largest;
                largest = arr[i];
            } 
            else if(arr[i] > secondLargest && arr[i] != largest) {
                secondLargest = arr[i];
            }
        }
        return secondLargest;
    }