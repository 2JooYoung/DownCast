#include <iostream>
#include "Engine.h"
#include "World.h"

#define DEFINE_ACCESSOR(Type, Name) \
	const Type& Get##Name() const { return Name; } \
	void Set##Name(const Type& InValue) { Name = InValue; } \

class Accessor
{
private:
	int Gold;

public:
	DEFINE_ACCESSOR(int, Gold)
	//int GetGold() { return Gold; }
	//void SetGold(int InValue) { Gold = InValue; }
};

using namespace std;

int main()
{
	Accessor A;
	A.SetGold(10);
	A.GetGold();

	GEngine->GetWorld()->Load("level01.umap");

	GEngine->Run();

	delete GEngine;


	return 0;
}
