#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

void wStrCopyNew(wchar_t zrodlo[], wchar_t docelowa[]){
    int n = 0;
    while (zrodlo[n] != '\0'){
        docelowa[n] = zrodlo[n];
        n++;
    }
    docelowa[n] = '\0';
}

int main()
{
    wchar_t napis1[] = L"DRZEWO";
    wchar_t napis2[] = L"DROGOWSKAZ";
    wStrCopyNew(napis1,napis2);
    wprintf(L"%s %s\n", napis1, napis2);
    return 0;
}
