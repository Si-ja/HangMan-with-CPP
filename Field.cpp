#include <string>
#include <vector>
#include <iostream>
#include "tracker.h"


Field::Field(std::string word)
{
	this->word = word;
	for (int i = 0; i < word.length(); i++)
	{
		this->current_guesses.push_back(' ');
	}
}
void Field::set_win(bool status)
{
	this->win = status;
}
bool Field::get_win()
{
	return this->win;
}
void Field::set_mistakes()
{
	this->mistakes++;
}
int Field::get_mistakes()
{
	return this->mistakes;
}
void Field::draw_fields()
{
	for (char character : this->current_guesses)
	{
		if (character == ' ')
		{
			std::cout << " _";
		}
		else
		{
			std::cout << " " << character;
		}
	}
	std::cout << std::endl;
}
std::string Field::get_word()
{
	return this->word;
}
void Field::set_current_guesses(char letter, std::vector<int> position)
{
	for (int value :  position)
	{
		this->current_guesses[value] = letter;
	}
}
void Field::check_letter(char letter)
{
	bool letter_present = false;
	std::vector<int> letter_position;
	for (int i = 0; i < word.length(); i++)
	{
		if (word[i] == letter)
		{
			letter_present = true;
			letter_position.push_back(i);
		}
	}
	if (letter_present == true)
	{
		this->set_current_guesses(letter, letter_position);
	}
	else
	{
		this->set_mistakes();
	}
}
void Field::check_game_stats()
{
	int mistakes = this->get_mistakes();
	if (mistakes >= 6)
	{
		this->lose = true;
		return;
	}

	for (int i = 0; i < this->word.length(); i++)
	{
		this->win = true;
		if (this->word[i] != this->current_guesses[i])
		{
			this->win = false;
			return;
		}
	}
}
bool Field::get_lose()
{
	return this->lose;
}