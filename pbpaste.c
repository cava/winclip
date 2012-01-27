#include <windows.h>
#include <stdio.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	int len;
	char *data = NULL;

	if (OpenClipboard(NULL)) {
		HANDLE hData = GetClipboardData(CF_TEXT);
		char *buffer = (char*)GlobalLock(hData);
		GlobalUnlock(hData);
		CloseClipboard();
		len = strlen(buffer);
		data = (char *) malloc(len+1);
		strcpy(data,buffer);
		printf("%s\n", data);
	}
	return 0;
}