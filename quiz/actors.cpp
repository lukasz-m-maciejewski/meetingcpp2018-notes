#include <iostream>
#include <string_view>
#include <filesystem>
#include <fstream>
#include <string>

using namespace std::literals::string_view_literals;

int main() {
    std::string_view good("Clint Eastwood");
    auto bad = "Lee Van Cleef"sv;
    good.remove_prefix(3);
    std::string_view ugly = good.substr(bad.find("a"), 4);

    std::filesystem::create_directories("movies");
    std::ofstream("movies/actors.txt") << good << ugly;
    std::ofstream("movies/script.txt") << ugly << bad;
    for (auto& p: std::filesystem::directory_iterator("movies")){
        std::string str;
        std::ifstream(p.path()) >> str;
        std::cout << str;
    }
    std::filesystem::remove_all("movies");
}
