#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

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

        PivotItem homeTab;
        homeTab.Header(box_value(L"Home"));
        StackPanel homePanel;
        homePanel.Spacing(12);
        TextBlock homeTitle;
        homeTitle.Text(L"Home");
        homeTitle.FontSize(24);
        TextBlock homeSubtitle;
        homeSubtitle.Text(L"Welcome to the app.");
        Button homeAction;
        homeAction.Content(box_value(L"Primary action"));
        homePanel.Children().Append(homeTitle);
        homePanel.Children().Append(homeSubtitle);
        homePanel.Children().Append(homeAction);
        homeTab.Content(homePanel);

        PivotItem settingsTab;
        settingsTab.Header(box_value(L"Settings"));
        StackPanel settingsPanel;
        settingsPanel.Spacing(12);
        TextBlock settingsTitle;
        settingsTitle.Text(L"Settings");
        settingsTitle.FontSize(24);
        ToggleSwitch settingToggle;
        settingToggle.Header(box_value(L"Enable feature"));
        ComboBox settingOptions;
        settingOptions.PlaceholderText(L"Choose an option");
        settingOptions.Items().Append(box_value(L"Option A"));
        settingOptions.Items().Append(box_value(L"Option B"));
        settingsPanel.Children().Append(settingsTitle);
        settingsPanel.Children().Append(settingToggle);
        settingsPanel.Children().Append(settingOptions);
        settingsTab.Content(settingsPanel);

        pivot.Items().Append(homeTab);
        pivot.Items().Append(settingsTab);

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
