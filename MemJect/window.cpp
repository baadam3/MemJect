#include "window.h"


void MainWindow(bool show_test_window) {

    MainMenu(&show_test_window);

    ImGui::DockSpaceOverViewport(0, ImGui::GetMainViewport());
    

    TestWindow(&show_test_window);

}

void MainMenu(bool show_test_window) {

    if (ImGui::BeginMainMenuBar())
    {
        if (ImGui::BeginMenu("View"))
        {
            ImGui::MenuItem("Hello World", NULL, show_test_window);
            ImGui::EndMenu();
        }

        ImGui::EndMainMenuBar();
    }
}

void TestWindow(bool show_window) {

    if (show_window)
    {
        ImGui::Begin("Hello, world!");

        ImGui::Text("Test");

        ImGui::End();
    }
}