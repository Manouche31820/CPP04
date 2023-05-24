#include "WrongCat.hpp"

	WrongCat::WrongCat(void){
		this->type = "WrongCat";
		std::cout << "WrongCat default constructor called" << std::endl;
	}

	WrongCat& WrongCat::operator=(const WrongCat& b){
		if (this != &b){
			this->type = b.type;
		}
		return (*this);
	}

	std::string WrongCat::getType(void){
		return(this->type);
	}

	WrongCat::WrongCat(const WrongCat& a):WrongAnimal(){
		*this = a;
	}

	void WrongCat::makeSound(void) const {
		std::cout << "Wrongggg  Meowwwwwww" << std::endl;
	}

	WrongCat::~WrongCat(void){
		std::cout << "Destructor of WrongCat called properly" << std::endl;
	}