#include <iostream>
using namespace std;
int main()
{
    int N, e, f, c;
    int ans;
    cin >> N;
    while (N--)
    {
        cin >> e >> f >> c;
        ans = 0;
        e += f;
        while (e >= c)
        {
            ans += e / c;
            e = e / c + e % c;
        }
        cout << ans << endl;
    }
}