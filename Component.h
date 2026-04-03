#pragma once

//이걸 상속 받는 사람들한테 밑에 함수를 무조건 만들라고 강요하고 싶어.
//추상 클래스
//interface
class UComponent
{
public:
	UComponent();
	virtual ~UComponent();

	//pure virtual function
	virtual void BeginPlay() = 0;

	virtual void Tick() = 0;

	class AActor* Owner;
};

