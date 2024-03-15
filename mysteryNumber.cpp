#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    
    int * a = new int [n];
    int * b = new int [n+1];
    map <int, int> mpA; 
    map <int, int> mpB;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        mpA[a[i]]++;
    }
    
    for (int i=0; i<=n; i++) {
        cin >> b[i];
        mpB[b[i]]++;
    }
    
    for (int i=0; i<=n; i++) if (mpA[b[i]]!=mpB[b[i]]) {
        cout << b[i];
        break;
    }
}
