#include <Windows.h>
#include <GameEngineBase/GameEngineWindow.h>
#include <GameEngineBase/GameEngineDebug.h>
#include <conio.h>

// main�Լ��� �����ε� �ؼ� ����Ѱ�
// �⺻ win ������Ʈ�� ����� wWinMain���� �����µ� �� w�� �����ڵ��� �ǹ��̰� ��Ƽ����Ʈ�� ����ϱ����� w�� �� ������ ���
int APIENTRY WinMain(_In_ HINSTANCE hInstance,
					_In_opt_ HINSTANCE hPrevInstance,
					_In_ char* lpCmdLine, // �⺻������ wchar_t* ���� ������ �ڷ����� ���µ� ������ ��Ƽ����Ʈ�� �ٲ����Ƿ� char*�� ����
					_In_ int nCmdShow)
{
	GameEngineDebug::LeakCheckOn();

	GameEngineWindow::GetInst().CreateGameWindow(hInstance, "GameWindow");
	GameEngineWindow::GetInst().ShowGameWindow();

	while (true)
	{
		//������ ���ư���.
		_getch();
	}

	GameEngineWindow::Destroy();
}