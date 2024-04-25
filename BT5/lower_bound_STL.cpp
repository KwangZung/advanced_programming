#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void binSearch (int x, int arr[], int len)
{
    int i = 1, j = len;
    while (i<j)
    {
        int m = (i+j)/2;
        if (x>arr[m-1]) i = m+1;
        else j=m;
    }
    if (x==arr[i-1]) cout << "Yes " << i << "\n";
    else cout << "No " << i << "\n";
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    
    int arr[n];
    for (int i=0; i<n; i++) cin >> arr[i];
    
    int num_of_tests;
    cin >> num_of_tests;
    
    for (int i = 0; i< num_of_tests; i++) 
    {
        int test;
        cin >> test;
        binSearch (test, arr, n);
    }
    return 0;
}
