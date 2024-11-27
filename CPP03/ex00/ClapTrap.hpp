#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
    private:
        std::string name;
        int PV;
        int PE;
        int AD;

    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& copy);
		~ClapTrap();

        ClapTrap&   operator=(const ClapTrap& equal);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

        int     getAD() const;

};


#endif