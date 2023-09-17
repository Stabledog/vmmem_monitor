#include <windows.h>

#ifdef _0
void registerIcon(HWND hWnd)
{
    NOTIFYICONDATA nid;
    nid.cbSize = sizeof(NOTIFYICONDATA);
    nid.hWnd = /* your window handle */;
    nid.uID = 100; // unique ID for the icon
    nid.uVersion = NOTIFYICON_VERSION;
    nid.uCallbackMessage = WM_APP; // message to send when an event occurs
    nid.hIcon = /* your icon */;
    strcpy(nid.szTip, "Your tooltip text");
    nid.uFlags = NIF_MESSAGE | NIF_ICON | NIF_TIP;
}
#endif

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, INT nCmdShow)
{

    MessageBox(NULL, "Hello, World!", "Test", MB_OK);
    return 0;
}
