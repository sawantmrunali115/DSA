/*
Problem: matrix of *
Platform: NA
Difficulty: Easy
Concept: NA
Time Complexity: O(n)
Space Complexity: O(n)
Date Solved: 04-03-2026
*/

/*
Output: 
* * * * *
* * * * *
* * * * *
* * * * *
*/


#include<bits/stdc++.h>
using namespace std;

void print(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << "* ";
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