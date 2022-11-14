#pragma once

#include <regex>
#include <string>

template < typename T >
std::string regex_code (T code)
{
  switch (code)
    {
      case std::regex_constants::_S_error_collate:
        return "error_collate: "
               "regex have invalid collating element name";
      case std::regex_constants::_S_error_ctype:
        return "error_ctype: "
               "regex have invalid character last name";
      case std::regex_constants::_S_error_escape:
        return "error_escape: "
               "regex have invalid escaped char. or trailing escape";
      case std::regex_constants::_S_error_backref:
        return "error_backref: "
               "regex have invalid back reference";
      case std::regex_constants::_S_error_brack:
        return "error_brack: "
               "regex have mismatched '[' and ']'";
      case std::regex_constants::_S_error_paren:
        return "error_paren: "
               "regex have mismatched '(' and ')'";
      case std::regex_constants::_S_error_brace:
        return "error_brace: "
               "regex have  mismatched '{' and '}'";
      case std::regex_constants::_S_error_badbrace:
        return "error_badbrace: "
               "regex have invalid range in {} expression";
      case std::regex_constants::_S_error_range:
        return "error_range: "
               "regex have invalid character range, such as '[b-a]'";
      case std::regex_constants::_S_error_space:
        return "error_space: "
               "insufficient memory to convert regex into finite state";
      case std::regex_constants::_S_error_badrepeat:
        return "error_badrepeat: "
               "one of *?+{ not preceded by valid regex";
      case std::regex_constants::_S_error_complexity:
        return "error_complexity: "
               "complexity of match against regex over pre-set level";
      case std::regex_constants::_S_error_stack:
        return "error_stack: "
               "insufficient memory to determine regex match";
      case std::regex_constants::_S_null:
        return "error_null: "
               "null error";
      case std::regex_constants::_S_grammar:
        return "error_grammar: "
               "grammar error";
    }
  return "unknown/non-standard regex error code";
}