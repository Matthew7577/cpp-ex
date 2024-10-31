#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <windows.h>

void insertWordAfterKeyword(const std::string &filename, const std::string &keyword, const std::string &wordToInsert)
{
    std::ifstream inputFile(filename);
    if (!inputFile)
    {
        MessageBox(NULL, "Error opening file!", "Task Failed", MB_ICONERROR | MB_OK);
        return;
    }

    std::vector<std::string> lines;
    std::string line;
    while (std::getline(inputFile, line))
    {
        size_t pos = line.find(keyword);
        if (pos != std::string::npos && line.find(wordToInsert) == std::string::npos)
        {
            line.insert(pos + keyword.length(), wordToInsert);
            MessageBox(NULL, "Task completed successfully!", "Task Success", MB_ICONINFORMATION | MB_OK);
        }
        else if (pos != std::string::npos && line.find(wordToInsert) != std::string::npos)
        {
            MessageBox(NULL, "The line already contains the word.", "No Action Needed", MB_ICONINFORMATION | MB_OK);
        }
        lines.push_back(line);
    }
    inputFile.close();

    std::ofstream outputFile(filename);
    for (const auto &l : lines)
    {
        outputFile << l << std::endl;
    }
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    std::string filename = "C:\\Users\\matth\\Downloads\\test\\grubenv"; // Change the path to your desired location
    std::string keyword = "next_entry=";
    std::string wordToInsert = "0";
    insertWordAfterKeyword(filename, keyword, wordToInsert);
    return 0;
}
