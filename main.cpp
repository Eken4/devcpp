#include <iostream>

#include "manipulation_nombres.hpp"
#include "tennis.hpp"
#include "console.hpp"

void part1()
{
    std::cout << "Manipulation de nombres" << std::endl;
    
}

void part2()
{
    std::cout << "Jeu de tennis" << std::endl;

    int player_scores[] = {0, 0};

    print_score(1, player_scores[0]);
    print_score(2, player_scores[1]);

    do
    {
        std::cout << "Entrez le joueur gagnant : 1 ou 2" << std::endl;

        int winner;

        std::cin >> winner;

        if (winner < 1 || winner > 2)
        {
            std::cerr << "Je n'ai pas compris" << std::endl;
            continue;
        }

        score(winner - 1, player_scores);

        print_score(1, player_scores[0]);
        print_score(2, player_scores[1]);

    } while (player_scores[0] != WINNER && player_scores[1] != WINNER);
}

void part3()
{
    std::cout << "Inscription dans la console et récupération des saisies" << std::endl;
    firstname();
    fullname();
}

int main()
{
    part1();
    part2();
    part3();
}