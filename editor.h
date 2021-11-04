#ifndef EDITOR_
#define EDITOR_
#include "LinkedList.h"
#include<string>
#include <ifstream>
class editor {

private:
	LinkedList <std::string> lines;
public:
	/**Constructor which initializes a new editor object by reading a file into it.
	@param fileName The name of the file to be read in.
	@Pre the fileName denotes a valid file in the same directory.
	@Post Terminates program if the file fileName cannot be opened. Otherwise, each line in the file becomes an item
		in the list. */
	Editor(string filename); //Note a constructor has no return type, not even void
	void DisplayLines();
	void run();
	void placeCursorAt(Position coordinate);
	/* Future methods
	void moveUp();
	void movedown();
	void moveleft();
	void moveright();
	void deleteChar();

	*/

};
#include "editor.cpp"

#endif 
