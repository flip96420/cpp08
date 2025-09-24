/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 15:06:13 by pschmunk          #+#    #+#             */
/*   Updated: 2025/09/24 18:31:57 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

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
};

unsigned int	get_difference(int num1, int num2);