#include "Base.hpp"

int main()
{
    std::srand(static_cast<unsigned int>(std::time(NULL)));

    Base* p = generate();
    std::cout << "Identified via pointer: ";
    identify(p);
    std::cout << "Identified via reference: ";
    identify(*p);

    delete p;
    return 0;
}