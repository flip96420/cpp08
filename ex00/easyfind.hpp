/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 13:15:40 by pschmunk          #+#    #+#             */
/*   Updated: 2025/10/07 17:21:30 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <iterator>
# include <exception>
# include <algorithm>

class NotFoundException : public std::exception
{
	public:
		const char *what() const throw()
		{
			return ("Number not found.");
		}
};

template <typename T>
typename T::iterator easyfind(T &nums, int num)
{
	typename T::iterator	it;
	it = find(nums.begin(), nums.end(), num);
	if (it == nums.end())
		throw NotFoundException();
	return (it);
};

template <typename T>
typename T::const_iterator easyfind(const T &nums, int num)
{
	typename T::const_iterator	it;
	it = find(nums.begin(), nums.end(), num);
	if (it == nums.end())
		throw NotFoundException();
	return (it);
};

#endif