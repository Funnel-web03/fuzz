#include <iostream>
using namespace std;
class Bankdp
{
    int years;
    float amount,rate,rtamt=0;
    public:
    Bankdp();
    Bankdp(float,int,int);
    Bankdp(float,int,float);
    void setdata();
    void show();
    void calculate();
};
Bankdp::Bankdp()
{
    amount=rate=years=0;
}
Bankdp::Bankdp(float a,int y,int r)
{
    amount=a;
    years=y;
    rate=float(r)/100;
    rtamt=amount;
    for(int i=0;i<y;i++)
    {
        rtamt=rtamt*(1+rate);
    }
    cout<<"\n On investing "<<amount<<" Rs for "<<years<<" years , you will get "<<rtamt<<" Rs in return ";
}
Bankdp::Bankdp(float a,int y,float r)
{
    amount=a;
    years=y;
    rate=r;
    rtamt=amount;
    for(int i=0;i<y;i++)
    {
        rtamt=rtamt*(1+rate);
    }
    cout<<"\n On investing "<<amount<<" Rs for "<<years<<" years , you will get "<<rtamt<<" Rs in return ";
}
void Bankdp::setdata()
{
    cout<<"\n Press 1 for float input  , Press 2 for percentage input ";
    cin>>years;
    cout<<"\n Enter Amount --> ";
    cin>>amount;
    cout<<" Enter duration in years(Complete years)-->";
    cin>>years;
    if(years==1)
    {
        cout<<" Enter rate of interest -->";
        cin>>rate;
    }
    else
    {
        cin>>rate;
        rate=float(rate)/100;
    }
}
void Bankdp::show()
{
    cout<<"\n On investing "<<amount<<" Rs for "<<years<<" years , you will get "<<rtamt<<" Rs in return ";
}
void Bankdp::calculate()
{
    rtamt=amount;
    for(int i=0;i<years;i++)
    {
        rtamt=rtamt*(1+rate);
    }
    show();
}
int main()
{
    float a,r;
    int y,rate;
    do
    {
        cout<<"\n Press 1 for float input  , Press 2 for percentage input ";
        cin>>y;
    if(y==1)
    {
        cout<<"\n Enter Amount --> ";
        cin>>a;
        cout<<" Enter duration in years(Complete years)-->";
        cin>>y;
        cout<<" Enter rate of interest -->";
        cin>>r;
        Bankdp d1(a,y,r);
    }
    else
    {
        cout<<"\n Enter Amount --> ";
        cin>>a;
        cout<<" Enter duration in years(Complete years)-->";
        cin>>y;
        cout<<" Enter rate of interest -->";
        cin>>rate;
        Bankdp d1(a,y,rate);
    }
     cout<<"\n Do you want to continue ?(press 0 to stop,press any key to continue)";
     cin>>y;
    } while (y!=0);
    
    return 0;
}