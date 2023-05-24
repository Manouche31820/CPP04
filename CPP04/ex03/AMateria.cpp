#include "AMateria.hpp"


	AMateria::AMateria(void){
		std::cout << "Default AMateria constructor called" << std::endl;
	}

	AMateria::AMateria(std::string const & type){
		this->type = type;
		std::cout << "AMateria constructor with name called" << std::endl;
	}

	AMateria& AMateria::operator=(const AMateria& b){
		if (this != &b){
			this->type = b.type;
		}
		return (*this);
	}

	AMateria::clone(const AMateria& a){
		return(new AMateria(a));
	}

	std::string AMateria::getType(void) const{
		return(this->type);
	}

	void use(ICharacter& target){
		std::cout << "Shoot a Standard Materia" << std::endl;
	}

	AMateria::~AMateria(void){
		std::cout << "AMateria destructor called properly" << std::endl;
	}