#include "TitleLevel.h"
#include "GameEngine/GameEngine.h"

TitleLevel::TitleLevel() 
{
}

TitleLevel::~TitleLevel() 
{
}

void TitleLevel::Loading()
{
}

void TitleLevel::Update()
{
	// 임시로 다음씬 넘어가도록
	GameEngine::GlobalEngine().ChangeLevel("Play");

}

