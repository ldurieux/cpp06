#include <iostream>
#include <iomanip>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "invalid arguments" << std::endl;
		return 1;
	}

	std::string arg = argv[1];

	try {
		int i_val = std::stoi(arg);

		if (i_val < 32 || i_val > 126)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(i_val) << "'" << std::endl;
		std::cout << "int: " << i_val << std::endl;
	}
	catch (...) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}

	try {
		double d_val = std::stod(arg);
		float f_val = static_cast<float>(d_val);

		std::cout << "float: " << f_val;
		if (f_val == static_cast<int>(f_val))
			std::cout << ".0";
		std::cout << "f" << std::endl;

		std::cout << "double: " << d_val;
		if (d_val == static_cast<int>(d_val))
			std::cout << ".0";
		std::cout << std::endl;
	} catch (...) {
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}

	return 0;
}
