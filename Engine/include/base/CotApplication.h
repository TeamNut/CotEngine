#pragma once

#include "CotRule.h"
#include "CotIScene.h"
#include "render/CotIGraphics.h"
#include <Windows.h>

namespace Cot
{
	class COT_API Application final
	{
	private:
		HWND		_wnd;
		HINSTANCE	_instance;
		wstring		_title;
		IGraphics*	_graphics;

		static LRESULT CALLBACK MsgProc(HWND wnd, UINT msg, WPARAM wParam, LPARAM lParam);

		bool InitGraphcis();

	public:
		Application();
		~Application();

		bool Init(HINSTANCE instance, const string& title, int width, int height, bool fullScreen);
		void RunWithScene(IScene* scene);
		void Destroy();

	};
}