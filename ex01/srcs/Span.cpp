/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:14:19 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/27 22:31:31 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

		/*	Constructors/Destrtructor */
Span::Span(unsigned int N) : _N(N)
{}

Span::Span(Span const& cpy) : _N(cpy._N), _span(cpy._span)
{}

Span::~Span()
{}

			/*	Methods */
void	Span::addNumber(int num)
{
	if (this->_span.size() >= this->_N)
		throw SpanException();
	else  this->_span.push_back(num);
}

/*
	@exception ->	S’il n’y a aucun nombre stocké
	@exception ->	juste un
	@exception ->	aucune distance ne peut être trouvée.
	@return la plus petite distance entre les nombres stockés
*/
int		Span::shortestSpan()
{
	if (!this->_span.size()) 
		throw std::exception();
	else if (this->_span.size() == 1)
		throw std::exception();

	std::sort(this->_span.begin(), this->_span.end());
	
	
	
	return (1);
}

int		Span::longestSpan()
{
	
}
			/*	Assignment Operator Overload */
Span&	Span::operator=(Span const& obj)
{
	if (this != &obj)
	{
		this->_N = obj._N;
		this->_span = obj._span;
	}
	return (*this);
}