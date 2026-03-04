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
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include <bits/stdc++.h>
using namespace std;

void print(int n){
    int count = 1;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << count << "  ";
            count++;   
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