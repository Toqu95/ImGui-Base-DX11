#pragma once
#include "ImGui/imgui.h"

class Styles
{
public:
	static void UseHaze()
	{
		ImGui::GetStyle().WindowRounding = 3.0f;
		ImGui::GetStyle().Colors[ImGuiCol_Text] = ImVec4(1.00f, 0.20f, 0.70f, 1.00f);
		ImGui::GetStyle().Colors[ImGuiCol_Border] = ImVec4(1.00f, 0.20f, 0.70f, 0.50f);
		ImGui::GetStyle().Colors[ImGuiCol_WindowBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.55f);

		ImGui::GetStyle().Colors[ImGuiCol_TitleBgActive] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
		ImGui::GetStyle().Colors[ImGuiCol_TitleBgActive] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);

		ImGui::GetStyle().Colors[ImGuiCol_ResizeGripHovered] = ImVec4(1.00f, 0.20f, 0.70f, 0.75f);
		ImGui::GetStyle().Colors[ImGuiCol_ResizeGripActive] = ImVec4(0.00f, 0.00f, 0.00f, 0.85f);
		ImGui::GetStyle().Colors[ImGuiCol_ResizeGrip] = ImVec4(0.00f, 0.00f, 0.00f, 0.75f);

		ImGui::GetStyle().Colors[ImGuiCol_Button] = ImVec4(1.00f, 0.20f, 0.70f, 0.25f);
		ImGui::GetStyle().Colors[ImGuiCol_ButtonActive] = ImVec4(0.10f, 0.10f, 0.10f, 0.85f);
		ImGui::GetStyle().Colors[ImGuiCol_ButtonHovered] = ImVec4(0.10f, 0.10f, 0.10f, 0.85f);

		ImGui::GetStyle().Colors[ImGuiCol_CheckMark] = ImVec4(1.00f, 0.20f, 0.70f, 1.00f);
		
		ImGui::GetStyle().Colors[ImGuiCol_FrameBg] = ImVec4(1.00f, 0.20f, 0.70f, 0.25f);
		ImGui::GetStyle().Colors[ImGuiCol_FrameBgActive] = ImVec4(1.00f, 0.20f, 0.70f, 0.25f);
		ImGui::GetStyle().Colors[ImGuiCol_FrameBgHovered] = ImVec4(1.00f, 0.20f, 0.70f, 0.25f);

		ImGui::GetStyle().Colors[ImGuiCol_MenuBarBg] = ImVec4(1.00f, 0.20f, 0.70f, 0.25f);
		ImGui::GetStyle().Colors[ImGuiCol_PopupBg] = ImVec4(1.00f, 0.20f, 0.70f, 0.25f);

		ImGui::GetStyle().Colors[ImGuiCol_SliderGrab] = ImVec4(1.00f, 0.20f, 0.70f, 1.00f);
		ImGui::GetStyle().Colors[ImGuiCol_SliderGrabActive] = ImVec4(1.00f, 0.20f, 0.70f, 1.00f);

		ImGui::GetStyle().WindowTitleAlign = ImVec2(0.5, 0.5);
	}
};