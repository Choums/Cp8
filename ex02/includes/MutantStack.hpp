/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:30:08 by root              #+#    #+#             */
/*   Updated: 2023/01/29 17:06:35 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack() : std::stack<T>() {}
		MutantStack(MutantStack<T> const& cpy) { *this = cpy; }
		virtual ~MutantStack() {}

		MutantStack<T>&	operator=(MutantStack<T> const& obj)
		{
			if (this != &obj)
				this->c = obj.c;
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		
		iterator	begin() {	return (this->c.begin()); }
		iterator	end() {	return (this->c.end()); }

};