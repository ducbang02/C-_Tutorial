#include <iostream>
#include <fstream>
#include <string>

int main()
{
    for (int i = 1; i <= 76; ++i)
    {
        std::string fileName = "bai" + std::to_string(i) + ".cpp";
        std::ofstream outFile(fileName);

        if (outFile.is_open())
        {
            outFile << "" << fileName << std::endl;
            outFile.close();
            std::cout << "Da tao " << fileName << std::endl;
        }
        else
        {
            std::cerr << "Khong the tao file: " << fileName << std::endl;
        }
    }

    return 0;
}
