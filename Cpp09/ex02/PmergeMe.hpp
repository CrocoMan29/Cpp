/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 04:37:27 by yismaail          #+#    #+#             */
/*   Updated: 2024/01/20 21:17:32 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>
#include <sstream>
#include <string>
#include <ctime>

class PmergeMe{
	private:
		std::vector<int>vec;
		std::vector<int>input;
		std::deque<int>inputD;
		std::deque<int>deque;
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &obj);
		PmergeMe &operator=(const PmergeMe &obj);
		~PmergeMe();
		void run(int ac, char **av);
		void checkInput(char *input);
		void sortVec();
		void sortDeque();
		void printDeque(std::deque<int> &d);
		void printVec(std::vector<int> &v);
		void printVecVec(const std::vector<std::vector<std::pair<int, int> > >& vec);
		void printPVec(const std::vector<std::pair<int, int> >& vec);
		void mergeSort(std::vector<std::pair<int, int> >& vec, int l, int r);
		void merge(std::vector<std::pair<int, int> >& vec, int l, int m, int r);
		void mergeSortD(std::deque<std::pair<int, int> >& deq, int l, int r);
		void mergeD(std::deque<std::pair<int, int> >& deq, int l, int m, int r);
		std::vector<int> binaryInsertionSort(const std::vector<int>& vec1, const std::vector<int>& vec2);
		std::deque<int> binaryInsertionSortD(const std::deque<int>& deq1, const std::deque<int>& deq2);
};

#endif

