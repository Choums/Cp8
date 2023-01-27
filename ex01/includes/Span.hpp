/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:14:21 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/27 22:33:07 by root             ###   ########.fr       */
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
		Span();

	public:
		class	SpanException : public std::exception {
			public:
				SpanException() throw() {};
				virtual ~SpanException() throw() {};
				virtual const char* what() const throw()
				{	"Cannot assign new value !"; }
		};
		class	SpanExceptionEmpty : public SpanException {
			public:
				SpanExceptionEmpty() throw() {};
				virtual ~SpanExceptionEmpty() throw() {};
				virtual const char* what() const throw()
				{	"Empty vector !"; }
		};
		class	SpanExceptionOne : public SpanException {
			public:
				SpanExceptionOne() throw() {};
				virtual ~SpanExceptionOne() throw() {};
				virtual const char* what() const throw()
				{	"Vector contain only one value !"; }
		};
		class	SpanExceptionNoSpan : public SpanException {
			public:
				SpanExceptionNoSpan() throw() {};
				virtual ~SpanExceptionNoSpan() throw() {};
				virtual const char* what() const throw()
				{	"No distance between values !"; }
		};
};