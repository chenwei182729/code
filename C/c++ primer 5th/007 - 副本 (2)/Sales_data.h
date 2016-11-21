#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>
#include<fstream>
#include<ostream>
using namespace std;
class Sales_data 
{
friend std::istream &read(istream& is,Sales_data &item); 
friend std::ostream &print(ostream& os,const Sales_data &item);
friend Sales_data add(const Sales_data &lhs,const Sales_data &rhs);
public:
	//¹¹Ôìº¯Êý 
	Sales_data()=default;
	Sales_data(const std::string &s):bookNo(s){}
	Sales_data(const std::string &s,unsigned n,double p):bookNo(s),units_sold(n),revenue(p*n){}
	Sales_data(const Sales_data& sales)
	{
		bookNo=sales.bookNo;
		units_sold=sales.units_sold;
		revenue=sales.revenue;
	}
	Sales_data(std::istream &is)
	{
		is>>bookNo;
		is>>units_sold;
		is>>revenue;
	}
	Sales_data& combine(const Sales_data &rhs);
private: 
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	std::string isbn() const;
	inline double avg_price() const { return units_sold ? revenue/units_sold:0; };
	
};
std::istream &read(istream& is,Sales_data &item); 
std::ostream &print(ostream& os,const Sales_data &item);
Sales_data add(const Sales_data &lhs,const Sales_data &rhs);
#endif

