#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num_of_queries;
    cin >> num_of_queries;
    
    map <string, int> m;
    
    for (int i=0; i<num_of_queries; i++)
    {
        int type;
        cin >> type;
        string x;
        int y;
        if (type==1) {
                cin >> x >> y;
                map <string, int>:: iterator it = m.find (x);
                if (it == m.end()) m.insert (make_pair(x,y));
                else m[x]+=y;
        }
        if (type==2) {
                cin >> x;
                m.erase (x);
                
        }
        if (type==3) {
                cin >> x;
                map <string, int>:: iterator it = m.find (x);
                if (it == m.end()) cout << "0\n";
                else cout << m[x] << "\n";
                
        }
    }   
    return 0;
}
