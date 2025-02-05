/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchauvot <gchauvot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:14:47 by gchauvot          #+#    #+#             */
/*   Updated: 2025/02/05 17:50:46 by gchauvot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	setType(&type);
}

Weapon::~Weapon()
{
}

const std::string Weapon::getType(void)
{
	return(this->type);
}
void Weapon::setType(std::string* type)
{
	this->type = *type;
}