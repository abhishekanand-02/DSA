/*
Problem Statement: twoSum problem
*/

// SOlution 1 : Brute Force- O(n^2)
bool twoSum(vector<int>& arr, int target) {
        // code here
        int n= arr.size();
        int sum =0;
        for (int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                sum = arr[i] + arr[j];
                
                if(sum == target){
                    return true;
                }
            }
        }
        return false;
        
    }

// Solution2: Optimized Approach - Sorting and Two-Pointer Technique - O(n*log(n)) time and O(1) space
 bool twoSum(vector<int>& arr, int target) {
        // code here
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int left = 0;
        int right = n-1;
        
        while(left < right){
            int sum = arr[left] + arr[right];
            
            if(sum == target){
                return true;
            }
            else if (sum < target){
                left++;
            }
            else{
                right--;
            }
        }
        return false;
    }