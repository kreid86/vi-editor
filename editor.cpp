#include "editor.h"

editor::editor() {

}
void editor::DisplayLines(){

}
void editor::run() {

}

void placeCursorAt(Position coordinate) {

	COORD coord;

	coord.X = coordinate.getX();

	coord.Y = coordinate.getY();

	SetConsoleCursorPosition(

		GetStdHandle(STD_OUTPUT_HANDLE),

		coord);

}



//void editor::