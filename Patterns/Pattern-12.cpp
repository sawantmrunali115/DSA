/*
Problem: matrix of numbers
Platform: NA
Difficulty: Easy
Concept: NA
Time Complexity: O(n)
Space Complexity: O(n)
Date Solved: 01-09-2026
*/

/*
Output: 
1             1
1 2         2 1
1 2 3     3 2 1 
1 2 3 4 4 3 2 1
*/

#include<bits/stdc++.h>
using namespace std;

void print(int n) {
    for (int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }

        int space=2*(n-i);
        for(int j=1; j<=space; j++){
            cout << "  ";
        }

        for(int j=i; j>=1; j--){
            cout << j << " ";
        }

        cout << endl;
        space -= 2;
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