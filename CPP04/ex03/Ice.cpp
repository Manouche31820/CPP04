	#include "Ice.hpp"

	Ice::Ice(void){
		std::cout << "Default Ice constructor called" << std::endl;
	}

	Ice::Ice(std::string const & type)this->type(type){
		std::cout << "Ice constructor with name called" << std::endl;
	}

	Ice& Ice::operator=(const Ice& b){
		if (this != &b){
			this->type = b.type;
		}
		return (*this);
	}

	Ice::clone(const Ice& a){
		return(new Ice(a));
	}

	std::string Ice::getType(void) const{
		return(this->type);
	}

	void use(ICharacter& target){
		std::cout << "* shoots an ice bolt at" << target << " *" << std::endl;
	}

	Ice::~Ice(void){
		std::cout << "Ice destructor called properly" << std::endl;
	}