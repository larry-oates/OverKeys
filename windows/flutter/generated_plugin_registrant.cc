//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <desktop_multi_window/desktop_multi_window_plugin.h>
#include <hid_listener/hid_listener_plugin_windows.h>
#include <hotkey_manager_windows/hotkey_manager_windows_plugin_c_api.h>
#include <screen_retriever_windows/screen_retriever_windows_plugin_c_api.h>
#include <tray_manager/tray_manager_plugin.h>
#include <url_launcher_windows/url_launcher_windows.h>
#include <window_manager/window_manager_plugin.h>

void RegisterPlugins(flutter::PluginRegistry* registry) {
  DesktopMultiWindowPluginRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("DesktopMultiWindowPlugin"));
  HidListenerPluginWindowsRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("HidListenerPluginWindows"));
  HotkeyManagerWindowsPluginCApiRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("HotkeyManagerWindowsPluginCApi"));
  ScreenRetrieverWindowsPluginCApiRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("ScreenRetrieverWindowsPluginCApi"));
  TrayManagerPluginRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("TrayManagerPlugin"));
  UrlLauncherWindowsRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("UrlLauncherWindows"));
  WindowManagerPluginRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("WindowManagerPlugin"));
}
