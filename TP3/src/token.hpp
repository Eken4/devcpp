#ifndef _TOKEN_H
#define _TOKEN_H

enum Token 
{
    empty = ' ',
    cross = 'X',
    circle = 'O'
};

// std::ostream& operator << (std::ostream& out, const Token& token)
// {
//    out << static_cast<std::underlying_type<Token>::type>(token);
//    return out;
// }

#endif //_TOKEN_H