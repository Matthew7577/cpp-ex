#include <iostream>
#include <iomanip>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

void waitForSecond(double seconds)
{
#ifdef _WIN32
    Sleep(static_cast<DWORD>(seconds * 1000));
#else
    usleep(static_cast<useconds_t>(seconds * 1000000));
#endif
}

int main()
{
    constexpr int total = 100;
    constexpr int barWidth = 20;
    for (int i = 0; i <= total; ++i)
    {
        cout << "\r進度 | [";
        int pos = i * barWidth / total;
        for (int j = 0; j < barWidth; ++j)
            cout << (j < pos ? '#' : '-');
        cout << "] " << setw(3) << i << "%" << flush;
        if (i == 99)
            waitForSecond(15);
        else
            waitForSecond(0.5);
    }
    cout << endl;
    return 0;
}