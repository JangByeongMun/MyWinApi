#pragma once

// ���� : ����ü�� �߻� �ϴ� ��ũ��Ʈ
class Shooter
{
public:
	// constrcuter destructer
	Shooter();
	~Shooter();

	// delete Function
	Shooter(const Shooter& _Other) = delete;
	Shooter(Shooter&& _Other) noexcept = delete;
	Shooter& operator=(const Shooter& _Other) = delete;
	Shooter& operator=(Shooter&& _Other) noexcept = delete;

protected:

private:

};

