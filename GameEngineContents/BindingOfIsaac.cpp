#include "BindingOfIsaac.h"
#include "TitleLevel.h"
#include "PlayLevel.h"
#include "EndingLevel.h"

BindingOfIsaac::BindingOfIsaac() 
{
}

BindingOfIsaac::~BindingOfIsaac() 
{
}

void BindingOfIsaac::GameInit()
{
	CreateLevel<TitleLevel>("Title");
	CreateLevel<PlayLevel>("Play");
	CreateLevel<EndingLevel>("Ending");
	ChangeLevel("Title");
}

void BindingOfIsaac::GameLoop()
{
	int a = 0;
}

void BindingOfIsaac::GameEnd()
{
	int a = 0;
}
