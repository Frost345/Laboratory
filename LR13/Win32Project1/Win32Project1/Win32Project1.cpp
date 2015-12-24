
#include "stdafx.h"
#include <windows.h>

HWND hWND[7];
HINSTANCE hInst;
int x = 100, y = 100;
int st = 0;

LONG WINAPI WndProc(HWND, UINT, WPARAM, LPARAM);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	HWND hwnd;
	MSG msg;
	WNDCLASS w;
	memset(&w, 0, sizeof(WNDCLASS));
	w.style = CS_HREDRAW | CS_VREDRAW | CS_DBLCLKS;
	w.lpfnWndProc = WndProc;
	w.hInstance = hInstance;
	w.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	w.lpszClassName = L"Window";
	RegisterClass(&w);
	hwnd = CreateWindow(L"Window", L" Click", WS_OVERLAPPEDWINDOW, x, y, 400, 480, NULL, NULL, hInstance, NULL);
	x += 25;
	y += 25;
	ShowWindow(hwnd, nCmdShow);
	UpdateWindow(hwnd);
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return msg.wParam;
}

LONG WINAPI WndProc(HWND hwnd, UINT Message, WPARAM wparam, LPARAM lparam)
{
	switch (Message)
	{
	case WM_DESTROY:
		DestroyWindow(hwnd);
		break;
	case WM_RBUTTONDBLCLK:
		SetWindowText(hwnd, L" New titles");
		break;
	case WM_LBUTTONUP:
		if (st < 7)
		{
			hWND[st] = CreateWindow(L"Window", L" Click",
				WS_OVERLAPPEDWINDOW, x, y, 400, 480, NULL, NULL, hInst, NULL);
			x += 25;
			y += 25;
			ShowWindow(hWND[st], 1);
			st++;
		}
		break;
	case WM_CLOSE:
		if (IDOK == MessageBox(hwnd, L"OK", L"Cancel",
			MB_OKCANCEL | MB_ICONQUESTION | MB_DEFBUTTON1))
			SendMessage(hwnd, WM_DESTROY, NULL, NULL);
		break;
	default: return DefWindowProc(hwnd, Message, wparam, lparam);
	}
	return 0;
}