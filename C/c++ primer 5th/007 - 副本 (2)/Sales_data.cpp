#include "Sales_data.h"
std::string 
Sales_data::isbn() const
{
	return this->bookNo;
}
Sales_data& 
Sales_data::combine(const Sales_data &rhs)
{
	units_sold+=rhs.units_sold;//把rhs的成员加到this对象的成员上
	revenue+=rhs.revenue;
	return *this; 
}
istream &
read(istream& is,Sales_data &item)
{
	double price=0;
	is>>item.bookNo>>item.units_sold>>price;
	item.revenue=price*item.units_sold;
	return is;
}

std::ostream &
print(ostream& os,const Sales_data &item)
{
	os<<item.isbn()<<" "<<item.units_sold<<" "
	  <<item.revenue<<" "<<item.avg_price();
	return os;
}

Sales_data 
add(const Sales_data &lhs,const Sales_data &rhs)
{
	Sales_data sum=lhs;
	sum.combine(rhs);
	return sum;
}









