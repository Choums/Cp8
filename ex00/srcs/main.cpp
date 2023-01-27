/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:24:08 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/27 18:13:04 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

int main(void)
{
	try {
		std::vector<int> tab;
		tab.push_back(0);
		tab.push_back(1);
		tab.push_back(2);
		tab.push_back(3);
		tab.push_back(4);
		
		std::vector<int>::iterator it = easyfind(tab, 3);
		std::cout << "found elem: " << *it << std::endl;
	}
	catch (std::string& e) {
		std::cout << e << std::endl;
	}
	std::cout << "-----" << std::endl;

	try {
		std::vector<int> tab;
		tab.push_back(465);
		tab.push_back(151);
		tab.push_back(0);
		tab.push_back(61616);
		tab.push_back(111);
		
		std::vector<int>::iterator it = easyfind(tab, 4);
		std::cout << "found elem: " << *it << std::endl;
	}
	catch (std::string& e) {
		std::cout << e << std::endl;
	}

	return (0);
}