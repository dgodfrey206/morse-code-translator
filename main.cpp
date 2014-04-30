#include <iostream>
#include "Parser.h"
#include "algorithm.h"
#include "morsebuf.h"

int main()
{
    morse_code_buffer<> mcb("out.txt");
    std::ostream os(&mcb);
    os << 'A';
}
