#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    
    if(n % 2 == 0)
    {
        n--;
    }

    for(int i = 1 ; i <= n ; i++)
    {
        cout << (i * 2) - 1 << " ";
    }
    cout << endl;
    return 0;
}
