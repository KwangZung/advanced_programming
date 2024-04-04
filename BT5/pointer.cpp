#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void update (int *a, int *b)
{
    int tmp = *a;
    *a = *a+*b;
    *b = abs(*b-tmp);
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b;
    cin >> a >> b;
    
    update (&a,&b);
    
    cout << a << "\n" << b;
       
    return 0;
}
