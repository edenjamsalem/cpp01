#ifndef WEAPON_HPP
# define WEAPON_HPP

#include "unnecessarry_violence.h"

class Weapon
{
	private:
		std::string _type;

	public:
		Weapon();
		Weapon(const Weapon& other);
		Weapon& operator=(const Weapon& other);
		~Weapon();
		Weapon(std::string type);

		const std::string& getType(void);
		void setType(const std::string& type);
};

#endif