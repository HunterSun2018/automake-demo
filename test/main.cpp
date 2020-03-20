#include <iostream>
#include <filesystem>
#include <folder.h>

using namespace std;
namespace fs = filesystem;

int main(int argc, char *argv[])
{
    cout << "hello world!" << endl;

    //auto temp_path = fs::temp_directory_path();
    //cout << "temp path is " << temp_path.string() << endl;
    cout << "temp path is " << get_temp_folder() << endl;
}