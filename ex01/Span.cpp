/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 15:09:59 by pschmunk          #+#    #+#             */
/*   Updated: 2025/10/07 17:36:20 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Constructors
Span::Span() : size(0)
{
	std::cout	<< "Default constructor of object called." << std::endl;
}

Span::Span(unsigned int n) : size(n)
{
	std::cout	<< "Parameterized constructor of object called." << std::endl;
}

Span::Span(const Span &copy)
{
	std::cout	<< "Copy of object created through copy-constructor." << std::endl;
	*this = copy;
}


// Destructor
Span::~Span()
{
	std::cout	<< "Destructor of object called." << std::endl;
}


// Operator overloads
Span	&Span::operator=(const Span &copy)
{
	std::cout	<< "Copy of object created through an assignement-operator overload." << std::endl;
	this->size = copy.size;
	this->storage = copy.storage;
	return (*this);
}


// Member functions
void	Span::addNumber(int num)
{
	if ((this->storage.size() + 1) > this->size)
		throw MaxElementsException();
	this->storage.push_back(num);
}

void	Span::addNumbers(size_t	amount)
{
	if ((this->storage.size() + amount) > this->size)
		throw MaxElementsException();
	srand(static_cast<unsigned int>(clock()));
	for (size_t i = 0; i < amount; i++)
		this->storage.push_back(rand());
}

unsigned int	Span::longestSpan()
{
	if (this->storage.size() == 1 || this->storage.empty())
		throw SpanNotFoundException();
	return (*std::max_element(this->storage.begin(), this->storage.end())
			- *std::min_element(this->storage.begin(), this->storage.end()));
}

unsigned int	Span::shortestSpan()
{
	if (this->storage.size() == 1 || this->storage.empty())
		throw SpanNotFoundException();
	std::vector<unsigned int>	temp_vec;

	for (size_t i = 0; i < this->storage.size(); i++)
	{
		int num1 = this->storage.at(i);
		for (size_t j = i + 1; j < this->storage.size(); j++)
		{
			temp_vec.push_back(get_difference(num1, this->storage.at(j)));
		}
	}	
	return (*std::min_element(temp_vec.begin(), temp_vec.end()));
}


// Non-member functions
unsigned int	get_difference(int num1, int num2)
{
	if (num1 > num2)
		return (num1 - num2);
	else if (num2 > num1)
		return (num2 - num1);
	return (0);
}