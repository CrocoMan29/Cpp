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
	std::clock_t startV = clock();
	sortVec();
	std::clock_t endV = clock();
	std::clock_t startD = clock();
	sortDeque();
	std::clock_t endD = clock();
	double timeV = 1000.0 * (endV - startV) / CLOCKS_PER_SEC;
	double timeD = 1000.0 * (endD - startD) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << input.size() << " elements with std::vector : " << timeV << " us" << std::endl;
	std::cout << "Time to process a range of " << inputD.size() << " elements with std::deque : " << timeD << " us" << std::endl;

}

void PmergeMe::checkInput(char *input)
{
	std::string valid = "0123456789";
	std::string check = input;
	if (check.empty())
		throw std::runtime_error("Error: empty");
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
		this->inputD.push_back(val);
        token = std::strtok(NULL, " ");
    }
}

void PmergeMe::sortVec()
{
	std::vector<std::vector<std::pair<int, int> > > vec;
	std::vector<std::pair<int, int> > innerVec;
	int lastelement= 0;
	bool clear = true;
	// std::cout << "Before : ";
	// printVec(input);
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
	for (std::vector<std::vector<std::pair<int, int> > >::iterator it = vec.begin(); it != vec.end(); ++it)
    {
        mergeSort(*it, 0, it->size() - 1);
    }
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
	smallVec.push_back(lastelement);
	std::vector<int> sortedVec = binaryInsertionSort(largeVec, smallVec);
	std::vector<int>::iterator tt = sortedVec.begin();
	if (clear == true)
		sortedVec.erase(tt);
	std::cout << "After : ";
	// printVec(sortedVec);
}

void PmergeMe::sortDeque()
{
	std::deque<std::deque<std::pair<int, int> > > deq;
	std::deque<std::pair<int, int> > innerDeq;
	int lastelement= 0;
	bool clear = true;
	std::cout << "Before : ";
	printDeque(inputD);
    for (std::deque<int>::iterator it = inputD.begin(); it != inputD.end(); ++it)
    {
        if (it + 1 != inputD.end())
        {
            std::pair<int, int> pair = std::make_pair(*it, *(it + 1));
			if (pair.first < pair.second)
				std::swap(pair.first, pair.second);
            innerDeq.push_back(pair);
            ++it;
        }else {
			lastelement = *it;
			clear = false;
		}
    }
    deq.push_back(innerDeq);
	for (std::deque<std::deque<std::pair<int, int> > >::iterator it = deq.begin(); it != deq.end(); ++it)
    {
        mergeSortD(*it, 0, it->size() - 1);
    }
	std::deque<int> largeVec;
	std::deque<int> smallVec;
	for (std::deque<std::deque<std::pair<int, int> > >::const_iterator it = deq.begin(); it != deq.end(); ++it) {
        for (std::deque<std::pair<int, int> >::const_iterator innerIt = it->begin(); innerIt != it->end(); ++innerIt) {
            if (!it->empty())
			{
				largeVec.push_back(innerIt->first);
				smallVec.push_back(innerIt->second);
			}
        }
    }
	smallVec.push_back(lastelement);
	std::deque<int> sortedDeq = binaryInsertionSortD(largeVec, smallVec);
	std::deque<int>::iterator tt = sortedDeq.begin();
	if (clear == true)
		sortedDeq.erase(tt);
	std::cout << "After : ";
	printDeque(sortedDeq);
}

void PmergeMe::printDeque(std::deque<int> &d)
{
	for (std::deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
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

void PmergeMe::mergeSortD(std::deque<std::pair<int, int> > &deq, int l, int r)
{
	if (l < r)
    {
        int m = l + (r - l) / 2;

        mergeSortD(deq, l, m);
        mergeSortD(deq, m + 1, r);

        mergeD(deq, l, m, r);
    }
}

void PmergeMe::mergeD(std::deque<std::pair<int, int> > &deq, int l, int m, int r)
{
	int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    std::deque<std::pair<int, int> > L(n1), R(n2);

    for (i = 0; i < n1; i++)
        L[i] = deq[l + i];
    for (j = 0; j < n2; j++)
        R[j] = deq[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i].first <= R[j].first)
        {
            deq[k] = L[i];
            i++;
        }
        else
        {
            deq[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        deq[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        deq[k] = R[j];
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

std::deque<int> PmergeMe::binaryInsertionSortD(const std::deque<int> &deq1, const std::deque<int> &deq2)
{
	std::deque<int> mergedDeq = deq1;
    mergedDeq.insert(mergedDeq.end(), deq2.begin(), deq2.end());

    for (std::deque<int>::size_type i = 1; i < mergedDeq.size(); i++)
    {
        int key = mergedDeq[i];
        std::deque<int>::size_type left = 0;
        std::deque<int>::size_type right = i;
        while (left < right)
        {
            std::deque<int>::size_type mid = left + (right - left) / 2;
            if (key < mergedDeq[mid])
                right = mid;
            else
                left = mid + 1;
        }
        for (std::deque<int>::size_type j = i; j > left; j--)
        {
            mergedDeq[j] = mergedDeq[j - 1];
        }
        mergedDeq[left] = key;
    }
    return mergedDeq;
}
