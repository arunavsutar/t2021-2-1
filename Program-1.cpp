#include<bits/stdc++.h>
using namespace std;
class calculator
{
private:
    double a;
    double b;
public:
    calculator(double a,double b)
    {
        this->a=a;
        this->b=b;
    }
    void operate(string s)
    {
        if(s=="add")
        {
            cout<<a<<" + "<<b<<" = "<<a+b<<endl;
        }
        else if(s=="sub")
        {
            cout<<a<<" - "<<b<<" = "<<a+b<<endl;
        }
        else if(s=="mul")
        {
            cout<<a<<" * "<<b<<" = "<<a*b<<endl;
        }
        else if(s=="div")
        {
            cout<<a<<" / "<<b<<" = "<<a/b<<endl;
        }
        else{
            cout<<"Put a valid Operation to do."<<endl;
        }
    }
    
};

int main()
{
    double a;
    double b;
    string operation;
    cin>>a>>b;
    cin>>operation;
    calculator c(a,b);
    c.operate(operation);
    return 0;
}