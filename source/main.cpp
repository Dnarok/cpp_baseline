#include "spdlog/spdlog.h"
#include "fmt/core.h"
#include "contract.hpp"

auto main() -> int
{
    contract;
        pre(1 == 2);
        post(2 == 3);
    spdlog::info("Hello, {}!", fmt::format("{}{}", "wor", "ld"));

    cond(1 == 3);
};