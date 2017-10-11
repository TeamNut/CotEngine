#include <crtdbg.h>
#include <CotEngine.h>
#include "DemoScene.h"

int WINAPI WinMain(HINSTANCE hInsetance, HINSTANCE hPrevInstance, LPSTR lpszCmdParam, int nCmdShow)
{
#if defined(DEBUG) | defined(_DEBUG)
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	//	_CrtSetBreakAlloc(184);
#endif
	Cot::Application app;
	if (app.Init(hInsetance, "Test", 800, 600, false))
	{
		app.RunWithScene(new DemoScene());
	}
	app.Destroy();
	
	return 0;
}