/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:56:00 by yismaail          #+#    #+#             */
/*   Updated: 2023/11/11 15:01:41 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat
{
    private:
        std::string const _name;
        int _grade;
    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const &src);
        ~Bureaucrat();
        Bureaucrat &operator=(Bureaucrat const &rhs);
        std::string const getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            virtual const char* what() const throw();
        };
        
};
std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);