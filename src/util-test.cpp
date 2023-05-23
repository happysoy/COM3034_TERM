#include <iostream>
#include "utils.cpp"

void utilTest()
{
    wchar_t kiyeok = L'ㄱ';
    wchar_t nieun = L'ㄴ';
    wchar_t zzapNieun = L'ﾤ';
    wchar_t a = L'a';
    cout << koreanCharToUnicodeString(kiyeok) << endl;
    cout << koreanCharToUnicodeString(nieun) << endl;
    cout << koreanCharToUnicodeString(zzapNieun) << endl;
    cout << koreanCharToUnicodeString(a) << endl;
}