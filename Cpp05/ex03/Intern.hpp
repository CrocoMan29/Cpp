/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yassirismaaili8@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:54:24 by yismaail          #+#    #+#             */
/*   Updated: 2023/12/01 16:58:06 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class Intern {
	public:
		Intern();
		Intern(Intern const &rfh);
		~Intern();
		Intern &operator=(Intern const &obj);
		AForm *makeForm(std::string name, std::string target);
};