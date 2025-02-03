#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    string s; cin >> s;
    if(s =="N") cout << "S";
    else if(s == "NE") cout << "SW";
    else if(s == "E") cout << "W";
    else if(s == "SE") cout << "NW";
    else if(s == "S") cout << "N";
    else if(s == "SW") cout << "NE";
    else if(s == "W") cout << "E";
    else if(s == "NW") cout << "SE";
}
