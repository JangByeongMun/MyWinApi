#pragma once

// ���� : �ֿ���ִ� �����۵� (��Ʈ, ī��, ����, ��ź ��)
class PickableObject
{
public:
	// constrcuter destructer
	PickableObject();
	~PickableObject();

	// delete Function
	PickableObject(const PickableObject& _Other) = delete;
	PickableObject(PickableObject&& _Other) noexcept = delete;
	PickableObject& operator=(const PickableObject& _Other) = delete;
	PickableObject& operator=(PickableObject&& _Other) noexcept = delete;

protected:

private:

};

