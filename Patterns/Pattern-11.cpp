/*
Problem: matrix of numbers
Platform: NA
Difficulty: Easy
Concept: NA
Time Complexity: O(n)
Space Complexity: O(n)
Date Solved: 04-03-2026
*/

/*
Output: 
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/


#include<bits/stdc++.h>
using namespace std;

void print (int n) {
    int start = 1;

    for(int i=0; i<n; i++) {
        if(i % 2 == 0) {
            start = 0;
        } 
        else {
            start = 1;
        }

        for(int j=0; j<=i; j++){
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

int main() {
    int t;

    cout << "Enter number of test cases: ";
    cin >> t;

    for(int i=0; i<t; i++) {
        int n;
        cin >> n;
        print(n);
    }
}