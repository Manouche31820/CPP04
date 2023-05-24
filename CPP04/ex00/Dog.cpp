#include "Dog.hpp"

	Dog::Dog(void){
		this->type = "Dog";
		std::cout << "Dog default constructor called" << std::endl;
	}

	Dog& Dog::operator=(const Dog& b){
		if (this != &b){
			this->type = b.type;
		}
		return (*this);
	}

	std::string Dog::getType(void){
		return(this->type);
	}

	Dog::Dog(const Dog& a):Animal(){
		*this = a;
	}

	void Dog::makeSound(void) const {
		std::cout << "Woof" << std::endl;
	}

	Dog::~Dog(void){
		std::cout << "Destructor of Dog called properly" << std::endl;
	}