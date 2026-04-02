#include <iostream>
#include "Engine.h"
#include "World.h"

#include <map>


using namespace std;


int SDL_main(int argc, char* argv[])
{
	//std::map<std::string, std::string> Dictionary;

	//Dictionary["4"] = "안녕";
	//Dictionary["2"] = "세상";
	//Dictionary["1"] = "에이";
	//Dictionary["3"] = "비";

	//for (std::map<std::string, std::string>::iterator i = Dictionary.begin(); i != Dictionary.end(); ++i)
	//{
	//	cout << (i->first) << ", " << (i->second) << endl;
	//}

	//for (auto i : Dictionary)
	//{
	//	cout << i.first << ", " << i.second << endl;
	//}

	


	GEngine->GetWorld()->Load("level01.umap");

	GEngine->Run();

	delete GEngine;

	return 0;
}


