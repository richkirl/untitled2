#include <iostream>
#include <experimental/filesystem>

using namespace std;
namespace fs = std::experimental::filesystem;

namespace example_a {
    void example() {
        auto cur_p = fs::current_path();

        cout << cur_p << endl;

        auto space = fs::space(fs::current_path().root_path());

        cout << "Total:" << '\t' << space.capacity / 1024 / 1024 / 1024 << "Gb" << endl;
        cout << "Free :" << '\t' << space.free / 1024 / 1024 / 1024 << "Gb" << endl;
        cout << "Avail:" << '\t' << space.available / 1024 / 1024 / 1024 << "Gb" << endl;
        std::cin.get();
    }

}

int main()
{
    example_a::example();

}

