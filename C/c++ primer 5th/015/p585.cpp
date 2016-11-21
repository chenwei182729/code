#include<iostream>
#include<ostream>
#include<memory>
#include<set>
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
			return cnt * (1 - discount) * price ;
		else return cnt * price ;
	}
private:
	std::size_t min_qty = 0 ;
	double discount = 0.0 ;
};

double print_total(std::ostream &os,const Quote &item,size_t n)
{
	double ret = item.net_price(n);
	os << "ISBN: " << item.isbn()
	   << " # sold: " << n << " total due : " << ret << std::endl ;
	return ret; 
}

class Basket
{
public:
	void add_item(const std::shared_ptr<Quote> &sale)
		{	items.insert(sale);		}
	double total_receipt(std::ostream &os) const
	{
		double sum = 0.0 ;
		for(auto iter = items.cbegin();
				 iter != items.cend();
				 iter = items.upper_bound(*iter))
		{
			sum += print_total(os,**iter,items.count(*iter));
		}	 
		os << "Total Sales: " << sum << std::endl ;
		return sum ;	
	}
private:
	static bool compare(const std::shared_ptr<Quote> &lhs,
						const std::shared_ptr<Quote> &rhs)
	{	return lhs->isbn() < rhs->isbn();	}
	std::multiset<std::shared_ptr<Quote>,decltype(compare)*>
		items{compare};
		
}; 
int main(void)
{

	return 0;
} 
