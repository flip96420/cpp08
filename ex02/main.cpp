/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 18:04:23 by pschmunk          #+#    #+#             */
/*   Updated: 2025/10/01 16:01:39 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
	MutantStack<int> int_stack;
	MutantStack<int>::rev_iterator int_it = int_stack.rbegin();

	int_stack.push(1);
	int_stack.push(2);
	int_stack.push(3);
	while (int_it != int_stack.rend())
	{
		std::cout	<< "TEST: " << *int_it << std::endl;
		int_it++;
	}


	// MutantStack<std::string> str_stack;
	// MutantStack<std::string>::iterator str_it = str_stack.rbegin();

	// str_stack.push("drei");
	// str_stack.push("zwei");
	// str_stack.push("eins");
	// while (str_it != str_stack.rend())
	// {
	// 	std::cout	<< *str_it << std::endl;
	// 	str_it++;
	// }
	
	return (0);
}