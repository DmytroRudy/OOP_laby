#include "Product.h"
#include <iostream>;

Product::Product() : _name(""), _id(0), _price(0), _discount(0), _сategory(forAll)
{
	cout << "Default constructor from Product\n";
}

Product::Product(string name, int id, float price, float discount, Category category) :
	_name(name), _id(id), _price(price), _discount(discount), _сategory(category)
{
	cout << "Constructor with parameters from Product\n";
}

Product& Product::setName(string name)
{
	_name = name;
	return *this;
	cout << "Setter for product's name\n";
}

string Product::getName() const
{
	return _name;
	cout << "Getter for product's name\n";
}

Product& Product::setId(int id)
{
	_id = id;
	return *this;
	cout << "Setter for product's id\n";
}

int Product::getId() const
{
	return _id;
	cout << "Getter for product's id\n";
}

Product& Product::setCategory(const Category c)
{
	_сategory = c;
	return *this;
	cout << "Setter for product's category\n";
}

Category Product::getCategory() const
{
	return _сategory;
	cout << "Getter for product's category\n";
}

Product& Product::setPrice(float price)
{
	_price = price;
	return *this;
	cout << "Setter for product's price\n";
}

float Product::getFixedPrice() const
{
	return _price;
	cout << "Getter for product's price\n";
}

Product& Product::setDiscount(float discount)
{
	_discount = discount;
	return *this;
	cout << "Setter for product's discount\n";
}

float Product::getDiscount() const
{
	return _discount;
	cout << "Getter for product's discount\n";
}

bool Product::operator<(const Product& other) const
{
	return (this->_price < other._price);
}

float Product::getRealPrice() const
{
	return _price * (1 - _discount);
	cout << "Getter for product's price with dicount\n";
}