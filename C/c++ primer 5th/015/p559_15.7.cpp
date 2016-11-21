#include<iostream>
#include<ostream>
class Quote
{
public:
	Quote() = default ;
	Quote(const std::string &book,double sales_price):
			bookNo(book),price(sales_price){	}
	std::string isbn() const
		{ return bookNo; }
	virtual double net_price(std::size_t n) const
		{ return n * price ;}
	virtual ~Quote() = default ;
			
private:
	std::string bookNo;
protected:
	double price = 0.0;
};
class Bulk_quote : public Quote
{
public:
	Bulk_quote() = default ;
	Bulk_quote(const std::string &book ,double p,std::size_t qty,double disc):
			Quote(book,p),min_qty(qty),discount(disc){}
			
	double net_price(std::size_t cnt) const override
	{
		if(cnt >= min_qty)
		{
			return min_qty * (1 - discount) * price + (cnt - min_qty) * price ;
		} 
		else return cnt * (1 - discount) * price ;
	}
private:
	std::size_t min_qty = 0 ;
	double discount = 0.0 ;
};
double print_total(std::ostream os,const Quote &item,size_t n)
{
	double ret = item.net_price(n);
	os << "ISBN: " << item.isbn()
	   << " # sold: " << n << " total due : " << ret << std::endl ;
	return ret; 
}
int main(void)
{
		
	return 0;
} 
