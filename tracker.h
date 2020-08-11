#pragma once
#include <string>
#include <vector>

std::string initWord(std::string file_name);
class Field
{
	private:
		bool win = false;
		bool lose = false;
		int mistakes = 0;
		std::string word;
		std::vector<char> current_guesses;
	public:
		Field(std::string word);
		void set_win(bool status);
		bool get_win();
		void set_mistakes();
		int get_mistakes();
		void set_current_guesses(char letter, std::vector<int>);
		std::string get_word();
		void draw_fields();
		void check_letter(char letter);

		void check_game_stats();
		bool get_lose();
};

class StickMan
{
	private:
		char zero_mistakes[5][5] = {
			{'|', '-', '-', '-', '-'},
			{'|', ' ', ' ', '|', ' '},
			{'|', ' ', ' ', ' ', ' '},
			{'|', ' ', ' ', ' ', ' '},
			{'|', ' ', ' ', ' ', ' '}
		};
		char one_mistakes[5][5] = {
			{'|', '-', '-', '-', '-'},
			{'|', ' ', ' ', '|', ' '},
			{'|', ' ', ' ', 'O', ' '},
			{'|', ' ', ' ', ' ', ' '},
			{'|', ' ', ' ', ' ', ' '}
		};
		char two_mistakes[5][5] = {
			{'|', '-', '-', '-', '-'},
			{'|', ' ', ' ', '|', ' '},
			{'|', ' ', ' ', 'O', ' '},
			{'|', ' ', ' ', '|', ' '},
			{'|', ' ', ' ', '-', ' '}
		};
		char three_mistakes[5][5] = {
			{'|', '-', '-', '-', '-'},
			{'|', ' ', ' ', '|', ' '},
			{'|', ' ', ' ', 'O', ' '},
			{'|', ' ', '/', '|', ' '},
			{'|', ' ', ' ', '-', ' '}
		};
		char four_mistakes[5][5] = {
			{'|', '-', '-', '-', '-'},
			{'|', ' ', ' ', '|', ' '},
			{'|', ' ', ' ', 'O', ' '},
			{'|', ' ', '/', '|', '\\'},
			{'|', ' ', ' ', '-', ' '}
		};
		char five_mistakes[5][5] = {
			{'|', '-', '-', '-', '-'},
			{'|', ' ', ' ', '|', ' '},
			{'|', ' ', ' ', 'O', ' '},
			{'|', ' ', '/', '|', '\\'},
			{'|', ' ', '/', '-', ' '}
		};
		char six_mistakes[5][5] = {
			{'|', '-', '-', '-', '-'},
			{'|', ' ', ' ', '|', ' '},
			{'|', ' ', ' ', 'O', ' '},
			{'|', ' ', '/', '|', '\\'},
			{'|', ' ', '/', '-', '\\'}
		};


	public:
		void draw_stickman(int mistakes);
		void print_noose(char array[5][5]);
};