#pragma once

// ���� : �������� ����ٴϴ� ��
class Familiar
{
public:
	// constrcuter destructer
	Familiar();
	~Familiar();

	// delete Function
	Familiar(const Familiar& _Other) = delete;
	Familiar(Familiar&& _Other) noexcept = delete;
	Familiar& operator=(const Familiar& _Other) = delete;
	Familiar& operator=(Familiar&& _Other) noexcept = delete;

protected:

private:

};

