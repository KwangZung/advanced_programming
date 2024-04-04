#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector <int> arr;
    for (int i=0; i<n; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    int pos, a, b;
    cin >> pos >> a >> b;
    arr.erase (arr.begin()+(pos-1));
    arr.erase (arr.begin()+(a-1), arr.begin()+b-1);
    
    int len = arr.size();
    cout << len << "\n";
    for (int i=0; i<len; i++) cout << arr[i] << " ";
    return 0;
}
