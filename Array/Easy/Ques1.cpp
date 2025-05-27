/*
Problem Statement: Largest Element in an Array
*/

//Solution: 

int largest(int arr[], int n) {
    // Code Here
    int maximum = -1;
    for(int i=0; i<n; i++){
        if(arr[i] > maximum){
            maximum = arr[i];
        }
    }
    return maximum;
}