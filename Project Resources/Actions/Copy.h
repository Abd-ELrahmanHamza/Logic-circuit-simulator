#pragma once
#include"Action.h"
#include"..\\Components\Component.h"
class Copy :public Action
{
	int mX, mY;
	Component* Clipboard;
public:

	/* Constructor */
	Copy(ApplicationManager* pAppMan);

	/* Reads parameters required for action to execute */
	virtual void ReadActionParameters();
	/* Executes action */
	virtual void Execute();

	/* Undo action */
	virtual void Undo();

	/* Redo action */
	virtual void Redo();

	/* Destructor */
	virtual ~Copy();
};

