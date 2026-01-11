#pragma once

#include <winrt/Microsoft.UI.Xaml.Controls.h>

namespace winrt::NativeDesktopApp::views
{
    struct HomePage
    {
        static Microsoft::UI::Xaml::Controls::PivotItem Create();
    };
}
