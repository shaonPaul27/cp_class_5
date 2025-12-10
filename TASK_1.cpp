#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
using ll = long long;
using veci = vector<int>;
using vecll = vector<long long>;
void solve()
{
    ll n;
    cin >> n;

    ll prevNum = 0, fibNum = 1, tempNum;
    for (ll i = 1; i < n; i++) {
        tempNum = prevNum + fibNum;
        prevNum = fibNum;
        fibNum = tempNum;
    }

    cout << fibNum;
    return ;
}


int main(void)
{
    FAST

    ll testCase = 1;
//   cin >> testCase;
    while (testCase--)
    {
        solve();
        cout <<endl;
    }
    return 0;
}

