#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>
#include <windows.h>

bool runDiskpartCommand(const std::string& command) {
    std::string fullCommand = "diskpart /c " + command;
    STARTUPINFO si = { sizeof(si) };
    PROCESS_INFORMATION pi;
    if (CreateProcess(NULL, const_cast<char*>(fullCommand.c_str()), NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi)) {
        WaitForSingleObject(pi.hProcess, INFINITE);
        CloseHandle(pi.hProcess);
        CloseHandle(pi.hThread);
        return true;
    } else {
        return false;
    }
}

int main() {
    // Run diskpart commands
    std::string commands[] = {
        "sel disk 0",
        "sel part 1",
        "assign letter=z"
    };
    
    for(const std::string& command : commands) {
        if (runDiskpartCommand(command)) {
            std::cout << "Command '" << command << "' successfully executed." << std::endl;
        } else {
            std::cerr << "Command '" << command << "' execution failed." << std::endl;
            return 1;
        }
    }

    // Wait for 3 seconds to ensure the command has completed
    Sleep(3000);

    std::string filePath = "z:\\grub\\grubenv";
    std::ifstream inputFile(filePath);
    std::string content;
    std::string line;
    int lineNumber = 0;

    if (inputFile.is_open()) {
        while (getline(inputFile, line)) {
            lineNumber++;
            if (lineNumber == 3) {
                size_t pos = line.find("next_entry=");
                if (pos != std::string::npos) {
                    line.insert(pos + 11, "0");
                }
            }
            content += line + "\n";
        }
        inputFile.close();
    } else {
        std::cerr << "Unable to open file";
        return 1;
    }

    // Remove "#" from the fourth line
    lineNumber = 0;
    std::string newContent;
    std::istringstream contentStream(content);
    while (getline(contentStream, line)) {
        lineNumber++;
        if (lineNumber == 4) {
            line.erase(std::remove(line.begin(), line.end(), '#'), line.end());
        }
        newContent += line + "\n";
    }

    // Ensure the file size is exactly 1024 bytes
    if (newContent.size() < 1024) {
        newContent.append(1024 - newContent.size(), ' ');
    } else if (newContent.size() > 1024) {
        newContent = newContent.substr(0, 1024);
    }

    std::ofstream outputFile(filePath);
    if (outputFile.is_open()) {
        outputFile << newContent;
        outputFile.close();
    } else {
        std::cerr << "Unable to open file";
        return 1;
    }

    return 0;
}