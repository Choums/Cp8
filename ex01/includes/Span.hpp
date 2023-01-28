/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:14:21 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/28 11:25:03 by root             ###   ########.fr       */
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
		Span(unsigned int const& N);
		Span(Span const& cpy);
		virtual ~Span();

			/*	Methods */
		void	addNumber(int num);
		void	addNumber(std::vector<int>::const_iterator it, std::vector<int>::const_iterator ite);
		int 	shortestSpan();
		int		longestSpan();

			/*	Assignment Operator Overload */
		Span&	operator=(Span const& obj);

			/*	Accessors */
		int		getNum(unsigned int index) const;
		size_t	getSize() const;
		
	private:
		unsigned int		_N;
		std::vector<int>	_span;
		Span();

	public:
		class	SpanException : public std::exception {
			public:
				SpanException() throw() {};
				virtual ~SpanException() throw() {};
				virtual const char* what() const throw()
				{	return ("Cannot assign new value !"); }
		};
		class	SpanExceptionEmpty : public SpanException {
			public:
				SpanExceptionEmpty() throw() {};
				virtual ~SpanExceptionEmpty() throw() {};
				virtual const char* what() const throw()
				{	return ("Empty vector !"); }
		};
		class	SpanExceptionOne : public SpanException {
			public:
				SpanExceptionOne() throw() {};
				virtual ~SpanExceptionOne() throw() {};
				virtual const char* what() const throw()
				{	return ("Vector contain only one value !"); }
		};
		class	SpanExceptionNoSpan : public SpanException {
			public:
				SpanExceptionNoSpan() throw() {};
				virtual ~SpanExceptionNoSpan() throw() {};
				virtual const char* what() const throw()
				{	return ("No distance between values !"); }
		};
};

std::ostream&	operator<<(std::ostream& flux, Span const& span);