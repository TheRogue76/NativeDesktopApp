# Repository Guidelines

## Project Structure & Module Organization
- `NativeDesktopApp.slnx` is the solution entry point for Visual Studio/MSBuild.
- `NativeDesktopApp/` contains the WinUI 3 app sources (XAML + C++/WinRT).
- `NativeDesktopApp/Assets/` holds app icons and splash images used by `Package.appxmanifest`.
- `NativeDesktopApp/Generated Files/` contains build-generated headers/sources from IDL/XAML; do not edit by hand.
- `packages/` contains NuGet packages restored for the project.
- `NativeDesktopApp/x64/` is a build output folder (debug artifacts, binaries).

## Build, Test, and Development Commands
- `msbuild NativeDesktopApp.slnx /p:Configuration=Debug /p:Platform=x64` builds the app from the command line.
- `msbuild NativeDesktopApp.slnx /t:Rebuild /p:Configuration=Release /p:Platform=x64` performs a clean rebuild.
- Preferred local workflow: open `NativeDesktopApp.slnx` in Visual Studio and use the Debug/Release configurations.

## Coding Style & Naming Conventions
- C++ style: 4-space indentation, braces on the next line, and namespaces like `winrt::NativeDesktopApp::implementation`.
- XAML + code-behind follow paired naming: `MainWindow.xaml`, `MainWindow.xaml.h`, `MainWindow.xaml.cpp`.
- Public WinRT types use PascalCase; methods follow PascalCase in IDL and C++/WinRT projections.
- Keep `pch.h`/`pch.cpp` updated when adding commonly-used headers.

## Testing Guidelines
- No test framework is currently configured in this repo.
- If you add tests, document the framework, test locations, and how to run them in this file.

## Commit & Pull Request Guidelines
- This workspace is not a Git repository, so no commit conventions are available to summarize.
- If you initialize Git, prefer concise, imperative commit messages (e.g., "Add settings page") and include:
  - a clear description of UI changes
  - screenshots for XAML/layout updates
  - linked issues or tickets when applicable

## Generated Code & Build Artifacts
- Treat `NativeDesktopApp/Generated Files/` and `NativeDesktopApp/x64/` as generated output; avoid manual edits.
- Update `MainWindow.idl` (or new `.idl` files) for new WinRT types, then build once to regenerate templates.
