#pragma once
#include"Gate.h"


class BUFFER :public Gate
{
public:

	BUFFER(const GraphicsInfo& r_GfxInfo, int r_FanOut);
	virtual void Operate();	//Calculates the output of the AND gate
	virtual void Draw(Output* pOut);	//Draws Buffer gate
	virtual void DrawLabel(Output* pOut);
	virtual int GetOutPinStatus();	//returns status of outputpin if LED, return -1
	virtual int GetInputPinStatus(int n);	//returns status of Inputpin # n if SWITCH, return -1
	void Paste(GraphicsInfo& gfnxinfo, ApplicationManager* ptr);
	virtual void setInputPinStatus(int n, STATUS s);	//set status of Inputpin # n, to be used by connection class.
	virtual void Save(ofstream& print);
	virtual InputPin* GetInputPin();
	virtual OutputPin* GetOutputPin();

};

