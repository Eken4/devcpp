#include <iostream>

#include "grid.hpp"
#include "tictactoe.hpp"
#include "connect4.hpp"

int main()
{
    int gamePick = 0;
    Tictactoe morpion = Tictactoe();
    //Connect4 puissance4 = Connect4();
    while (true)
    {
        std::cout << "A quel jeu voulez-vous jouer ?" << std::endl;
        std::cout << "1 - Morpion" << std::endl;
        // std::cout<<"2 - Puissance 4"<<std::endl;
        std::cin >> gamePick;
        switch (gamePick)
        {
        case '1':
            morpion.start();
            break;
        case '2':
            // puissance4.start();
            break;
        default:
            std::cout << "Je n'ai pas compris" << std::endl;
            break;
        }
    }
}