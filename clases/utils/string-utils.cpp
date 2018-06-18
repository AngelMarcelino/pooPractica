#include "../../headers/utils/string-utils.h"
#include <string>

std::string StringUtils::removeLastChar(std::string input) {
    return input.substr(0, input.size() -1);
}