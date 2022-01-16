#include <bits/stdc++.h>
using namespace std;

class calc {
    public:
    double add(double a, double b)
    {
        return a + b;
    }
    
    double sub(double a, double b)
    {
        return a - b;
    }
    
    double mul(double a, double b)
    {
        return a * b;
    }
    
    double divi(double a, double b)
    {
        if(b == 0)
            return INT_MIN;
        return a / b;
    }
};

int main()
{
    double a, b;
    string op;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    cout << "Enter Operation(+, -, /, *): ";
    cin >> op;
    calc c;
    if(op == "+")
        cout << c.add(a, b);
    else if(op == "-")
        cout << c.sub(a, b);
    else if(op == "*")
        cout << c.mul(a, b);
    else if(op == "/")
        cout << c.divi(a, b);
    else
        cout << "Invalid Operator.";
        
    cout << endl;
    return 0;
}
