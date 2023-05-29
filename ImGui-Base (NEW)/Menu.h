#pragma once
#include "ImGuiHook.hpp"
#include "InternalFunctions.hpp"
#include "Styles.h"

// Do not change name unless you know what you are doing
bool Close = true;

bool testbool = true;
float test = 0.f;

// Do not change name unless you know what you are doing
void Menu()
{
	if (Close)
	{
		Styles::UseHaze();

		ImGui::Begin("Huzo", &Close);

		ImGui::Button("Test");

		ImGui::InputFloat("Test", &test, 1.f, 1.f);

		if (ImGui::Checkbox("Test Bool", &testbool))
		{
			testbool != testbool;
		}

		ImGui::End();
	}
}