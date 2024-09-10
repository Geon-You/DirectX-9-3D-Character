#pragma once
#include "Scene.h"
#include "Terrain.h"
#include "Character.h"
#include "BillBoard.h"

class Ingame :
    public Scene
{
private:
	D3DXVECTOR3 eye, lookAt, up; // ��ġ, ���� ����, ���� ���⺤��
	D3DXMATRIX view, projection; // ��, �������� ���
	Terrain terrain;
	Character character;
	BillBoard hpBar;
public:
    void Initialize() override;
    int Update() override;
    void Render() override;
    void Release() override;
	virtual void OnMessage(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam) override;

public:
    Ingame();
    virtual ~Ingame();
};

