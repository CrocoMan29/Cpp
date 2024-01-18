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
	{
		// std::cout << av[i] << std::endl;
		checkInput(av[i]);

	}
	sortVec();
}

void PmergeMe::checkInput(char *input)
{
	std::string valid = "0123456789";
    char *token = std::strtok(input, " ");
    while (token != NULL)
    {
        std::string str(token);
        size_t pos = str.find_first_not_of(valid);
        if (pos != std::string::npos)
            throw std::runtime_error("Error: wrong input: number");
        int val;
        std::stringstream sstr(str);
        sstr >> val;
        this->input.push_back(val);
        token = std::strtok(NULL, " ");
    }
}

void PmergeMe::sortVec()
{
	std::vector<std::vector<std::pair<int, int> > > vec;
	std::vector<std::pair<int, int> > innerVec;
	int lastelement= 0;
	bool clear = true;
    for (std::vector<int>::iterator it = input.begin(); it != input.end(); ++it)
    {
        if (it + 1 != input.end())
        {
            std::pair<int, int> pair = std::make_pair(*it, *(it + 1));
			if (pair.first < pair.second)
				std::swap(pair.first, pair.second);
            innerVec.push_back(pair);
            ++it;
        }else {
			lastelement = *it;
			clear = false;
		}
    }
    vec.push_back(innerVec);
	printVecVec(vec);
	for (std::vector<std::vector<std::pair<int, int> > >::iterator it = vec.begin(); it != vec.end(); ++it)
    {
        mergeSort(*it, 0, it->size() - 1);
    }
	// std::cout << "last = " << lastelement << std::endl;
	std::vector<int> largeVec;
	std::vector<int> smallVec;
	for (std::vector<std::vector<std::pair<int, int> > >::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        for (std::vector<std::pair<int, int> >::const_iterator innerIt = it->begin(); innerIt != it->end(); ++innerIt) {
            if (!it->empty())
			{
				largeVec.push_back(innerIt->first);
				smallVec.push_back(innerIt->second);
			}
        }
    }
	// printVecVec(vec);
	smallVec.push_back(lastelement);
	std::vector<int> sortedVec = binaryInsertionSort(largeVec, smallVec);
	if (clear == false)
		
	printVec(sortedVec);
	// mergeSort(largeVec, 0, largeVec.size() - 1);
	// mergeSort(smallVec, 0, smallVec.size() - 1);
	// printVec(largeVec);
	// printVec(smallVec);
	// printVecVec(vec);
}

void PmergeMe::printVec(std::vector<int> &v)
{
	for (std::vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	
}

void PmergeMe::printVecVec(const std::vector<std::vector<std::pair<int, int> > > &vec)
{
	for (std::vector<std::vector<std::pair<int, int> > >::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        for (std::vector<std::pair<int, int> >::const_iterator innerIt = it->begin(); innerIt != it->end(); ++innerIt) {
            std::cout << "(" << innerIt->first << ", " << innerIt->second << ") ";
        }
        std::cout << std::endl;
    }
}

void PmergeMe::printPVec(const std::vector<std::pair<int, int> > &vec)
{
	for (std::vector<std::pair<int, int> >::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << "(" << it->first << ", " << it->second << ") ";
    }
    std::cout << std::endl;
}

void PmergeMe::mergeSort(std::vector<std::pair<int, int> >& vec, int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergeSort(vec, l, m);
        mergeSort(vec, m + 1, r);

        merge(vec, l, m, r);
    }
}

void PmergeMe::merge(std::vector<std::pair<int, int> >& vec, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    std::vector<std::pair<int, int> > L(n1), R(n2);

    for (i = 0; i < n1; i++)
        L[i] = vec[l + i];
    for (j = 0; j < n2; j++)
        R[j] = vec[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i].first <= R[j].first)
        {
            vec[k] = L[i];
            i++;
        }
        else
        {
            vec[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        vec[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        vec[k] = R[j];
        j++;
        k++;
    }
}

std::vector<int> PmergeMe::binaryInsertionSort(const std::vector<int> &vec1, const std::vector<int> &vec2)
{
	std::vector<int> mergedVec = vec1;
    mergedVec.insert(mergedVec.end(), vec2.begin(), vec2.end());

    for (std::vector<int>::size_type i = 1; i < mergedVec.size(); i++)
    {
        int key = mergedVec[i];
        std::vector<int>::size_type left = 0;
        std::vector<int>::size_type right = i;
        while (left < right)
        {
            std::vector<int>::size_type mid = left + (right - left) / 2;
            if (key < mergedVec[mid])
                right = mid;
            else
                left = mid + 1;
        }
        for (std::vector<int>::size_type j = i; j > left; j--)
        {
            mergedVec[j] = mergedVec[j - 1];
        }
        mergedVec[left] = key;
    }
    return mergedVec;
}
