#ifndef EDITOR_
#define EDITOR_
#include "LinkedList.h"
#include<string>
using std::string

class editor {

private:
	LinkedList <string> lines;
public:
	void Editor();
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
