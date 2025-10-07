/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 13:24:52 by pschmunk          #+#    #+#             */
/*   Updated: 2025/10/07 17:18:53 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>

int main(void)
{
	// List
	std::cout	<< "#### Test 1: List ####" << std::endl;
	
	std::list<int>				lst;
	std::list<int>::iterator	it_lst;

	lst.push_back(5);
	lst.push_back(2);
	lst.push_back(2);
	lst.push_back(2);
	lst.push_back(4);
	lst.push_back(10);
	try
	{
		it_lst = easyfind(lst, 9);
		std::cout	<< "Number " << *it_lst << " found." << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "Error! " << e.what() << std::endl;
	}

	
	// Vector
	std::cout	<< "\n#### Test 2: Vector ####" << std::endl;

	std::vector<int>			vec;
	std::vector<int>::iterator	it_vec;

	vec.push_back(34);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(65);
	vec.push_back(98);
	vec.push_back(5);
	vec.push_back(77);
	try
	{
		it_vec = easyfind(vec, 98);
		std::cout	<< "Number " << *it_vec << " found." << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "Error! " << e.what() << std::endl;
	}

	// Const
	std::cout	<< "\n#### Test 3: Const ####" << std::endl;
	int temp3[] = {10, 20, 30};
	const std::vector<int> constVec(temp3, temp3 + 3);
	std::vector<int>::const_iterator it_const;
	try
	{
		it_const = easyfind(constVec, 20);
		std::cout	<< "Number " << *it_const << " found." << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "Error! " << e.what() << std::endl;
	}
	
	return (0);
}