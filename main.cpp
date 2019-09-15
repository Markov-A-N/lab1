#include <iostream>
#include <fstream>
#include "budget_class.h"

#define UNUSED(x) (void)x

int main(int argc, char *argv[])
{
	//ifstream in();
	ofstream out("result", ios::out);

	Budget ob1, ob2;

	ob1.read(std::cin);
	ob2.read(std::cin);

	//in.close();

	std::cout << "ob1:\n";
	ob1.write(std::cout);
	std::cout << "ob2:\n";
	ob2.write(std::cout);
	out << "ob1:\n";
	ob1.write(out);
	out << "ob2:\n";
	ob2.write(out);

	std::cout << "Addition:\n";
	ob1.plus(ob2).write(std::cout);
	out << "Addition:\n";
	ob1.plus(ob2).write(out);

	std::cout << "Subtraction:\n";
	ob1.minus(ob2).write(std::cout);
	out << "Subtraction:\n";
	ob1.minus(ob2).write(out);

	std::cout << "Multiplication:\n";
	ob1.multiply(ob2).write(std::cout);
	out << "Multiplication:\n";
	ob1.multiply(ob2).write(out);

	std::cout << "Division:\n";
	ob1.devide(ob2).write(std::cout);
	out << "Division:\n";
	ob1.devide(ob2).write(out);

	std::cout << "ob1 = ob2 ? ";
	if (ob1.eq(ob2)) 
		std::cout << "YES\n";
	else std::cout << "NO\n";
	out << "ob1 = ob2 ? ";
	if (ob1.eq(ob2)) 
		out << "YES\n";
	else out << "NO\n";

	std::cout << "ob1 != ob2 ? ";
	if (ob1.ne(ob2)) 
		std::cout << "YES\n";
	else std::cout << "NO\n";
	out << "ob1 != ob2 ? ";
	if (ob1.ne(ob2)) 
		out << "YES\n";
	else out << "NO\n";

	std::cout << "ob1 < ob2 ? ";
	if (ob1.lt(ob2)) 
		std::cout << "YES\n";
	else std::cout << "NO\n";
	out << "ob1 < ob2 ? ";
	if (ob1.lt(ob2)) 
		out << "YES\n";
	else out << "NO\n";

	std::cout << "ob1 > ob2 ? ";
	if (ob1.gt(ob2)) 
		std::cout << "YES\n";
	else std::cout << "NO\n";
	out << "ob1 > ob2 ? ";
	if (ob1.gt(ob2)) 
		out << "YES\n";
	else out << "NO\n";

	std::cout << "ob1 <= ob2 ? ";
	if (ob1.le(ob2)) 
		std::cout << "YES\n";
	else std::cout << "NO\n";
	out << "ob1 <= ob2 ? ";
	if (ob1.le(ob2)) 
		out << "YES\n";
	else out << "NO\n";

	std::cout << "ob1 >= ob2 ? ";
	if (ob1.ge(ob2)) 
		std::cout << "YES\n";
	else std::cout << "NO\n";
	out << "ob1 >= ob2 ? ";
	if (ob1.ge(ob2)) 
		out << "YES\n";
	else out << "NO\n";

	out.close();

	UNUSED(argc);
	UNUSED(argv);

	return 0;
}