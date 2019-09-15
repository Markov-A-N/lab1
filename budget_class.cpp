#include <iostream>
#include <fstream>
#include "budget_class.h"

using namespace std;

Budget::Budget(double first, double second)
{
	a = (int) (first * 100 + 0.5) / 100.0;
	b = (int) (second * 100 + 0.5) / 100.0;
}

Budget::Budget()
{
	a = 0.0;
	b = 0.0;
}

Budget Budget::plus(Budget const op2) const
{
	Budget temp;

	temp.a = a + op2.a;
	temp.b = b + op2.b;

	return temp;
}

/*
Budget Budget::operator+(Budget const op2) const
{
	Budget temp;

	temp.a = a + op2.a;
	temp.b = b + op2.b;

	return temp;
}
*/

Budget Budget::assign(Budget const op2)
{
	a = op2.a;
	b = op2.b;

	return *this;
}

/*
Budget Budget::operator=(Budget const op2)
{
	a = op2.a;
	b = op2.b;

	return *this;
}
*/

Budget Budget::minus(Budget const op2) const
{
	Budget temp;

	temp.a = a - op2.a;
	temp.b = b - op2.b;

	return temp;
}

/*
Budget Budget::operator-(Budget const op2) const
{
	Budget temp;

	temp.a = a - op2.a;
	temp.b = b - op2.b;

	return temp;
}
*/

Budget Budget::multiply(Budget const &op2) const
{
	Budget temp;

	temp.a = (int) (a * op2.a * 100 + 0.5) / 100.0;
	temp.b = (int) (b * op2.b * 100 + 0.5) / 100.0;

	return temp;
}

/*
Budget Budget::operator*(Budget const &op2) const
{
	Budget temp;

	temp.a = (int) (a * op2.a * 100 + 0.5) / 100.0;
	temp.b = (int) (b * op2.b * 100 + 0.5) / 100.0;

	return temp;
}
*/

Budget Budget::devide(Budget const &op2) const
{
	Budget temp;

	temp.a = (int) (a / op2.a * 100 + 0.5) / 100.0;
	temp.b = (int) (b / op2.b * 100 + 0.5) / 100.0;

	return temp;
}

/*
Budget Budget::operator/(Budget const &op2) const
{
	Budget temp;

	temp.a = (int) (a / op2.a * 100 + 0.5) / 100.0;
	temp.b = (int) (b / op2.b * 100 + 0.5) / 100.0;

	return temp;
}
*/

bool Budget::eq(Budget const &op2) const
{
	return ((a == op2.a) && (b == op2.b));
}

/*
bool Budget::operator==(Budget const &op2) const
{
	return ((a == op2.a) && (b == op2.b)); 
}
*/

bool Budget::ne(Budget const &op2) const
{
	return ((a != op2.a) || (b != op2.b)); 
}

/*
bool Budget::operator!=(Budget const &op2) const
{
	return ((a != op2.a) || (b != op2.b)); 
}
*/

bool Budget::lt(Budget const &op2) const
{
	if (a < op2.a)
	{
		return true;
	} 
	else if (a == op2.a)
	{
		return b < op2.b;
	}
	else
	{
		return false;
	}
}

/*
bool Budget::operator<(Budget const &op2) const
{
	if (a < op2.a)
	{
		return true;
	} 
	else if (a == op2.a)
	{
		return b < op2.b;
	}
	else
	{
		return false;
	}
}
*/

bool Budget::gt(Budget const &op2) const
{
	if (a > op2.a)
	{
		return true;
	} 
	else if (a == op2.a)
	{
		return b > op2.b;
	}
	else
	{
		return false;
	}
}

/*
bool Budget::operator>(Budget const &op2) const
{
	if (a > op2.a)
	{
		return true;
	} 
	else if (a == op2.a)
	{
		return b > op2.b;
	}
	else
	{
		return false;
	}
}
*/

bool Budget::le(Budget const &op2) const
{
	if (a < op2.a)
	{
		return true;
	}
	else if (a == op2.a)
	{
		return b <= op2.b;
	}
	else
	{
		return false;
	}
}

/*
bool Budget::operator<=(Budget const &op2) const
{
	if (a < op2.a)
	{
		return true;
	}
	else if (a == op2.a)
	{
		return b <= op2.b;
	}
	else
	{
		return false;
	}
}
*/

bool Budget::ge(Budget const &op2) const
{
	if (a > op2.a)
	{
		return true;
	}
	else if (a == op2.a)
	{
		return b >= op2.b;
	}
	else
	{
		return false;
	}
}

/*
bool Budget::operator>=(Budget const &op2) const
{
	if (a > op2.a)
	{
		return true;
	}
	else if (a == op2.a)
	{
		return b >= op2.b;
	}
	else
	{
		return false;
	}
}
*/

void Budget::write(ostream &out)
{
	out.precision(2);
	out.setf(ios::fixed);
	out << a << " " << b << "\n";
	out.unsetf(ios::fixed);
}

/*
ostream &operator<<(ostream &stream, Budget const &obj)
{
	stream.precision(2);
	stream.setf(ios::fixed);
	stream << obj.a << " " << obj.b << "\n";
	stream.unsetf(ios::fixed);

	return stream;
}
*/

void Budget::read(istream &in)
{
	in >> a >> b;
}

/*
istream &operator>>(istream &stream, Budget &obj)
{
	stream >> obj.a >> obj.b;

	return stream;
}
*/