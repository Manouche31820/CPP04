#include "ICharacter.hpp"

	ICharacter& ICharacter::operator=(const ICharacter& b){
		if (this != &b){
			this->type = b.type;
		}
		return (*this);
	}

	void use(ICharacter& target){
		std::cout << "Shoot a Standard Materia" << std::endl;
	}
