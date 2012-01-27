#include <windows.h>
#include <stdio.h>
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	int len;
	char far *buff;
	HGLOBAL clipbuff;

	len = strlen(lpCmdLine);
	OpenClipboard(NULL);
	EmptyClipboard();
	clipbuff = GlobalAlloc(GMEM_DDESHARE,len + 1);
	buff = (char far*)GlobalLock(clipbuff);
	strcpy(buff, lpCmdLine);

	GlobalUnlock(clipbuff);
	SetClipboardData(CF_TEXT, clipbuff);
	CloseClipboard();

	return 0;
}