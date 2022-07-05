#include <stdio.h>
#include <windows.h>

#pragma comment (lib, "User32.lib")


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, 
		    LPSTR lpCmdLine, int nCmdShow)
{
	printf("hello");
	MessageBox(NULL, "Goodbye, cruel world!", "Note", MB_OK);
	return 0;
}
