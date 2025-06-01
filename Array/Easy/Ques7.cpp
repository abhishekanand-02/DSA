/*
Problem Statement: Union of 2 Sorted with Duplicates

Examples:

Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3, 6, 7]
Output: 1 2 3 4 5 6 7
Explanation: Distinct elements including both the arrays are: 1 2 3 4 5 6 7.

*/

// Solution1: Time Compleixty : O( (m+n)log(m+n) )

vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        set <int> s;
        vector <int> Union;
        
        for(int i =0; i< a.size();i++){
            s.insert(a[i]);
        }
        for(int i=0;i < b.size();i++){
            s.insert(b[i]);
        }
        
        for(auto &it : s){
            Union.push_back(it);
        }
        return Union;
        
        
    }