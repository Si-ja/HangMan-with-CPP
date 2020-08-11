#include <iostream>
#include <string>
#include "tracker.h"

int main()
{
    bool game_over = false;
    bool win = false;
    bool lose = false;
    char answer;
    std::string word;
    word = initWord("words.txt");
    Field field(word);
    StickMan stickman;
    while (!game_over)
    {
        system("CLS");
        stickman.draw_stickman(field.get_mistakes());
        std::cout << std::endl;
        field.draw_fields();
        std::cout << "Please enter the next letter: ";
        std::cin >> answer;
        std::cout << std::endl;
        field.check_letter(answer);
        field.check_game_stats();

        system("CLS");
        stickman.draw_stickman(field.get_mistakes());
        std::cout << std::endl;
        field.draw_fields();
        if (field.get_lose() == true)
        {
            game_over = true;
            lose = true;
            system("CLS");
            stickman.draw_stickman(field.get_mistakes());
            std::cout << std::endl;
            field.draw_fields();
            std::cout << std::endl;
            std::cout << "The word was: " << field.get_word() << std::endl;
            std::cout << "I'm sorry, but you lost." << std::endl;
            system("PAUSE");
        }
        else if (field.get_win() == true)
        {
            game_over = true;
            win = true;
            system("CLS");
            stickman.draw_stickman(field.get_mistakes());
            std::cout << std::endl;
            field.draw_fields();
            std::cout << std::endl;
            std::cout << "Congratulations, you won!" << std::endl;
            system("PAUSE");
        }
    }
    return 0;
}

