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
	// �ӽ÷� ������ �Ѿ����
	GameEngine::GlobalEngine().ChangeLevel("Play");

}

