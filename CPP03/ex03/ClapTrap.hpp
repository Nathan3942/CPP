#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        int PV;
        int PE;
        int AD;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& copy);
		virtual ~ClapTrap();

        ClapTrap&   operator=(const ClapTrap& equal);

		int		getAD() const;

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

};


#endif