#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main()
{
const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// const WrongAnimal* k = new WrongCat();
Cat Chatte;
Dog iench;

// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// std::cout << k->getType() << " " << std::endl;
Chatte.makeSound(); //will output the cat sound!
iench.makeSound();
// k->makeSound();
meta->makeSound();
// delete meta;
// delete j;
// delete i;
// delete k;

return 0;
}