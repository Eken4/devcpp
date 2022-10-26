#include <iostream>
#include <cmath>

#include "console.hpp"

// Chaînes de caractère

void firstname()
{

    std::cout << "Entrez votre prénom" << std::endl;

    std::string firstname;
    std::cin >> firstname;

    std::cout << "Bonjour " << firstname << std::endl;
}

void fullname()
{
    std::cout << "Entrez votre nom et prénom" << std::endl;

    std::string firstname;
    std::cin >> firstname;

    std::string lastname;
    std::cin >> lastname;

    firstname[0] = toupper(firstname[0]);

    for (std::size_t i = 1; i < firstname.size(); i++)
        firstname[i] = tolower(firstname[i]);

    for (std::size_t i = 0; i < lastname.size(); i++)
        lastname[i] = toupper(lastname[i]);

    std::cout << "Bonjour " << firstname << " " << lastname << std::endl;
}

// Nombres

void mystery_number()
{
    srand(time(NULL));

    int number_to_guess = rand() % 1001;
    int number_guessed;

    std::cout << "Entrez un nombre" << std::endl;
    std::cin >> number_guessed;

    if (number_guessed == number_to_guess)
    {
        std::cout << "Exact" << std::endl;
    }
    else if (number_to_guess > number_guessed)
    {
        std::cout << "Plus" << std::endl;
    }
    else
        std::cout << "Moins" << std::endl;
}

void mystery_number_numbered_tries()
{

    srand(time(NULL));

    int number_to_guess = rand() % 1001;
    int number_guessed, nb_try = 0;

    do
    {
        std::cout << "Entrez un nombre" << std::endl;
        std::cin >> number_guessed;

        if (number_guessed == number_to_guess)
        {
            std::cout << "Exact" << std::endl;
        }
        else if (number_to_guess > number_guessed)
        {
            std::cout << "Plus" << std::endl;
        }
        else
        {
            std::cout << "Moins" << std::endl;
        }

        nb_try++;

    } while (number_guessed != number_to_guess);

    std::cout << "Félicitations, victoire en " << nb_try << " essais" << std::endl;
}

void dichotomie()
{
    std::cout << "Pensez à un nombre, et dites moi si il est plus petit ou plus grand que celui auquel je pense" << std::endl;
    std::cout << "Entrez '+' ou '-'. Je ne comprends rien d'autre." << std::endl;
    std::cout << "Entrez '=' si j'ai trouvé. Jouons." << std::endl;

    int number_guessed, nb_try = 0;
    int num_min = 0, num_max = 1000;
    std::string hint;

    do
    {
        number_guessed = floor((num_min + num_max) / 2);

        std::cout << "Est-ce que c'est " << number_guessed << " ?" << std::endl;

        std::cin >> hint;

        if (hint == "+")
        {
            num_min = number_guessed;
        }
        else if (hint == "-")
        {
            num_max = number_guessed;
        }
        else
        {
            std::cout << "Je n'ai pas compris." << std::endl;
        }
        nb_try++;

    } while (hint != "=");

    std::cout << "J'ai trouvé en " << nb_try << " essais. On recommence ?" << std::endl;
}
