/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:14:18 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/28 00:04:29 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

int	main(void)
{
	try {
		Span tmp(static_cast<unsigned int>(5));
		// tmp.addNumber(0);
		tmp.addNumber(1);
		tmp.addNumber(323);
		tmp.addNumber(3);
		tmp.addNumber(121);
		tmp.addNumber(123);
		// tmp.addNumber(55);
		// tmp.addNumber(12);
		std::cout << tmp.longestSpan() << std::endl;
		std::cout << "-----" << std::endl;
		std::cout << tmp << std::endl;
	}
	catch(std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}