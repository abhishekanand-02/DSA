/*
Problem Statement: Longest subarray with given sum K(positives)
*/

// Solution 1: Brute Force (Generate all subarray and then check)--> Somewhere Near about O(n^3)

int getLongestSubarray(vector<int>& arr, long long k) {
    int n = arr.size();
    int len =0;
    
    for(int i=0;i<n;i++){
        for(int j =i;j<n;j++){
            int sum =0;
            for(int k=i;k<=j;k++){
                sum = sum + arr[k];
            }
            if (sum == k){
                len = max(len, j-i+1);
            }
        }
    }
    return len;

   
}

// Solution2: Better Solution ~ O(n^2)

int getLongestSubarray(vector<int>& arr, long long k) {
    int n = arr.size();
    int len =0;
    
    for(int i=0;i<n;i++){
        int sum =0;
        for(int j =i;j<n;j++){
            sum = sum + arr[j];
            if (sum == k){
                len = max(len, j-i+1);
            }
        
        }
    }
    return len;

   
}

// Solution3: Optimal Appraoch(2 pointer Appraoch)

int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size(); 

    int left = 0, right = 0;
    long long sum = a[0];
    int maxLen = 0;
    while (right < n) {
        // if sum > k, reduce the subarray from left
        // until sum becomes less or equal to k:
        while (left <= right && sum > k) {
            sum -= a[left];
            left++;
        }

        // if sum = k, update the maxLen i.e. answer:
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

        // Move forward thw right pointer:
        right++;
        if (right < n) sum += a[right];
    }

    return maxLen;
}