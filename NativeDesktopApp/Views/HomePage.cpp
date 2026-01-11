#include "pch.h"
#include "HomePage.h"

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

        Button homeAction;
        homeAction.Content(box_value(L"Primary action"));

        homePanel.Children().Append(homeTitle);
        homePanel.Children().Append(homeSubtitle);
        homePanel.Children().Append(homeAction);

        homeTab.Content(homePanel);
        return homeTab;
    }
}
