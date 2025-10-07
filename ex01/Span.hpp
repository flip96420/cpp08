/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 15:06:13 by pschmunk          #+#    #+#             */
/*   Updated: 2025/10/07 17:39:30 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
	private:
		unsigned int		size;
		std::vector<int>	storage;
	public:
		// Constructors
		Span();
		Span(unsigned int n);
		Span(const Span &copy);
		
		// Destructor
		~Span();

		// Operation overloads
		Span	&operator=(const Span &copy);

		// Member-functions
		void			addNumber(int num);
		void			addNumbers(size_t amount);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();

		// Exceptions
		class MaxElementsException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Already max elements stored.");
				}
		};
		
		class SpanNotFoundException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Span cannot be found.");
				}
		};
};

unsigned int	get_difference(int num1, int num2);