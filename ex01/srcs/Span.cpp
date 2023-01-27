/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:14:19 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/27 19:34:29 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span(unsigned int N) : _N(N)
{}

Span::Span(Span const& cpy) : _N(cpy._N), _span(cpy._span)
{}

Span::~Span()
{}

void	Span::addNumber(int num)
{
	if (this->_span.size() >= this->_N)
		throw SpanException();
	else  this->_span.push_back(num);
}

int		Span::shortestSpan()
{

}

int		Span::longestSpan()
{
	
}