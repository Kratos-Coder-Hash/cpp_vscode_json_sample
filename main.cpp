
#include <iomanip>
#include <iostream>

#include "json.hpp"

using json = nlohmann::json;
int main() {
  std::cout << "hello world" << std::endl;

  int i = 0;
  i++;
  std::cout << i << std::endl;

  // a valid JSON text
  auto valid_text = R"(
    {
        "numbers": [1, 2, 3]
    }
    )";

  // an invalid JSON text
  auto invalid_text = R"(
    {
        "strings": ["extra", "comma", ]
    }
    )";

  std::cout << std::boolalpha << json::accept(valid_text) << ' '
            << json::accept(invalid_text) << '\n';
}