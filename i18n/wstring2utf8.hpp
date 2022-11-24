#pragma once

#include <bits/stdc++.h>

std::wstring utf8_to_wstring(const std::string &str)
{
  std::wstring_convert<std::codecvt_utf8<wchar_t>> my_conv;
  return my_conv.from_bytes(str);
}

std::string wstring_to_utf8 (const std::wstring &str)
{
  std::wstring_convert<std::codecvt_utf8<wchar_t>> my_conv;
  return my_conv.to_bytes(str);
}