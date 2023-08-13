/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 23:09:19 by yismaail          #+#    #+#             */
/*   Updated: 2023/08/13 05:55:46 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
	Harl harl;

	harl.complain("DEBUG");
	harl.complain("debug");
	harl.complain("INFO");
	harl.complain("info");
	harl.complain("WARNING");
	harl.complain("warning");
	harl.complain("ERROR");
	harl.complain("error");
	// std::cout << "i'am yassir" << std::endl;
}