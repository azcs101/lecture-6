#include <iostream>

class Animal {
public:
	const char *name;
	int legs;

	void describe();
};

void Animal::describe() {
	std::cout << "Name: " << name << "\n" << "Legs: " << legs << "\n";
}

int main() {

	Animal a;
	a.name = "Hello\n";
	a.describe();

	return 0;
}
