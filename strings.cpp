#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string a,b;
    cin >> a >> b;
    cout << a.size() << " " << b.size() << "\n" << a+b << "\n" ;
    
    char tmp = b[0];
    b[0]=a[0];
    a[0]=tmp;
    
    cout << a << " " << b << "\n";
    return 0;
}
