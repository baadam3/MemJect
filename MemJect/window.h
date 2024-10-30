#include "imgui/imgui.h"
#include "imgui/imgui_impl_dx12.h"
#include "imgui/imgui_impl_win32.h"
#include "imgui/imgui_internal.h"
#pragma once

void MainWindow(bool show_test_window); //Contains the details and settings of the main window we want to render
void MainMenu(bool show_test_window); //Contains code regarding the main menu (navbar)
void TestWindow(bool show_window); //Test window