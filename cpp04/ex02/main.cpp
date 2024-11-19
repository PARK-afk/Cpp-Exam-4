#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal* meta[2];

	meta[0] = new Cat();
	meta[1] = new Dog();
	std::cout << std::endl;

	for (int i = 0; i < 2; i++)
		delete meta[i];
	std::cout << std::endl;

	Cat *c1 = new Cat();
	Cat *c2 = new Cat();
	std:: cout << std::endl;

	std::cout << "Cat 1's think about " << c1->getBrain()->getIdeas() << std::endl;
	c1->getBrain()->setIdeas("chur");
	std::cout << "Cat 1's think about " << c1->getBrain()->getIdeas() << std::endl;
	std::cout << std::endl;

	*c2 = *c1;
	std::cout << "Cat 2's think about " << c2->getBrain()->getIdeas() << std::endl;
	delete c1;
	c1 = NULL;
	delete c2;
	c2 = NULL;
	return (0);
}