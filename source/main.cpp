#include "spdlog/spdlog.h"
#include "fmt/core.h"

auto main() -> int
{
    spdlog::info("Hello, {}!", fmt::format("{}{}", "wor", "ld"));
};