/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 18:04:23 by pschmunk          #+#    #+#             */
/*   Updated: 2025/10/01 16:16:16 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
	// Int stack
	MutantStack<int> int_stack;
	int_stack.push(1);
	int_stack.push(2);
	int_stack.push(3);
	
	MutantStack<int>::iterator int_it = int_stack.begin();

	while (int_it != int_stack.end())
	{
		std::cout	<< "Int stack: " << *int_it << std::endl;
		int_it++;
	}

	// String stack
	MutantStack<std::string> str_stack;
	str_stack.push("drei");
	str_stack.push("zwei");
	str_stack.push("eins");

	MutantStack<std::string>::rev_iterator str_it = str_stack.rbegin();

	while (str_it != str_stack.rend())
	{
		std::cout	<< "String stack: " << *str_it << std::endl;
		str_it++;
	}
	
	return (0);
}