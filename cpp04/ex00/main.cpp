#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	const WrongAnimal* wrong = new WrongCat();

	std::cout << std::endl;
	std::cout << i->getType() << std::endl;
	i->makeSound();
	std::cout << j->getType() << std::endl;
	j->makeSound();
	std::cout << meta->getType() << std::endl;
	meta->makeSound();
	std::cout << std::endl;
	
	std::cout << wrong->getType() << std::endl;
	wrong->makeSound();

	std::cout << std::endl;
	delete meta;
	meta = NULL;
	std::cout << std::endl;
	delete j;
	j = NULL;
	std::cout << std::endl;
	delete i;
	i = NULL;
	std::cout << std::endl;
	delete wrong;
	wrong = NULL;
	return 0;
}
