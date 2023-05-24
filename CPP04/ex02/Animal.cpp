#include "Animal.hpp"


	Animal::Animal(void){
		std::cout << "Default Animal constructor called" << std::endl;
	}

	Animal& Animal::operator=(const Animal& b){
		if (this != &b){
			this->type = b.type;
		}
		return (*this);
	}

	Animal::Animal(const Animal& a){
		*this = a;
	}

	std::string Animal::getType(void) const{
		return(this->type);
	}

	void Animal::makeSound(void) const {
		std::cout << "Graaouu" << std::endl;
	}

	Animal::~Animal(void){
		std::cout << "Animal destructor called properly" << std::endl;
	}