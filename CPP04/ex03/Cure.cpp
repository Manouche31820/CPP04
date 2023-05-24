	#include "Cure.hpp"

	Cure::Cure(void){
		std::cout << "Default Cure constructor called" << std::endl;
	}

	Cure::Cure(std::string const & type)this->type(type){
		std::cout << "Cure constructor with name called" << std::endl;
	}

	Cure& Cure::operator=(const Cure& b){
		if (this != &b){
			this->type = b.type;
		}
		return (*this);
	}

	Cure::clone(const Cure& a){
		return(new Cure(a));
	}

	std::string Cure::getType(void) const{
		return(this->type);
	}

	void use(ICharacter& target){
		std::cout << "* heals " << target << "'s wounds *" << std::endl;
	}

	Cure::~Cure(void){
		std::cout << "Cure destructor called properly" << std::endl;
	}