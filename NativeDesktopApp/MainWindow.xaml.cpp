#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif
#include "Views/HomePage.h"
#include "Views/SettingsPage.h"

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::NativeDesktopApp::implementation
{
    MainWindow::MainWindow()
    {
        Title(L"NativeDesktopApp");

        Pivot pivot;
        pivot.Margin(ThicknessHelper::FromUniformLength(16));

        pivot.Items().Append(views::HomePage::Create());
        pivot.Items().Append(views::SettingsPage::Create());

        Content(pivot);
    }

    int32_t MainWindow::MyProperty()
    {
        return 0;
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
    }
}
