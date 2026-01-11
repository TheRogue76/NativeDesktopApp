#include "pch.h"
#include "HomePage.h"

#include <memory>

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;

namespace winrt::NativeDesktopApp::views
{
    PivotItem HomePage::Create()
    {
        PivotItem homeTab;
        homeTab.Header(box_value(L"Home"));

        StackPanel homePanel;
        homePanel.Spacing(12);

        TextBlock homeTitle;
        homeTitle.Text(L"Home");
        homeTitle.FontSize(24);

        TextBlock homeSubtitle;
        homeSubtitle.Text(L"Welcome to the app.");

        TextBlock counterText;
        counterText.Text(L"Count: 0");

        Button homeAction;
        homeAction.Content(box_value(L"Primary action"));
        auto counter = std::make_shared<int32_t>(0);
        homeAction.Click([counter, counterText](winrt::Windows::Foundation::IInspectable const&, Microsoft::UI::Xaml::RoutedEventArgs const&)
        {
            ++(*counter);
            counterText.Text(L"Count: " + to_hstring(*counter));
        });

        homePanel.Children().Append(homeTitle);
        homePanel.Children().Append(homeSubtitle);
        homePanel.Children().Append(counterText);
        homePanel.Children().Append(homeAction);

        homeTab.Content(homePanel);
        return homeTab;
    }
}
