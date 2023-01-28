/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:14:18 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/28 11:24:50 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"
#include <cstdlib>

int	main(void)
{
	try {
		Span tmp(static_cast<unsigned int>(5));
		tmp.addNumber(1);
		tmp.addNumber(123);
		tmp.addNumber(3);
		tmp.addNumber(121);
		tmp.addNumber(55);
		// tmp.addNumber(12);
		std::cout << "longest span: " << tmp.longestSpan() << std::endl;
		std::cout << "shortest span: " << tmp.shortestSpan() << std::endl;
		std::cout << "-----" << std::endl;
		std::cout << tmp << std::endl;
		
		// Span ultra(static_cast<unsigned int>(11));
		// std::vector<int> temp(10);
		// // srand(time(NULL));
		// for(int i(0); i < static_cast<int>(temp.size()); i++)
		// 	temp[i] = i+1;
		// 	// temp[i] = rand() % 10000;
		// ultra.addNumber(temp.begin(), temp.end());
		// std::cout << ultra << std::endl;
		// std::cout << ultra.getSize() << std::endl;
		

	}
	catch(std::exception& e) {
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}