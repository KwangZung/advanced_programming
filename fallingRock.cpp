#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int w, h;

vector<vector<char>> grid(2000, vector<char>(2000));

bool canSurvive (vector <vector<char>> grid, int x, int y)
{
    if (y==h-1) return true;
    
    bool canLeft = (x>0 && grid[y][x-1]=='E' && grid[y+1][x-1]=='E');
    bool canRight = (x<w-1 && grid[y][x+1]=='E' && grid[y+1][x+1]=='E');
    bool canStay = (grid [y+1][x]=='E');
    
    //if (!canLeft && !canRight && !canStay) return false;
    
    if ( (canLeft&&canSurvive(grid, x-1, y+1)) || (canRight&&canSurvive(grid, x+1, y+1)) || (canStay&&canSurvive(grid, x, y+1))) return true;
    
    return false;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    cin >> w >> h;
    
    int x, y;
    
    
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> grid[i][j];
            if (grid[i][j]=='Y') 
            {
                x=j;
                y=i;
            }
        }
    }
    
    if (canSurvive(grid, x, y)) cout << "YES";
    else cout << "NO";
    
}
