#include "Monster.h"

AMonster::AMonster(int InX, int InY, char InMesh)
{
	X = InX;
	Y = InY;
	Mesh = InMesh;
	ZOrder = 50;
	
	R = 255;
	G = 255;
	B = 0;
}

AMonster::~AMonster()
{
}
