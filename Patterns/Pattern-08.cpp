/*
Problem: matrix of numbers
Platform: NA
Difficulty: Easy
Concept: NA
Time Complexity:
Space Complexity:
Date Solved: 01-09-2026
*/

/*
Output:
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/


#include<bits/stdc++.h>
using namespace std;

void print(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<i; j++) {
            cout << "  ";
        }

        for(int j=0; j< 2*n-(2*i+1); j++) {
            cout << "* ";
        }

        for(int j=0; j<i; j++) {
            cout << "  ";
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