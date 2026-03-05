/*
Problem: matrix of alphabets
Platform: NA
Difficulty: Easy
Concept: NA
Time Complexity: O(n)
Space Complexity: O(n)
Date Solved: 05-03-2026
*/

/*
Output:
A 
B B
C C C
D D D D
E E E E E
*/

#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i=0; i<n; i++) {
        for(char ch='E'-i; ch<='E'; ch++) {
            cout << ch << "  ";
        }
        cout << endl;
    }
}

int main() {
    int t;

    cout << "Enter number of test cases: ";
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        print(n);
    }
}