/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:14:19 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/27 23:40:33 by root             ###   ########.fr       */
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
	if (!this->_span.size()) {
		throw SpanExceptionEmpty(); return (0); }
	else if (this->_span.size() == 1) {
		throw SpanExceptionOne(); return (0); }
	
	std::sort(this->_span.begin(), this->_span.end());
	if (!(this->_span[1] - this->_span[0])) {
		throw SpanExceptionNoSpan(); return (0); }
	else return (this->_span[1] - this->_span[0]);
}

int		Span::longestSpan()
{
	if (!this->_span.size()) {
		throw SpanExceptionEmpty(); return (0); }
	else if (this->_span.size() == 1) {
		throw SpanExceptionOne(); return (0); }

	std::sort(this->_span.begin(), this->_span.end());
	std::cout << "end: " << *(this->_span.end()) << " | beg: " << *(this->_span.begin()) << "=> " << *(this->_span.end()) - *(this->_span.begin()) << std::endl;
	
	if (!(*(this->_span.end()) - *(this->_span.begin()))) {
		throw SpanExceptionNoSpan(); return (0); }
	else return (*(this->_span.end()) - *(this->_span.begin()));
	
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