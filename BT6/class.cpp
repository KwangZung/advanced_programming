#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class student
{
    private:
        int age;
        string first_name, last_name;
        int standard;
    public:
        int get_age;
        string get_first_name, get_last_name;
        int get_standard;
        void input (int a, string b, string c, int d)
        {
            age = a;
            first_name = b;
            last_name = c;
            standard = d;
            get_age = a;
            get_first_name = b;
            get_last_name = c;
            get_standard = d; 
            
        }
        void output ()
        {
            cout << age << "," << first_name << "," << last_name << "," << standard;
        }
        
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int age;
    string first_name;
    string last_name;
    int standard;
    cin >> age >> first_name >> last_name >> standard;
    student a;
    a.input(age, first_name, last_name, standard);
    cout << a.get_age << "\n" << a.get_last_name << ", " << a.get_first_name << "\n" << a.get_standard << "\n\n";
    a.output();
    return 0;
}
