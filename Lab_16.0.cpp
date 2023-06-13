#include <iostream>

class Vehicle {
public:
    virtual void start() {
        std::cout << "Запуск транспортного засобу.\n";
    }
};

class Car : public Vehicle {
public:
    void start() override {
        std::cout << "Запуск автомобіля.\n";
    }
};

class Motorcycle : public Vehicle {
public:
    void start() override {
        std::cout << "Запуск мотоцикла.\n";
    }
};

class Bus : public Vehicle {
public:
    void start() override {
        std::cout << "Запуск автобуса.\n";
    }
};

int main() {
    Vehicle* vehicle1 = new Car();
    vehicle1->start();

    Vehicle* vehicle2 = new Motorcycle();
    vehicle2->start();

    Vehicle* vehicle3 = new Bus();
    vehicle3->start();

    delete vehicle1;
    delete vehicle2;
    delete vehicle3;

    return 0;
}