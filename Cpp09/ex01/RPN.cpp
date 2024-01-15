/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:53:43 by yismaail          #+#    #+#             */
/*   Updated: 2024/01/12 19:49:01 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(const RPN &obj)
{
	*this = obj;
}

RPN &RPN::operator=(const RPN &obj)
{
	if (this != &obj)
	{
		this->stack = obj.stack;
	}
	return (*this);
}

RPN::~RPN(){}

void RPN::run(const char *av)
{
	std::string srpn = av;
	std::istringstream iss(srpn);
    std::string token;
	if (srpn.empty())
		throw std::runtime_error("ERROR: argument is empty");
    while (iss >> token) {
        if (isdigit(token[0]) || (token.size() > 1 && isdigit(token[1]))) {
            stack.push(atoi(token.c_str()));
        } else {
			if (stack.size() < 2)
				throw std::runtime_error("ERROR: we cannot pop anything from stack");
            int operand2 = stack.top();
            stack.pop();
            int operand1 = stack.top();
            stack.pop();

            if (token == "+") {
                stack.push(operand1 + operand2);
            } else if (token == "-") {
                stack.push(operand1 - operand2);
            } else if (token == "*") {
                stack.push(operand1 * operand2);
            } else if (token == "/") {
				if (operand2 == 0)
					throw std::runtime_error("ERROR: operand2 equal '0'");
                stack.push(operand1 / operand2);
            } else
                throw std::runtime_error("error : unkonw operator");
        }
    }
	// printStack();
    std::cout<< "result: " << stack.top() << std::endl;
}

void RPN::checkInput(const char *av)
{
	std::string string = av;
	std::string check = "0123456789+-*/ ";
	size_t pos = string.find_first_not_of(check);
	if (pos != std::string::npos)
		throw std::runtime_error("ERROR: invalid character");
	char* str = strdup(av);
    char* token = std::strtok(str, " ");
	// bool lastWasOperator = false;
    while (token != NULL) {
		std::string s = token;
		if (s.size() != 1)
		{
			std::cout << "size of " << s  << ": "<< s.size() << std::endl;
			throw std::runtime_error("error: size");
		}
		// if (s == "+" || s == "-" || s == "*" || s == "/"){
		// 	if (lastWasOperator)
		// 		throw std::runtime_error("error: two operators in a row");
		// 	lastWasOperator = true;
		// } else
		// 	lastWasOperator = false;
        // std::cout << token << '\n';
        token = std::strtok(NULL, " ");
    }
    free(str); 
}

void RPN::printStack()
{
	std::stack<int> temp = this->stack;
	while (!temp.empty()) {
	    std::cout << temp.top() << ' ';
	    temp.pop();
	}
	std::cout << '\n';
}
