#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

void b10()
{
    using std::cin, std::cout;

    cout << "Enter the numbers, seperating them with a line or a space."
              << "Enter '0' to indicate that you are done.\n";
    std::vector<char> chars;

    while (true)
    {
        int in;
        cin >> in;
        if (in == 0)
            break;

        chars.push_back(in);
    }

    for (auto character : chars)
    {
        cout << character; //No newline.
    }
}

void b2()
{
    using std::cin, std::cout;

    cout << "Enter the numbers, seperating them with a line or a space."
              << "Enter '2' to indicate that you are done.\n";
    std::vector<char> chars;

    while (true)
    {
        int in, remainder{}, decimal_equiv{}, power{0};
        cin >> in;

        if (in == 2)
            break;

        while (in != 0)
        {
            remainder = in % 10;
            in /= 10;
            decimal_equiv += remainder * pow(2, power);
            ++power;
        }

        chars.push_back(decimal_equiv);
    }

    for (auto character : chars)
    {
        cout << character; //No newline.
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
    using std::cin, std::cout, std::string;

    cout << "Enter desired mode.\n";
    cout << "B: Base 2 (Binary) to letters.\n";
    cout << "O: Base 8 (Octal) to letters.\n";
    cout << "D: Base 10 (Decimal) to letters.\n";
    cout << "H: Base 16 (Hex) to letters.\n";
    //std::cout << "B64: Base 64 to letters.\n";

    string input;
    cin >> input;

    transform(input.begin(), input.end(), input.begin(), ::tolower);

    if (input == "b")
        b2();
    else if (input == "o")
        b8();
    else if (input == "d")
        b10();
    else if (input == "h")
        b16();
    //else if (input == "b64")
    //b64();
    else
        cout << "Invalid input. Shutting down...";

    return 0;
}