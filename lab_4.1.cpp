#include <iostream>

struct Struct1
{
    
};

struct Struct2
{
    int x;
    int y;
    int z;
};

struct Struct1pount
{

};

struct Struct2pount
{
    int* x;
    int* y;
    int* z;
};

int main()
{
    std::cout << "bool is " << sizeof(bool) << std::endl;
    std::cout << "char is " << sizeof(char) << std::endl;
    std::cout << "float is " << sizeof(float) << std::endl;
    std::cout << "short is " << sizeof(short) << std::endl;
    std::cout << "long is " << sizeof(long) << std::endl;
    std::cout << "long long is " << sizeof(long long) << std::endl;
    std::cout << "int is " << sizeof(int) << std::endl;
    std::cout << "double is " << sizeof(double) << std::endl;
    std::cout << "struct1 is " << sizeof(Struct1) << std::endl;
    std::cout << "struct2 is " << sizeof(Struct2) << std::endl;
    Struct1pount* Pointer1;
   std::cout << " pointerstruct1 is " << sizeof(Pointer1) << std::endl;
    Struct2pount* Pointer2;
    std::cout << " pointerstruct2 is " << sizeof(*Pointer2) << std::endl;

    return 0;
}