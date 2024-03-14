#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int arrNum, qNum;
    cin >> arrNum >> qNum;
    
    int ** arr = new int * [arrNum];
    
    for (int i=0; i<arrNum; i++)
    {
        int len;
        cin >> len ;
        arr[i]=new int [len];
        
        for (int j=0; j<len; j++) {
            cin >> arr[i][j];
        }
    }
    
    for (int i=0; i<qNum; i++)
    {
        int arrIndex, arr_i;
        cin >> arrIndex >> arr_i;
        cout << arr[arrIndex][arr_i] << "\n";
    }
    
    return 0;
}
