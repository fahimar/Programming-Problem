#include <iostream>
#include <string>

int main()
{
    int nb_entries = 0;
    std::cin >> nb_entries;
    std::cin.ignore();

    for (auto i = 0; i < nb_entries; ++i)
    {
        std::string line;
        std::getline(std::cin, line);
        for (char c : line) std::cout << c - 'A' + 1;
        std::cout << '\n';
    }
}
