#include "GameOver.h"
#include "myResourceManager.h"
#include "myInput.h"
#include "Time.h"
#include "myImage.h"

namespace my
{
	GameOver::GameOver()
	{

	}
	GameOver::~GameOver()
	{

	}
	void GameOver::Initialize()
	{
		gameover = ResourceManager::Load<Image>(L"gameOver", L"..\\Resources\\gameOver.bmp"); // �̹����� Ű�� ��� ������ ����
		exit_Button = ResourceManager::Load<Image>(L"exit_Button", L"..\\Resources\\Exit_Button.bmp"); // �̹����� Ű�� ��� ������ ����

		GameObject::Initialize();
	}
	void GameOver::Update()
	{
		GameObject::Update();
	}
	void GameOver::Render(HDC hdc)
	{
		TransparentBlt(hdc, 435, 150, gameover->GetWidth() * 1.2, gameover->GetHeight() * 1.2, gameover->GetHdc(), 0, 0, gameover->GetWidth(), gameover->GetHeight(), RGB(255, 0, 255));
		TransparentBlt(hdc, 550, 450, exit_Button->GetWidth(), exit_Button->GetHeight(), exit_Button->GetHdc(), 0, 0, exit_Button->GetWidth(), exit_Button->GetHeight(), RGB(255, 0, 255));

		GameObject::Render(hdc);
	}
	void GameOver::Release()
	{
		GameObject::Release();
	}
}