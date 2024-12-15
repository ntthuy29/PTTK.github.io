#include <iostream>
using namespace std;
int n;
int s[100];
int A[1000];
int m;
void Printf(int *s)
{
    for (int i = 1; i <= n; i++)
    {
        cout << " " << s[i];
    }
    cout << endl;
}
void nhap(int *s)
{
    for (int i = 1; i <= n; i++)
    {
        cout << "s[" << i << "]: ";
        cin >> s[i];
    }
}
void Printf(int *s, int k)
{
    for (int i = 1; i <= k - 1; i++)
    {
        //     if (s[i])
        //     {
        //         cout << A[i] << " ";
        //     }
        cout << s[i] << " ";
    }
    cout << endl;
}
bool trienvong(int *s, int k)
{
    if (k > n)
    {
        return false;
    }
    return true;
}
void tapcon(int k)
{
    if (k == m + 1)
    {
        Printf(s, k);
    }
    else
    {
        s[k] = 0;
        tapcon(k + 1);
        s[k] = 1;
        tapcon(k + 1);
    }
}
int main()
{

    cout << "nhap n m";
    cin >> n;
    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        cout << "nhap a" << i;
        cin >> A[i];
    }
    tapcon(1);
}