#pragma once

#include "GameObject.h"

#include "Animation.h"
#include "Animations.h"

#define MARIO_WIDTH 14
#define GOOMBA_WIDTH 16

class CBrick : public CGameObject {
public: 
	CBrick(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
};

class CMario : public CGameObject
{
protected:
	float vx;
public:
	CMario(float x, float y, float vx);
	void Update(DWORD dt);
	void Render();
};



class CGBrick : public CGameObject {
public:
	CGBrick(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
};

class CGoomba : public CGameObject
{
protected:
	float vx;
public:
	CGoomba(float x, float y, float vx);
	void Update(DWORD dt);
	void Render();
};


