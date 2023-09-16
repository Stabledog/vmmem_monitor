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

  echo '#include <windows.h>
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

  echo '#include <windows.h>
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

  echo '#include <windows.h>
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

  echo '#include <windows.h>
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
  lstrcpy(nid.szTip, L"CPU Monitor");
  Shell_NotifyIcon(NIM_ADD, &nid);
  StartMonitoring(L"notepad");
  break;
  case WM_DESTROY:
  Shell_NotifyIcon(NIM_DELETE, &nid);
  StopMonitoring();
  PostQuitMessage(0);
  break;
  case WM_TIMER:
  PDH_FMT_COUNTERVALUE counterValue;
  PdhCollectQueryData(hQuery);
  PdhGetFormattedCounterValue(hCounter, PDH_FMT_DOUBLE, NULL, &counterValue);
  UpdateIcon(hWnd, counterValue.doubleValue > 50.0);
  break;
  }
  return DefWindowProc(hWnd, message, wParam, lParam);
  }

  int APIENTRY wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPWSTR lpCmdLine, _In_ int nCmdShow)
  {
  WNDCLASSEX wcex = {0};
  wcex.cbSize = sizeof(WNDCLASSEX);
  wcex.lpfnWndProc = WndProc;
  wcex.hInstance = hInstance;
  wcex.lpszClassName = L"CPU Monitor";
  RegisterClassEx(&wcex);
  HWND hWnd = CreateWindow(L"CPU Monitor", NULL, 0, 0, 0, 0, 0, HWND_MESSAGE, NULL, hInstance, NULL);
  ShowWindow(hWnd, nCmdShow);
  UpdateWindow(hWnd);
  MSG msg;
  while (GetMessage(&msg, NULL, 0, 0))
  {
  TranslateMessage(&msg);
  DispatchMessage(&msg);
  }
  return (int) msg.wParam;
  }' > cpu_monitor.c


  Would you like to run this code? (y/n)

I:  n

I:> what did you call the file?

  The file is named cpu_monitor.c.

I:> open an interactive shell for me


  bash


  Would you like to run this code? (y/n)

I:  y


  bash



  I've opened an interactive shell for you. You can now run commands directly in the shell.

I:> ls


  ls


  Would you like to run this code? (y/n)

I:  n

I:> q

  It seems like you want to exit the interactive shell. Let's do that.



  exit

