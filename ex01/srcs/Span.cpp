/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:14:19 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/28 11:22:38 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

		/*	Constructors/Destrtructor */
Span::Span(unsigned int const& N) : _N(N)
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

void	Span::addNumber(std::vector<int>::const_iterator it, std::vector<int>::const_iterator ite)
{
	if (std::distance(it, ite) + this->_span.size() > this->_N)
		throw SpanException();
	else
		while (it != ite)
			this->_span.push_back(*it++);
}

/*
 *	@brief	trouver la plus petite distance distance entre les nombres stockés
 *	@exception ->	S’il n’y a aucun nombre stocké
 *	@exception ->	juste un
 *	@exception ->	aucune distance ne peut être trouvée.
 *	@return	la plus petite distance entre les nombres stockés
*/
int		Span::shortestSpan()
{
	if (!this->_span.size()) {
		throw SpanExceptionEmpty(); return (0); }
	else if (this->_span.size() == 1) {
		throw SpanExceptionOne(); return (0); }
	
	std::vector<int> tmp(this->_span);
	
	std::sort(tmp.begin(), tmp.end());
	
	if (!(tmp[1] - tmp[0])) {
		throw SpanExceptionNoSpan(); return (0); }
	else return (tmp[1] - tmp[0]);
}

/*
 *	@brief	trouver la plus grande distance distance entre les nombres stockés
 *	@exception ->	S’il n’y a aucun nombre stocké
 *	@exception ->	juste un
 *	@exception ->	aucune distance ne peut être trouvée.
 *	@return	la plus petite distance entre les nombres stockés
*/
int		Span::longestSpan()
{
	if (!this->_span.size()) {
		throw SpanExceptionEmpty(); return (0); }
	else if (this->_span.size() == 1) {
		throw SpanExceptionOne(); return (0); }
	
	std::vector<int> tmp(this->_span);

	std::sort(tmp.begin(), tmp.end());
	
	int min = *std::min_element(tmp.begin(), tmp.end());
	int	max = *std::max_element(tmp.begin(), tmp.end());

	if ((max - min) == 0) {
		throw SpanExceptionNoSpan(); return (0); }
	else return (max - min);
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

int	Span::getNum(unsigned int index) const
{
	return (this->_span[index]);
}

size_t	Span::getSize() const
{
	return (this->_span.size());
}

std::ostream&	operator<<(std::ostream& flux, Span const& span)
{
	size_t	size = span.getSize();
	for (size_t i(0); i < size; i++)
		flux << span.getNum(static_cast<unsigned int>(i)) << std::endl;
	return (flux);
}