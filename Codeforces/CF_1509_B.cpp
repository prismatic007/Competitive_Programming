#include <bits/stdc++.h>
using namespace std; /*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
using namespace __gnu_cxx;*/

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define PI (acos(-1.0))
#define inf (1 << 30)
#define infll (1LL << 62)
#define abs(X) ((X) > 0 ? (X) : (-(X)))
#define fbo(k) find_by_order(k)    ///returns iterator to the kth largest element counting from 0
#define ook(val) order_of_key(val) ///returns the number of items in a set that are strictly smaller than val

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef set<int> si;
typedef multiset<int> msi;
typedef multiset<int>::iterator mit;
typedef map<int, int> mii;
typedef map<int, int>::iterator miit;
///typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_int_set;

///cout << fixed << setprecision(12) << ans << endl;

const int MX = 1e5 + 5;
const int MOD = 1e9 + 7;
//const int MOD = 998244353;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        vi m_ara, t_start, t_end;
        for (int i = 0; i < n; i++)
            if (str[i] == 'M')
                m_ara.pb(i);

        bool yes = true;
        if (m_ara.size() * 3 == n)
            yes = true;
        else
            yes = false;

        if (yes)
        {
            for (int i = 0; i < n; i++)
            {
                if (str[i] == 'T')
                {
                    if (t_start.size() < m_ara.size())
                        t_start.pb(i);
                    else
                        t_end.pb(i);
                }
            }

            for (int i = 0; i < m_ara.size(); i++)
            {
                if (m_ara[i] < t_start[i] || m_ara[i] > t_end[i])
                {
                    yes = false;
                    break;
                }
            }
        }

        if (yes)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}