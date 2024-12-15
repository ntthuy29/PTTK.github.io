#include <iostream>
using namespace std;
int n;
int s[1000];
void Printf(int *s)
{
    for (int i = 1; i <= n; i++)
    {
        cout << " " << s[i];
    }
    cout << endl;
}
void Binary(int k)
{
    if (k == n+1)
    {
        Printf(s);
    }
    else
    {
        for (int i = 0; i <= 1; i++)
        {
            s[k] = i;
            Binary(k + 1);
        }
    }
}
int main()
{
   
    cout << "Nhap n: ";
    cin >> n;
    Binary(1);
}