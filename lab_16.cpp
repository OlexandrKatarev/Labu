#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;

public:
    Animal(const std::string& animalName) : name(animalName) {}

    void eat() {
        std::cout << name << " eats.\n";
    }
};

class Bird : public Animal {
public:
    Bird(const std::string& birdName) : Animal(birdName) {}

    void fly() {
        std::cout << name << " flies.\n";
    }
};

class Human : public Animal {
public:
    Human(const std::string& humanName) : Animal(humanName) {}

    void speak() {
        std::cout << name << " talks.\n";
    }
};

int main() {
    Bird sparrow("sparrow");
    sparrow.eat();
    sparrow.fly();

    Human person("Mike");
    person.eat();
    person.speak();

    return 0;
}