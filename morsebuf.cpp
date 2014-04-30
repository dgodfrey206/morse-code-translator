#include "morsebuf.h"

#include <string>

using morse_int_type = morse_code_buffer<>::int_type;

template<>
morse_code_buffer<>::morse_code_buffer(const std::string& path)
{
    out.open(path, std::ios_base::out);
}

template<>
morse_int_type morse_code_buffer<>::overflow(morse_int_type c)
{
    using Morse = morse_code_buffer<>::parser_type;
    if (c == traits_type::eof())
        return traits_type::eof();

    std::string m;

    try
    {
        m = Morse::from_alpha(static_cast<char_type>(c));
    } catch(...)
    {
        return traits_type::eof();
    }

    return out.sputn(m.data(), m.size());
}
