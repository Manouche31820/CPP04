#include "Cat.hpp"

	Cat::Cat(void){
		this->type = "Cat";
		std::cout << "Cat default constructor called" << std::endl;
		this->_brain = new Brain();
	}

	Cat& Cat::operator=(const Cat& b){
		if (this != &b){
			this->type = b.type;
		}
		return (*this);
	}

	std::string Cat::getType(void){
		return(this->type);
	}

	Cat::Cat(const Cat& a):Animal(){
		*this = a;
	}

	void Cat::makeSound(void) const {
		std::cout << "Meowwwwwww" << std::endl;
	}

	Cat::~Cat(void){
		delete this->_brain;
		std::cout << "Destructor of Cat called properly" << std::endl;

	}