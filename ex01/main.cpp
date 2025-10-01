/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:02:20 by pschmunk          #+#    #+#             */
/*   Updated: 2025/09/24 18:38:02 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	// Subject testcase
	std::cout	<< "#### Test1: Subject ####" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "Shortest span:\t" << sp.shortestSpan() << std::endl;
	std::cout << "Longest span:\t" << sp.longestSpan() << std::endl;


	// Error testcases
	std::cout	<< "\n#### Test2: Max range Error ####" << std::endl;
	Span sp2 = Span(999);
	try
	{
		sp2.addNumbers(10000);
		std::cout << "Shortest span:\t" << sp2.shortestSpan() << std::endl;
		std::cout << "Longest span:\t" << sp2.longestSpan() << std::endl;
	}
	catch (const char *reason)
	{
		std::cerr	<< "Error! " << reason << std::endl;
	}

	std::cout	<< "\n#### Test3: No span Error ####" << std::endl;
	Span sp3 = Span(1);
	try
	{
		sp3.addNumber(3);
		std::cout << "Shortest span:\t" << sp3.shortestSpan() << std::endl;
		std::cout << "Longest span:\t" << sp3.longestSpan() << std::endl;
	}
	catch (const char *reason)
	{
		std::cerr	<< "Error! " << reason << std::endl;
	}
	

	// Large amount of numbers testcase
	std::cout	<< "\n#### Test4: Large amount case ####" << std::endl;
	Span sp5 = Span(10000);
	try
	{
		sp5.addNumbers(10000);
		std::cout << "Shortest span:\t" << sp5.shortestSpan() << std::endl;
		std::cout << "Longest span:\t" << sp5.longestSpan() << std::endl;
	}
	catch (const char *reason)
	{
		std::cerr	<< "Error! " << reason << std::endl;
	}
	return 0;
}