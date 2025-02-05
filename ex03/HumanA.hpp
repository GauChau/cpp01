/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchauvot <gchauvot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:35:25 by gchauvot          #+#    #+#             */
/*   Updated: 2025/02/05 17:49:31 by gchauvot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <cstdlib>
#include <string>
#include <iostream>
#include <vector>
#include <functional>
#include <stdio.h>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string weapon;
		std::string name;
	public:
		HumanA(std::string, Weapon&);
		~HumanA();
		void attack();
};

#endif