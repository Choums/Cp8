/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:14:21 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/27 19:14:59 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class	Span;

class	Span {
	public:
			/*	Constructors/Destrtructor */
		Span(unsigned int N);
		Span(Span const& cpy);
		virtual ~Span() {};

			/*	Methods */
		void	addNumber(int num);
		int 	shortestSpan();
		int		longestSpan();

			/*	Assignment Operator Overload */
		Span&	operator=(Span const& obj);

	private:
		std::vector<int>	_span;
		unsigned int		_N;
		static
		Span();

	public:
		class SpanException : public std::exception {
			public:
				SpanException() throw() {};
				virtual ~SpanException() throw() {};
				virtual const char* what() throw() const 
				{	"Cannot assign new value !" };
		};
};