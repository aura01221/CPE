#include <iostream>
using namespace std;

int main()
{
    int m[15][10] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 1, 1, 1, 0, 0, 1, 1, 1, 1}, {0, 1, 1, 1, 0, 0, 1, 1, 1, 0}, {0, 1, 1, 1, 0, 0, 1, 1, 0, 0}, {0, 1, 1, 1, 0, 0, 1, 0, 0, 0}, {0, 1, 1, 1, 0, 0, 0, 0, 0, 0}, {0, 1, 1, 0, 0, 0, 0, 0, 0, 0}, {0, 1, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 1, 0, 0, 0, 0, 0, 0, 0}, {1, 1, 1, 1, 0, 0, 1, 1, 1, 0}, {1, 1, 1, 1, 0, 0, 1, 1, 0, 0}, {1, 1, 1, 1, 0, 0, 1, 0, 0, 0}, {1, 1, 1, 1, 0, 0, 0, 0, 0, 0}, {1, 1, 1, 0, 0, 0, 0, 0, 0, 0}, {1, 1, 0, 0, 0, 0, 0, 0, 0, 0}};
    char note[] = {' ', 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C', 'D', 'E', 'F', 'G', 'A', 'B'};
    int t, now, next;
    string s;
    cin >> t;
    while (t--)
    {
        int ans[10] = {0};
        cin >> s;
        for (int i = 0; i < 15; i++)
        {
            if (note[i] == s[0])
                now = i;
        }
        for (int i = 0; i < 10; i++)
        {
            ans[i] = m[now][i];
        }
        for (int i = 1; i < s.size(); i++)
        {
            for (int j = 0; j < 15; j++)
            {
                if (note[j] == s[i])
                    next = j;
            }
            for (int k = 0; k < 10; k++)
            {
                if (m[now][k] == 0 && m[next][k] == 1)
                {
                    ans[k]++;
                }
            }
            now = next;
        }
        for (int l = 0; l < 10; l++)
        {
            if (l > 0)
                cout << " ";
            cout << ans[l];
        }
        cout << endl;
    }
    return 0;
}