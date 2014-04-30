#ifndef PARSER_H
#define PARSER_H

#include <utility>
#include <string>
#include <vector>

namespace parser {
    class base_pair
    {
    public:
        using pair_type  = std::pair<char, std::string>;
        using key_type   = pair_type::first_type;
        using value_type = pair_type::second_type;

        friend bool operator==(const base_pair&, key_type);
        friend bool operator==(key_type, const base_pair&);
        friend bool operator==(const value_type&, const base_pair&);
        friend bool operator==(const base_pair&, const value_type&);

        key_type get_first()
        {
            return p.first;
        }

        value_type get_second()
        {
            return p.second;
        }

        base_pair(key_type x, value_type y) : p(std::move(x), std::move(y)) { }
    private:
        pair_type p;
    };

    class morse
    {
    public:
        static std::vector<base_pair> code_map;
    };
}
#endif // PARSER_H
