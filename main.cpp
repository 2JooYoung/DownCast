#include <iostream>
#include "Engine.h"
#include "World.h"

#include "SDL.h"
//사용할 라이브러리 복사
//include 경로 추가
//lib 경로 추가
//library 파일 등록 

//사용할 라이브러리 파일 추가
#pragma comment(lib, "SDL2")
#pragma comment(lib, "SDL2main")


using namespace std;


int SDL_main(int argc, char* argv[])
{
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Window* MyWindow = SDL_CreateWindow("Hello", 100, 100, 640, 480, SDL_WINDOW_SHOWN);


	//GPU, 붓
	SDL_Renderer* MyRender = SDL_CreateRenderer(MyWindow, -1, 0);

	while (true)
	{ 
		SDL_Event MyEvent;
		SDL_PollEvent(&MyEvent);

		if (MyEvent.type == SDL_QUIT)
		{
			break;
		}

		//GPU 한테 보낼 명령어 모음
		SDL_SetRenderDrawColor(MyRender, 255, 255, 255, 255);
		SDL_RenderClear(MyRender);

		SDL_RenderPresent(MyRender);


	}

	SDL_DestroyRenderer(MyRender);

	SDL_DestroyWindow(MyWindow);

	SDL_Quit();

	return 0;
}

//int main()
//{
//	GEngine->GetWorld()->Load("level01.umap");
//
//	GEngine->Run();
//
//	delete GEngine;
//
//	return 0;
//}
//

