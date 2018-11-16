#include "pch.h"
#include "Book.h"

Book::Book() { }

Book::Book(string title, string author, double price)
{
	_title = title;
	_author = author;
	_price = price;
}

string Book::getTitle()
{
	return _title;
}

string Book::getAuthor()
{
	return _author;
}

double Book::getPrice()
{
	return _price;
}
