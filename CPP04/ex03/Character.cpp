#include "Character.hpp"


	Character::Character(void):this->_name("Random"){
		std::cout << "Default ICharacter constructor called" << std::endl;
	}

	Character::Character(std::string const & name){
		this->_name = name;
		if (this->item[0] == NULL)
			std::cout << "PHAP BITCH" << std::endl;
		std::cout << "ICharacter constructor with name called" << std::endl;
	}

	Character& Character::operator=(const Character& b){
		if (this != &b){
			this->type = b.type;
		}
		return (*this);
	}

	// void ICharacter::equip(AMateria* m){

	// }

	// void ICharacter::unequip(int idx){

	// }

	// void ICharacter::use(int idx, IICharacter& target){

	// }

	std::string Character::getName(void) const{
		return(this->_name);
	}

	void use(ICharacter& target){
		std::cout << "Shoot a Standard Materia" << std::endl;
	}
