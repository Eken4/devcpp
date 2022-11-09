#ifndef _PLAYER_H
#define _PLAYER_H

#include <string>

#include "token.hpp"

class Player
{
public:
    // constructor & destructor
    Player(const std::string name, const Token& token);
    ~Player();

    // getters
    inline std::string getName() { return this->name; };
    inline Token getToken() { return this->token; };

    // methods
    void play();

private:
    std::string name;
    Token token;
};

#endif