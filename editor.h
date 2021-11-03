#ifndef EDITOR_
#define EDITOR_
#include "LinkedList.h"
#include<string>
class editor {

private:
	LinkedList <std::string> Line;
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