#pragma once

// ���� : ���� ������ ǥ�����ִ�â
class DeadReason
{
public:
	// constrcuter destructer
	DeadReason();
	~DeadReason();

	// delete Function
	DeadReason(const DeadReason& _Other) = delete;
	DeadReason(DeadReason&& _Other) noexcept = delete;
	DeadReason& operator=(const DeadReason& _Other) = delete;
	DeadReason& operator=(DeadReason&& _Other) noexcept = delete;

protected:

private:

};

