/*
Problem Statement: Left rotate an array by D places

*/



void reverse(int arr[], int start, int end) {
    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

}
void rotateArr(int arr[], int n, int d) {
    // code here
    d = d % n;
    if (d == 0) return;
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);

    // TC: O(d) + O(n - d) + O(n) = O(n)

}
