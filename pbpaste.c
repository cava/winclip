#include <windows.h>
#include <stdio.h>

int main()
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
	}
	return 0;
}