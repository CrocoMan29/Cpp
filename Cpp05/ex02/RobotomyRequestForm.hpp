/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:36:57 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/01 09:38:47 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private:
		std::string _target;
		RobotomyRequestForm();
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm &rfh);
		RobotomyRequestForm &operator=(RobotomyRequestForm &obj);
		~RobotomyRequestForm();
		void execute(Bureaucrat const &executor) const;
		std::string getTarget() const;
};