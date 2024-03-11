#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int hour = (s[0]-'0')*10 + (s[1]-'0');
    if ((s[8]=='P'&&hour!=12)||(hour==12&&s[8]=='A')) hour+=12;
    string ans = s;
    ans.erase(ans.end()-2, ans.end());
    int h = hour%10;
    if (hour>=10&&hour<20) {
        ans[0]='1';
        ans[1]=h+'0';
    }
    else if (hour>=20&&hour<=23) {
        ans[0]='2';
        ans[1]=h+'0';
    }
    else if (hour==24) ans[0]=ans[1]='0';
    else {
        ans[0]='0';
        ans[1]=hour+'0';
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
