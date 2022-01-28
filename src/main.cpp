#include <algorithm>
#include <bitset>
#include <iostream>
#include <vector>

void b2()
{
    std::cout << "Enter the numbers one line at a time. Enter '2' to indicate that you are done.\n";

    std::vector<char> input;

    while (true)
    {
        int in;
        std::cin >> in;
        //TODO Add binary conversion.

        if (in == 2)
            break;

        input.push_back(in);
    }

    for (auto character : input)
    {
        std::cout << character; //No newline.
    }
}

void b10()
{
    std::cout << "Enter the numbers one line at a time. Enter '0' to indicate that you are done.\n";
    std::vector<char> input;

    while (true)
    {
        int in;
        std::cin >> in;
        if (in == 0)
            break;

        input.push_back(in);
    }

    for (auto character : input)
    {
        std::cout << character; //No newline.
    }
}

void b8() 
{
    std::cin >> std::oct;
    b10();
}

void b16()
{
    std::cin >> std::hex;
    b10();
}

void b64()
{
    //TODO Add B64 conversion.
}

int main()
{

    std::cout << "Enter desired mode.\n";
    //std::cout << "Bin: Base 2 (Binary) to letters.\n";
    std::cout << "O: Base 8 (Octal) to letters.\n";
    std::cout << "D: Base 10 (Decimal) to letters.\n";
    std::cout << "H: Base 16 (Hex) to letters.\n";
    //std::cout << "B64: Base 64 to letters.\n";

    std::string input;
    std::cin >> input;

    transform(input.begin(), input.end(), input.begin(), ::tolower);

    /*if (input == "bin")
        b2();
    else*/ if (input == "o")
        b8();
    else if (input == "d")
        b10();
    else if (input == "h")
        b16();
    //else if (input == "b64")
        //b64();
    else
        std::cout << "Invalid input. Shutting down...";

    return 0;
}