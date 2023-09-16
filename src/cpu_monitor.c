#include <windows.h>
#include <pdh.h>

NOTIFYICONDATA nid = {0};
HICON hIcon1 = NULL;
HICON hIcon2 = NULL;
UINT_PTR uTimerId = 0;
PDH_HQUERY hQuery = NULL;
PDH_HCOUNTER hCounter = NULL;

void StartMonitoring(LPCWSTR szProcessName)
{
    PdhOpenQuery(NULL, NULL, &hQuery);
    WCHAR szCounterPath[256];
    wsprintf(szCounterPath, L"\\Process(%s)\\%% Processor Time", szProcessName);
    PdhAddCounter(hQuery, szCounterPath, NULL, &hCounter);
    PdhCollectQueryData(hQuery);
}

void StopMonitoring()
{
    PdhCloseQuery(hQuery);
}

void StartFlashing(HWND hWnd)
{
    uTimerId = SetTimer(hWnd, 1, 500, NULL);
}

void StopFlashing(HWND hWnd)
{
    KillTimer(hWnd, uTimerId);
}

void UpdateIcon(HWND hWnd, BOOL bHighCpuUsage)
{
    nid.hIcon = bHighCpuUsage ? hIcon2 : hIcon1;
    Shell_NotifyIcon(NIM_MODIFY, &nid);
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
    case WM_CREATE:
        nid.cbSize = sizeof(NOTIFYICONDATA);
        nid.hWnd = hWnd;
        nid.uID = 1;
        nid.uFlags = NIF_ICON | NIF_TIP;
        nid.hIcon = hIcon1;
    }
}
