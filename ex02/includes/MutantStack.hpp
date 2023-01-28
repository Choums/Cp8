/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:30:08 by root              #+#    #+#             */
/*   Updated: 2023/01/28 17:40:47 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : std::stack<T> {
	public:
		MutantStack() : std::stack<T>() {}
		MutantStack(MutantStack<T> const& cpy) { *this = cpy; }
		virtual ~MutantStack() {}

		std::stack<T>::container_type::iterator begin() { return (std::stack<T>.c_begin()); }

		typedef typename ft::stack<T>::container_type::iterator iterator;

		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }

};