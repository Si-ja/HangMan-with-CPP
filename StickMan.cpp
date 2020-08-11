#include "tracker.h"
#include <iostream>

void StickMan::draw_stickman(int mistakes)
	{
		switch (mistakes)
		{
			case 0:
				this->print_noose(zero_mistakes);
				break;
			case 1:
				this->print_noose(one_mistakes);
				break;
			case 2:
				this->print_noose(two_mistakes);
				break;
			case 3:
				this->print_noose(three_mistakes);
				break;
			case 4:
				this->print_noose(four_mistakes);
				break;
			case 5:
				this->print_noose(five_mistakes);
				break;
			default:
				this->print_noose(six_mistakes);
				break;
		}
	}

void StickMan::print_noose(char array[5][5])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << array[i][j] << " ";
		}
		std::cout << std::endl;
	}
}