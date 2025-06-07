/*
Problem Statement: Find missing number in an array

*/

int missingNum(vector<int>& arr) {
    long long n = (long long)arr.size() + 1;
    long long total = n * (n + 1) / 2;

    long long sum = 0;
    for (int num : arr) {
        sum += num;
    }

    return (int)(total - sum);
}