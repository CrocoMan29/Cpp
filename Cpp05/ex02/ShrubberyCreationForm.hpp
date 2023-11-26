/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:21:00 by mac               #+#    #+#             */
/*   Updated: 2023/11/26 06:11:49 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm
{
    private:
        std::string _target;
    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const &rfh);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const &executor) const;
}