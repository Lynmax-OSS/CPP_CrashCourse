#include "Array.hpp"

int	main()
{
    // default constructor
    Array<int> a;
    std::cout << "a.size() = " << a.size() << std::endl;

    // sized constructor + default-init check
    Array<int> b(5);
    std::cout << "b.size() = " << b.size() << std::endl;
    for (unsigned int i = 0; i < b.size(); i++)
        std::cout << "b[" << i << "] = " << b[i] << std::endl; // should be 0s

    // fill it
    for (unsigned int i = 0; i < b.size(); i++)
        b[i] = i * 10;

    // copy constructor — deep copy check
    Array<int> c(b);
    c[0] = 999;
    std::cout << "b[0] = " << b[0] << ", c[0] = " << c[0] << std::endl; // must differ

    // assignment operator — deep copy check
    Array<int> d;
    d = b;
    d[1] = 888;
    std::cout << "b[1] = " << b[1] << ", d[1] = " << d[1] << std::endl; // must differ

    // self-assignment
    d = d;
    std::cout << "self-assign ok, d.size() = " << d.size() << std::endl;

    // out-of-bounds exception
    try {
        std::cout << b[100] << std::endl;
    } catch (std::exception &e) {
        std::cout << "caught exception on out-of-bounds" << std::endl;
    }

    return 0;
}