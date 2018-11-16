#pragma once
#include <string>
using namespace std;

class Book
{
	string _author, _title;
	double _price;
public:
	Book();
	Book(string, string, double);
	string getTitle();
	string getAuthor();
	double getPrice();
};

