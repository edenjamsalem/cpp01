#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "unnecessarry_violence.h"

class HumanB
{
	private:
		std::string _name;
		Weapon *_weapon;

	public:
		HumanB(std::string name);
		HumanB(const HumanB& other);
		HumanB& operator=(const HumanB& other);
		~HumanB();

		void attack(void);
		void setWeapon(Weapon& type);
};

#endif