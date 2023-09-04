#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <windows.h>

void comprueba() {
    static time_t t;
    static struct tm *tm;
    static char fechayhora[100];
    t = time(NULL);
    tm = localtime(&t);

    strftime(fechayhora, 100, "%H:%M:%S", tm);
    if ((fechayhora[1] == '3' && fechayhora[3] == '3') || (fechayhora[3] == '3' && fechayhora[4] == '3') ||
        (fechayhora[4] == '3' && fechayhora[6] == '3') || (fechayhora[6] == '3' && fechayhora[7] == '3')) {
        printf("%s , como q 33? , repiteme ese numerin\n", fechayhora);
    }
    Sleep(1000);
}

int main() {
    while (true) {
        comprueba();
    }
}
