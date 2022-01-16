#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++)
        cin >> arr[i];
        
    vector<int> freq(10, 0);
    for(int i = 0 ; i < n ; i++)
    {
            
        for(int j = 1 ; j <= 9 ; j++)
        {
            if(arr[i] % j == 0)
                freq[j]++;
        }
    }
    
    for(int i = 1 ; i <= 9 ; i++)
        cout << i << " : " << freq[i] << endl;    
    
    return 0;
}
