#include "editor.h"

void placeCursorAt(Position coordinate) {

	COORD coord;

	coord.X = coordinate.getX();

	coord.Y = coordinate.getY();

	SetConsoleCursorPosition(

		GetStdHandle(STD_OUTPUT_HANDLE),

		coord);

}


editor::editor(string fileName) {
	ifstream in;
	in.open(fileName);
	
	if (in.fail() ) //Terminate program if input file does not open.
	{
		cerr << "Error. Cannot open input file. Goodbye!\n\n";
		exit(1);
	}	
	string firstLine;
	getline(in, firstLine);
	lines.insert(1, firstLine);
	
	string nextLine;
	
	//Loop to read in each reamining line from file. Line 2 is stored at position 2, Line 3 at position 3, etc.
	while (!eof() )
	{
		getline(in, nextLine);
		lines.insert( (lines.getLength() + 1 ), nextLine);
	}
	
	in.close();
}
void editor::DisplayLines(){

}
void editor::run() {

}

//void editor::
