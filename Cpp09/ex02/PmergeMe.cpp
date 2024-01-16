#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}
PmergeMe::~PmergeMe(){}
PmergeMe::PmergeMe(const PmergeMe &obj) { *this = obj; }
PmergeMe& PmergeMe::operator=(const PmergeMe &obj) {
	static_cast<void>(obj);
	return (*this);
}

void PmergeMe::run(int ac, char **av)
{
	int i = 0;

	while (++i <= ac)
		checkInput(av[i]);
}

void PmergeMe::checkInput(const char *input)
{
	std::string str = input;
	std::string valid = "0123456789";
	size_t		pos = str.find_first_not_of(valid);
	int			val;

	if (pos != std::string::npos)
		throw std::runtime_error("Error: wrong input: number");

	std::stringstream(str) >> val;
	input.push_back(val);
}
