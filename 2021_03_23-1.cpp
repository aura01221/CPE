#include <iostream>
using namespace std;
int main()
{
    int num, M, D, ans;
    int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string week[] = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        ans = 0;
        cin >> M >> D;
        for (int j = 1; j < M; j++)
        {
            ans += month[j - 1];
        }
        ans += D;
        cout << week[ans % 7] << endl;
    }
    return 0;
}