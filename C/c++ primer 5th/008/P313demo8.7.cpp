/*
** 8.7:修改上一节的书店程序，将结果保存到一个文件总。将输出文件名作为第二个参数
**传递个main参数
** 8.7 修改上一题的程序，将结果追加到给定的文件末尾。对同一个输出文件，
** 云溪程序至少两次，检查数据是否得以保留 
*/
#include <iostream>
#include <fstream>
using namespace std;
//Sales_data类的定义 
class Sales_data {
friend Sales_data add(const Sales_data&, const Sales_data&);
friend std::ostream &print(std::ostream&, const Sales_data&);
friend std::istream &read(std::istream&, Sales_data&);
public:
	// constructors
	Sales_data(): units_sold(0), revenue(0.0) { }
	Sales_data(const std::string &s): 
	           bookNo(s), units_sold(0), revenue(0.0) { }
	Sales_data(const std::string &s, unsigned n, double p):
	           bookNo(s), units_sold(n), revenue(p*n) { }
	Sales_data(std::istream &);

	// operations on Sales_data objects
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
private:
	std::string bookNo;
	unsigned units_sold;
	double revenue;
};

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

inline 
bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs)
{
	return lhs.isbn() < rhs.isbn();
}
Sales_data::Sales_data(std::istream &is) 
{
	// read will read a transaction from is into this object
	read(is, *this);
}

double 
Sales_data::avg_price() const {
	if (units_sold)
		return revenue/units_sold;
	else
		return 0;
}

// add the value of the given Sales_data into this object
Sales_data& 
Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold; // add the members of rhs into 
	revenue += rhs.revenue;       // the members of ``this'' object
	return *this; // return the object on which the function was called
}

Sales_data 
add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;  // copy data members from lhs into sum
	sum.combine(rhs);      // add data members from rhs into sum
	return sum;
}

// transactions contain ISBN, number of copies sold, and sales price
istream&
read(istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}
ostream&
print(ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " " 
	   << item.revenue << " " << item.avg_price();
	return os;
}
//具体实现
 
int main(int argc, char** argv) 
{
	Sales_data total;
	//
	ifstream input("book_sales");
	ofstream output("book_sales.out",ofstream::app) ;
	if(read(input,total))
	{
		Sales_data trans;
		while(read(input,trans))
		{
			if(total.isbn()==trans.isbn())
				total.combine(trans);
			else
			{
				print(output,total)<<endl;
				total=trans;
			}
		}
		print(output,total)<<endl;
	}
	else
	{
		output<<"No data?!"<<endl; 
	}
	return 0;
}
