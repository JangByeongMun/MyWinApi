#pragma once

// ���� : ������ �ִ� �нú� ������
class PassiveItem
{
public:
	// constrcuter destructer
	PassiveItem();
	~PassiveItem();

	// delete Function
	PassiveItem(const PassiveItem& _Other) = delete;
	PassiveItem(PassiveItem&& _Other) noexcept = delete;
	PassiveItem& operator=(const PassiveItem& _Other) = delete;
	PassiveItem& operator=(PassiveItem&& _Other) noexcept = delete;

protected:

private:

};

