#include <iostream>
#include <vector>

using namespace std;

#define forn(i, n) for (int i = 0; i < n; ++i)
#define f0rn(i, a, n) for (int i = a; i < n; ++i)

typedef long long ll;
typedef long long ll;
typedef double ld;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long > vl;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvl;

const char nl = '\n';


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int sm, sh, lh, lm, bh, bm, n;
    cin >> sh >> sm >> lh >> lm >> bh >> bm >> n;
    int sum = sh * 60 + sm + n * (lh * 60 + lm) + (n - 1) * (bh * 60 + bm);
    cout << sum / 60 << " " << sum % 60 << nl;
    return 0;
}

