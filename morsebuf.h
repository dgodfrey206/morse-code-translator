#ifndef MORSEBUF_H
#define MORSEBUF_H

#include "Parser.h"
#include "algorithm.h"

#include <streambuf>
#include <string>
#include <fstream>

template<class Morse = parser::algorithm<parser::morse>>
class morse_code_buffer : public std::streambuf
{
public:
    typedef Morse parser_type;
    morse_code_buffer(const std::string&);
    int_type overflow(int_type);
private:
    std::filebuf out;
};

#endif // MORSEBUF_H
