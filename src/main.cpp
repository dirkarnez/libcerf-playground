#include <iostream>
#define CERF_AS_CPP
#include "cerf.h"

int main() {
    std::cout << cerf(_cerf_cmplx(1, 2));
    std::cin.get();
    return 0;
}
