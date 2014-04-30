#ifndef ALGORITHM_H
#define ALGORITHM_H

#include "Parser.h"

namespace parser
{
    template<class Algorithm>
    class algorithm;

    template<>
    class algorithm<morse>
    {
        using value_type = base_pair::value_type;
        using key_type   = base_pair::key_type;
    public:
        static value_type from_alpha(base_pair::key_type);
        static key_type   to_alpha(base_pair::value_type);
    };
}

#endif // ALGORITHM_H
