#include "pch.h"
#include "SettingsPage.h"

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;

namespace winrt::NativeDesktopApp::views
{
    PivotItem SettingsPage::Create()
    {
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
        return settingsTab;
    }
}
