#include <iostream>
using namespace std;
int main()
{
    string input;
    while (cin >> input)
    {
        for (int i = 0; i < input.size(); i++)
        {
            cout << char(input[i] - 7);
        }
        cout << endl;
    }
    return 0;
}