/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchauvot <gchauvot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:35:25 by gchauvot          #+#    #+#             */
/*   Updated: 2025/02/05 17:32:36 by gchauvot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <cstdlib>
#include <string>
#include <iostream>
#include <vector>
#include <functional>
#include <stdio.h>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string weapon;
	std::string name;
public:
	HumanB(std::string);
	~HumanB();
	void attack();
	void setWeapon(Weapon);
};






#endif