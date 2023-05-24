#ifndef Character_HPP
# define Character_HPP

#include <iostream>

class Character:public ICharacter
{
	public:

	~Character(void) {}
	Character(void);
	Character(std::string const & _name);
	std::string const & getName() const;
	// virtual void equip(AMateria* m) = 0;
	// virtual void unequip(int idx) = 0;
	// virtual void use(int idx, ICharacter& target) = 0;

	private:
		AMateria _items[4];
		std::string _name;
	};

#endif