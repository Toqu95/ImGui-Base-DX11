#define WIN32_LEAN_AND_MEAN
#include "ImGuiHook.hpp"
#include "InternalFunctions.hpp"

// Globals
HINSTANCE dll_handle;

// Main Loop
int WINAPI main()
{

	// Setup Start
	
	if (!get_present_pointer())
		return 1;

	MH_STATUS status = MH_Initialize();
	if (status != MH_OK)
		return 1;

	if (MH_CreateHook(reinterpret_cast<void**>(p_present_target), &detour_present, reinterpret_cast<void**>(&p_present)) != MH_OK)
		return 1;

	if (MH_EnableHook(p_present_target) != MH_OK)
		return 1;

	// Setup End

	// ImGui Loop
	while (true)
	{
		Sleep(10);

		if (GetAsyncKeyState(VK_INSERT) & 1)
			Close = !Close;

		if (GetAsyncKeyState(VK_END))
			break;
	}

	// Cleanup
	if (MH_DisableHook(MH_ALL_HOOKS) != MH_OK)
		return 1;

	if (MH_Uninitialize() != MH_OK)
		return 1;

	// Destroy ImGui
	EndImGui();

	// Destroy Hook
	if (!EndHook())
		MessageBox(NULL, "Could not destroy hook?\nLine: 51 [main.cpp]", "Error", MB_OK);

	// Exit
	FreeLibraryAndExitThread(dll_handle, 0);
	
	return 0;
}

BOOL __stdcall DllMain(HINSTANCE hModule, DWORD dwReason, LPVOID lpReserved)
{
	if (dwReason == DLL_PROCESS_ATTACH)
	{
		dll_handle = hModule;
		CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)main, NULL, 0, NULL);
	}
	return TRUE;
}