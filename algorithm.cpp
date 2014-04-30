#include "algorithm.h"
#include "Parser.h"

#include <stdexcept>
#include <algorithm>

namespace parser
{
    algorithm<morse>::value_type algorithm<morse>::from_alpha(algorithm<morse>::key_type key)
    {
        auto map = morse::code_map;
        auto it = std::find(map.begin(), map.end(), key);
        if (it != map.end())
            return it->get_second();

        else throw std::invalid_argument("Could not find key");
    }

    algorithm<morse>::key_type algorithm<morse>::to_alpha(base_pair::value_type val)
    {
        auto map = morse::code_map;
        auto it = std::find(map.begin(), map.end(), val);
        if (it != map.end())
            return it->get_first();

        else throw std::invalid_argument("Could not find value");
    }
}
