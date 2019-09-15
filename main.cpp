#include <iostream>
#include <fstream>
#include "budget_class.h"

int main(int argc, char *argv[])
{
	Budget ob1(10, 20), ob2(30, 40);
	ifstream in_stream();
	ofstream out_stream("../test");

	ob1.write(std::cout);
	ob2.write(std::cout);

	ob1.assign(ob1.plus(ob2));

	ob1.write(std::cout);
	ob2.write(std::cout);
	ob1.write(out_stream);

	
	return 0;
}