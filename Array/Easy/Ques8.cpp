/*
Problem Statement: Rotate Array by d elements

*/

// Solution: 

// Function to rotate an array by d elements in counter-clockwise direction.
   void rotateArr(vector<int>& arr, int d) {
    int n = arr.size();
    if (n == 0 || d == 0)
        return;
    d = d % n; 
    if (d < 0) d += n; 
    
    if (d == 0)
        return;

    vector<int> temp(arr.begin(), arr.begin() + d);
    for (int i = d; i < n; i++)
        arr[i - d] = arr[i];
    for (int i = 0; i < temp.size(); i++)
        arr[n - d + i] = temp[i];
    }