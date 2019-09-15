#ifndef BUDGET_CLASS_H    
#define BUDGET_CLASS_H 1

using namespace std;

class Budget
{
	double a, b;
public:
	Budget(double first, double second);
	Budget();
	Budget plus(Budget const op2) const;
	//Budget operator+(Budget const op2) const;
	Budget assign(Budget const op2);
	//Budget operator=(Budget const op2);
	Budget minus(Budget const op2) const;
	//Budget operator-(Budget const op2) const;
	Budget multiply(Budget const &op2) const;
	//Budget operator*(Budget const &op2) const;
	Budget devide(Budget const &op2) const;
	//Budget operator/(Budget const &op2) const;
	bool eq(Budget const &op2) const;
	//bool operator==(Budget const &op2) const;
	bool ne(Budget const &op2) const;
	//bool operator!=(Budget const &op2) const;
	bool lt(Budget const &op2) const;
	//bool operator<(Budget const &op2) const;
	bool gt(Budget const &op2) const;
	//bool operator>(Budget const &op2) const;
	bool le(Budget const &op2) const;
	//bool operator<=(Budget const &op2) const;
	bool ge(Budget const &op2) const;
	//bool operator>=(Budget const &op2) const;
	void write(ostream &out);
	//friend ostream &operator<<(ostream &stream, Budget const &obj);
	void read(istream &in);
	//friend istream &operator>>(istream &stream, Budget &obj);
};

#endif // BUDGET_CLASS_H