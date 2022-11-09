#include "grid.hpp"

Grid::Grid(const int nb_lines, const int nb_columns) : nb_lines(nb_lines), nb_columns(nb_columns)
{
    this->grid.resize(nb_lines, std::vector<Token>(nb_columns));
}
Grid::~Grid() {}

// getters
// setters
// methods
void Grid::displayGrid()
{
    for(std::vector<Token> line : this->grid)
    {
        for(Token token : line)
            printf(" %c", token);

        std::cout << std::endl;
    }
}
