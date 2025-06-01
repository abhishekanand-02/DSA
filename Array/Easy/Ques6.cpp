/*
Problem Statement: Rotate Array by One
*/
//Solution:

void rotate(vector<int> &arr) {
        // code here
        if (arr.empty()) return;
        int last = arr.back();
        arr.pop_back();
        arr.insert(arr.begin(), last);
    }