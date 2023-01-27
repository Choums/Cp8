/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:02:49 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/27 18:10:10 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>

template<typename T>
typename T::iterator	easyfind(T& tab, int elem)
{
	typename T::iterator	it;
	typename T::iterator	ite = tab.end();
	
	for(it = tab.begin(); it != ite; it++)
		if (*it == elem)
			return (it);
	throw std::string("Elem not found !");
}