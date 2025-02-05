/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchauvot <gchauvot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:35:25 by gchauvot          #+#    #+#             */
/*   Updated: 2025/02/05 17:51:27 by gchauvot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <cstdlib>
#include <string>
#include <iostream>
#include <vector>
#include <functional>
#include <stdio.h>

class Weapon
{
private:
	std::string type;
public:
	Weapon(std::string);
	~Weapon();

	const std::string getType();
	void setType(std::string);
};


#endif