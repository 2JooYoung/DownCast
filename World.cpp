#include "World.h"
#include "Actor.h"
#include "Player.h"

UWorld::UWorld()
{
}

UWorld::~UWorld()
{
	for (auto Actor : Actors)
	{
		delete Actor;
	}

	Actors.clear();
}

void UWorld::Load(std::string MapName)
{
	//파일 읽어서 생성.
	//fopen,
	//ifstream

	AActor* NewActor = SpawnActor<APlayer>();
}

void UWorld::Tick()
{
	for (auto Actor : Actors)
	{
		Actor->Tick();
	}
}

void UWorld::Render()
{
	for (auto Actor : Actors)
	{
		Actor->Render();
	}
}
