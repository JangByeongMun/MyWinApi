#include "TitleLevel.h"
#include "GameEngine/GameEngine.h"
#include "TitleLogo.h"
#include "TitleBackGround.h"

TitleLevel::TitleLevel() 
{
}

TitleLevel::~TitleLevel() 
{
}

void TitleLevel::Loading()
{
	CreateActor<TitleBackGround>("TitleBackGround", 0);
	CreateActor<TitleLogo>("TitleLogo", 0);
}

void TitleLevel::Update()
{
	// �ӽ÷� ������ �Ѿ����
	GameEngine::GlobalEngine().ChangeLevel("Play");
}

void TitleLevel::SceneChangeStart()
{
}

void TitleLevel::SceneChangeEnd()
{
}

