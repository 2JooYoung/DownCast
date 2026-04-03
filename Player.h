#pragma once
#include "Actor.h"

class USpriteAnimationComponent;

class APlayer : public AActor
{
public:
	APlayer(int InX = 1, int InY = 1, char InMesh = 'P');
	virtual ~APlayer();

	virtual void Tick() override;

	USpriteAnimationComponent* SpriteAnimationComponent;


protected:



};

