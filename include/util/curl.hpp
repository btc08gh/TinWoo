#pragma once
#include <string>

namespace inst::curl {
    bool downloadFile(const std::string ourUrl, const char *pagefilename, long timeout = 5000, bool writeProgress = false);
    std::string downloadToBuffer (const std::string ourUrl, long timeout = 5000);
}
