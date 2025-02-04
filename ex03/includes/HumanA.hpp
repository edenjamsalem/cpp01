#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "unnecessarry_violence.h"

class HumanA
{
	private:
		std::string _name;
		Weapon *_weapon;

	public:
		HumanA(std::string name, Weapon& weapon);
		HumanA(const HumanA& other);
		HumanA& operator=(const HumanA& other);
		~HumanA();

		void attack(void);
};

#endif