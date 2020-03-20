#include <filesystem>

namespace fs = std::filesystem;

std::string get_temp_folder()
{
    return fs::temp_directory_path();
}