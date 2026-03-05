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
A B C D E
A B C D
A B C
A B
A
*/

#include <bits/stdc++.h>
using namespace std;

void print(int n){
    char ch = 'A';

    for(int i=0; i<n; i++) {
        for(char ch='A'; ch<='A' + n - i - 1; ch++) {
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