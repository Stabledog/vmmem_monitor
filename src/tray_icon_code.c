
#include <windows.h>
#include <shellapi.h>

NOTIFYICONDATA nid;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // ... your code ...

    nid.cbSize = sizeof(NOTIFYICONDATA);
    nid.hWnd = /* your window handle */;
    nid.uID = 100; // unique ID for the icon
    nid.uVersion = NOTIFYICON_VERSION;
    nid.uCallbackMessage = WM_APP; // message to send when an event occurs
    nid.hIcon = /* your icon */;
    strcpy(nid.szTip, "Your tooltip text");
    nid.uFlags = NIF_MESSAGE | NIF_ICON | NIF_TIP;

    // ... your code ...

    switch (message) {
        case WM_CREATE:
            Shell_NotifyIcon(NIM_ADD, &nid);
            break;
        case WM_DESTROY:
            Shell_NotifyIcon(NIM_DELETE, &nid);
            break;
        // ... your code ...
    }

    // ... your code ...
}
