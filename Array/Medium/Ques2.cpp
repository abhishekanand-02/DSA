/*
Problem Statement: Sort an array of 0's 1's and 2's
*/


//Solution1: O(n)+O(n)=O(2n)⟹O(n) Big-O notation shows only the dominant term and ignores constants, O(n).
void sort012(vector<int>& arr) {
        // code here
        int zeroCount =0;
        int oneCount =0;
        int twoCount =0;
        vector<int> temp;
        
        for(int i =0;i< arr.size();i++){
            if (arr[i] == 0){
                zeroCount++;
            }
            else if(arr[i] == 1 ){
                oneCount++;
            }
            else{
                twoCount++;
            }
        }
        int index = 0;
        while (zeroCount--) arr[index++] = 0;
        while (oneCount--)  arr[index++] = 1;
        while (twoCount--)  arr[index++] = 2;
    }

// Solution2 : Single-pass Dutch National Flag algorithm

void sort012(vector<int>& arr) {
    int low = 0, mid = 0;
    int high = arr.size() - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
