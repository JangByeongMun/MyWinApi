#pragma once
#include <list>
#include <map>
#include <GameEngineBase/GameEngineNameObject.h>

class GameEngine;
class GameEngineActor;
class GameEngineLevel : public GameEngineNameObject
{
	friend GameEngine;
public:
	// constrcuter destructer
	GameEngineLevel();
	virtual ~GameEngineLevel();

	// delete Function
	GameEngineLevel(const GameEngineLevel& _Other) = delete;
	GameEngineLevel(GameEngineLevel&& _Other) noexcept = delete;
	GameEngineLevel& operator=(const GameEngineLevel& _Other) = delete;
	GameEngineLevel& operator=(GameEngineLevel&& _Other) noexcept = delete;

protected:
	virtual void Loading() = 0;
	virtual void Update() = 0;

	virtual void SceneChangeStart() = 0; // �� ������ �ٲ������ ����Ǵ� �Լ�
	virtual void SceneChangeEnd() = 0; // �� ���� �ٲ������ ����Ǵ� �Լ�
	
	template<typename ActorType>
	ActorType* CreateActor(const std::string& _name , int _order)
	{
		ActorType* newActor = new ActorType();
		newActor->SetName(_name);
		newActor->SetLevel(this);
		// ------------------------------------------
		//std::map<int, std::list<GameEngineActor*>>::iterator findIter = allActor_.find(_order);
		//if (findIter == allActor_.end())
		//{
		//	// make_pair ���� ���� ������ (�ش� ������Ÿ��::���_Ÿ��) (ũ�� ���̴� ����)
		//	allActor_.insert(std::map<int, std::list<GameEngineActor*>>::value_type(_order, std::list<GameEngineActor*>()));
		//}
		// ------------------------------------------
		// �迭 �������� ����ϸ� insert�� find�� ���ÿ� �Ҽ� �ִ�. - �� ã�ƺ��� ������ �־��ټ� �ִٴ°�
		// ���� ��ũ��Ʈ�� �ϳ��� ���ļ� ������ذ�
		std::list<GameEngineActor*>& group = allActor_[_order];
		group.push_back(newActor);

		return nullptr;
	}

private:
	// Ű�� == ������Ʈ�� �켱����
	std::map<int, std::list<GameEngineActor*>> allActor_;

	// Ű�� == ������ �̸�
	//std::map<std::string, std::list<GameEngineActor*>> allActor_;

	void ActorUpdate();
	void ActorRender();
};

