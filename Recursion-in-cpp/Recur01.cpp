// C++ implementation to print the given
// pattern recursively
#include <bits/stdc++.h>
using namespace std;

// function to print the 'n-th' row of the
// pattern recursively
void printPatternRowRecur(int n)
{
        // base condition
        if (n < 1)
                return;

        // print the remaining stars of the n-th row
        // recursively  
        cout << "* ";
        printPatternRowRecur(n-1);
}

void printPatternRecur(int n)
{
        // base condition
        if (n < 1)
                return;

        // print the stars of the n-th row      
        printPatternRowRecur(n);

        // move to next line
        cout << endl;

        // print stars of the remaining rows recursively
        printPatternRecur(n-1);

}
// Driver program to test above
int main()
{
        int n = 5;
        printPatternRecur(n);
        return 0;
}
