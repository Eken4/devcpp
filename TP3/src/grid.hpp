#ifndef _GRID_H
#define _GRID_H

#include <iostream>
#include <vector>

#include "token.hpp"

class Grid
{
public:
    // constructor & destructor
    Grid(const int nb_lines, const int nb_columns);
    ~Grid();

    // getters
    inline int getNbLines() { return this->nb_lines; };
    inline int getNbColumns() { return this->nb_columns; };
    // setters
    // methods
    Token getToken(int line, int column) { return this->grid[line][column]; };
    void setToken(int line, int column, Token token) { this->grid[line][column] = token; };
    bool spotIsEmpty(int line, int column) { return this->getToken(line, column) == Token::empty; };
    void displayGrid();

private:
    std::vector<std::vector<Token>> grid;
    int nb_lines;
    int nb_columns;
};

#endif