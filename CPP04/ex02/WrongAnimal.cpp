#include "WrongAnimal.hpp"


	WrongAnimal::WrongAnimal(void){
		std::cout << "Default WrongAnimal constructor called" << std::endl;
	}

	WrongAnimal& WrongAnimal::operator=(const WrongAnimal& b){
		if (this != &b){
			this->type = b.type;
		}
		return (*this);
	}

	WrongAnimal::WrongAnimal(const WrongAnimal& a){
		*this = a;
	}

	std::string WrongAnimal::getType(void) const{
		return(this->type);
	}

	void WrongAnimal::makeSound(void) const {
		std::cout << "Wrongggg Graaouu" << std::endl;
	}

	WrongAnimal::~WrongAnimal(void){
		std::cout << "WrongAnimal destructor called properly" << std::endl;
	}