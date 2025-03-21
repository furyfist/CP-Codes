#include <bits/stdc++.h>
using namespace std;

void recurison(string name,int cnt,int n)
{
    if(n == 0) return;
    cout << n << " ";
    n --;
    recurison(name,cnt,n);
}

int main()
{
    string name = "furyfist";
    int cnt = 0;
    int n = 10;
    recurison(name,cnt,n);
}