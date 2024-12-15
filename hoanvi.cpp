#include <iostream>
using namespace std;
// hoan vi la: có hàm triển vọng, với si..k thì si sẽ khác sk với mọi i
int s[100];
int n;

bool trienvong(int *s, int k)
{
    for (int i = 1; i <= k-1; i++)
    {//tôi bị nhầm chỗ này huhu, vì so sánh với sk nên chỉ chạy tới k-1 thoi, nếu chạy tới k thì hàm này luôn sai rồi 
        if (s[i] == s[k])
        {
            return false;
        }
    }
    return true;
}
void Printf(int *s)
{
    for (int i = 1; i <= n; i++)
    {
        cout << " " << s[i];
    }
    cout << endl;
}
void hoanvi(int k)
{
    if (k == n+1)
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
                hoanvi(k + 1);
            }             
        }
    }
}
int main()
{
    cout << "nhap n: ";
    cin >> n;
    hoanvi(1);
}