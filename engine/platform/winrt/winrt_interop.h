
#pragma once

#ifdef __cplusplus
extern "C" {
#endif
	
void WinRT_FullscreenMode_Install(boolean fullscreen);
void WinRT_BackButton_Install();
void WinRT_SaveVideoMode(int w, int h);
float WinRT_GetDisplayDPI();
char* WinRT_GetUserName();
void WinRT_ShellExecute(const char* path);
void WinRT_OpenGameFolderWithExplorer();

#ifdef __cplusplus
}
#endif