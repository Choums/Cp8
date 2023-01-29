/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:24:22 by root              #+#    #+#             */
/*   Updated: 2023/01/29 17:03:42 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

int	main(void)
{
	MutantStack<int> tmp;

	tmp.push(1);
	tmp.push(2);
	tmp.push(5);
	
	std::cout << "size: " << tmp.size() << std::endl << "top: " << tmp.top() << "\n";
	MutantStack<int>::iterator	ite = tmp.end();
	
	for(MutantStack<int>::iterator	it = tmp.begin(); it != ite; ++it)
		std::cout << *it << std::endl;

	return (0);
}