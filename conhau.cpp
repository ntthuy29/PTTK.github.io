#include <iostream>
using namespace std;
int n, s[100];
#include <cmath>
bool trienvong(int *s, int k)
{
    for (int i = 1; i <= k - 1; i++)
    {
        if (s[k] == s[i] || abs(i - k) == abs(s[i] - s[k]))
        {
            return false;
        }
    }
}
void Printf(int *s)
{
    for (int i = 1; i <= n; i++)
    {
        cout << " " << s[i];
    }
    cout << endl;
}
void xephau(int k)
{
    if (k == n + 1)
    {
        Printf(s);
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            s[k] = i;
            if (trienvong(s, k))
            {
                xephau(k + 1);
            }
        }
    }
}
int main()
{
    cout << "n: ";
    cin >> n;
    xephau(1);
}