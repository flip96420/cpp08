/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:36:51 by pschmunk          #+#    #+#             */
/*   Updated: 2025/10/01 15:52:01 by pschmunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef std::stack<T> stack;
		typedef typename stack::container_type::iterator iterator;
		typedef typename stack::container_type::const_iterator const_iterator;
		typedef typename stack::container_type::reverse_iterator rev_iterator;
		typedef typename stack::container_type::const_reverse_iterator const_rev_iterator;

		MutantStack() : stack(){};
		MutantStack(const MutantStack &copy)
		{
			*this = copy;
		};
		MutantStack	&operator=(const MutantStack &copy)
		{
			if (copy != *this)
				this->name = copy.name;
			return (*this);
		};
		~MutantStack(){};

		// iterator
		iterator begin()
		{
			return (stack::c.begin());
		}
		iterator end()
		{
			return (stack::c.end());
		}

		// constant iterator
		const_iterator begin() const
		{
			return (stack::c.begin());
		}
		const_iterator end() const
		{
			return (stack::c.end());
		}

		// reverse iterator
		rev_iterator rbegin()
		{
			return (stack::c.rbegin());
		}
		rev_iterator rend()
		{
			return (stack::c.rend());
		}

		// constant reverse iterator
		const_rev_iterator rbegin() const
		{
			return (stack::c.rbegin());
		}
		const_rev_iterator rend() const
		{
			return (stack::c.rend());
		}
};
