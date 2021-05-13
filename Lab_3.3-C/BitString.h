//Bitstring.h
#pragma once
#include <string>
#include <iostream>
#include <sstream>

#include "Object.h"

using namespace std;

class BitString : public Object
{
private:
	long first;
	long second;

public:
	long GetFirst() const;
	long GetSecond() const;
	void SetFirst(long value);
	void SetSecond(long value);

	BitString() {};
	BitString(const BitString& obj);
	BitString(const long& first, const long& second);
	~BitString() {};

	BitString& operator = (const BitString&);
	operator std::string() const;

	friend ostream& operator << (ostream&, const BitString&);
	friend istream& operator >> (istream&, BitString&);

	BitString& operator ++();
	BitString& operator --();
	BitString operator ++(int);
	BitString operator --(int);

	friend BitString operator ^ (const BitString& a, const BitString& b);
	friend BitString operator << (const BitString& a, int n);
	friend BitString operator >> (const BitString& a, int n);
};
