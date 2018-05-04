#include <iostream>

class Animal {
public:
	const char *name;
	int legs;

	Animal(const char *name, int legs);

	void describe();
};

Animal::Animal(const char *name_, int legs_) {
	name = name_;
	legs = legs_;
}

void Animal::describe() {
	std::cout << "Name: " << name << "\n" << "Legs: " << legs << "\n";
}

int main() {

	return 0;
}
