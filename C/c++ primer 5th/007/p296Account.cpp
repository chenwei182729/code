#include<iostream>
using namespace std;
class Account
{
public:
    void calculate() {amount+=amount*interestRate;}
    static double rate(){return interestRate;}
    static void rate(double){};
private:
    std::string owner;
    double amount;

    static double interestRate;
    static double initRate(){ return 0.1;};
    static constexpr int period=30;
    double daily_tbl[period];
};
int
main()
{
    Account a;
    return 0;
}
