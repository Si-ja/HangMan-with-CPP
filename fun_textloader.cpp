#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include "tracker.h"

/// <summary>
/// Load a file with words for the game and select one word, that will have to
/// be guessed by the user.
/// </summary>
/// <param name="file_name">File Name from which the words are loaded.</param>
/// <returns>A word for guessing in a form of a string</returns>
std::string initWord(std::string file_name)
{
	// Establish how many words there are to operate for the game
	std::srand(time(0));
	int word_index;
	int words_range = 0;
	std::string output;
	std::ifstream file;
	file.open(file_name);
	if (file.is_open())
	{
		while (!file.eof())
		{
			std::getline(file, output);
			words_range++;
		}
	}
	file.close();
	word_index = std::rand() % words_range;

	// Chose a word for the game
	words_range = 0;
	bool work = true;
	file.open(file_name);
	if (file.is_open())
	{
		while (!file.eof())
		{
			std::getline(file, output);
			words_range++;
			if (words_range == word_index)
			{
				break;
			}
		}
	}

	//Convert everything to lower cases before returning the word selected
	for (int i=0; i < output.size(); i++)
	{
		output[i] = std::tolower(output[i]);
	}
	// The txt files have one extra space in the end, that we need to get rid of
	output.pop_back();

	// Return the word the rest of the game will be played with
	return output;
}