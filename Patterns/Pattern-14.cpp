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
A B
A B C
A B C D
A B C D E
*/

#include <bits/stdc++.h>
using namespace std;

void print(int n){
    char ch = 'A';

    for(int i=0; i<n; i++) {
        for(char ch='A'; ch<='A'+ i; ch++) {
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