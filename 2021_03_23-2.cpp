#include <iostream>
using namespace std;
int main()
{
    string input;
    int letters, hyphens;
    while (cin >> input)
    {
        letters = 0;
        hyphens = 0;
        for (int i = 0; i < input.size(); i++)
        {
            if ('A' <= input[i] && input[i] <= 'Z')
            {
                if ('A' <= input[i] && input[i] <= 'C')
                    cout << '2';
                if ('D' <= input[i] && input[i] <= 'F')
                    cout << '3';
                if ('G' <= input[i] && input[i] <= 'I')
                    cout << '4';
                if ('J' <= input[i] && input[i] <= 'L')
                    cout << '5';
                if ('M' <= input[i] && input[i] <= 'O')
                    cout << '6';
                if ('P' <= input[i] && input[i] <= 'S')
                    cout << '7';
                if ('T' <= input[i] && input[i] <= 'V')
                    cout << '8';
                if ('W' <= input[i] && input[i] <= 'Z')
                    cout << '9';
                letters++;
            }
            else if (input[i] == '-')
            {
                cout << '-';
                hyphens++;
            }
            else
            {
                cout << input[i];
            }
        }
        cout << " " << letters << " " << hyphens << endl;
    }
    return 0;
}