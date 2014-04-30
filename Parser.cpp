#include "Parser.h"
#include <algorithm>
#include <stdexcept>

namespace parser {
    std::vector<base_pair> morse::code_map {{'A', ".-"}};

    bool operator==(const base_pair& lhs, base_pair::key_type c)
    {
        return lhs.p.first == c;
    }

    bool operator==(base_pair::key_type c, const base_pair& rhs)
    {
        return (rhs == c);
    }

    bool operator==(const base_pair& lhs, const base_pair::value_type& str)
    {
        return lhs.p.second == str;
    }

    bool operator==(const base_pair::value_type& str, const base_pair& rhs)
    {
        return (rhs == str);
    }
}
