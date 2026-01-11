#pragma once

#include <winrt/Microsoft.UI.Xaml.Controls.h>

namespace winrt::NativeDesktopApp::views
{
    struct SettingsPage
    {
        static Microsoft::UI::Xaml::Controls::PivotItem Create();
    };
}
