#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num_of_commits;
    cin >> num_of_commits;
    set <int> s;
    
    for (int i=0; i<num_of_commits; i++)
    {
        int type, x;
        cin >> type >> x;
        switch (type) {
            case 1:
                s.insert (x);
                break;
            case 2:
                s.erase (x);
                break;
            case 3:
                set<int>::iterator it = s.find(x);
                if (it != s.end()) cout << "Yes\n";
                else cout << "No\n";
                break;
        }
    }
    return 0;
}
