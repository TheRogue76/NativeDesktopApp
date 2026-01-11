#pragma once

#include "MainWindow.g.h"

namespace winrt::NativeDesktopApp::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}

namespace winrt::NativeDesktopApp::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
