/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchauvot <gchauvot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:35:25 by gchauvot          #+#    #+#             */
/*   Updated: 2025/02/05 14:39:04 by gchauvot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <cstdlib>
#include <string>
#include <iostream>
#include <vector>
#include <functional>
#include <stdio.h>

class Zombie
{
	private:
		std::string name;
	public:
		~Zombie();
		void announce();
		void namer(std::string);
};

Zombie* zombieHorde( int N, std::string name );



#endif