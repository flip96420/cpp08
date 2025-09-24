/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 13:15:40 by pschmunk          #+#    #+#             */
/*   Updated: 2025/09/24 14:02:11 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <iterator>
# include <algorithm>

template <typename T>
typename T::iterator easyfind(T &nums, int num)
{
	typename T::iterator	it;
	it = find(nums.begin(), nums.end(), num);
	if (it == nums.end())
		throw("Number not found.");
	return (it);
};

#endif