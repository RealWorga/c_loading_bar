#include <stdio.h>
#include <windows.h>

int main() {
    int i, j;
    int total_duration = 10000; // 10 seconds in milliseconds
    int steps = 20;
    int step_duration = total_duration / steps;

    printf("Loading...\n");
    for (i = 0; i <= steps; i++) {
        printf("\r[");
        for (j = 0; j < i; j++) {
            printf("#");
        }
        for (j = i; j < steps; j++) {
            printf(".");
        }
        printf("] %d%%", (i * 100) / steps);

        fflush(stdout);
        Sleep(step_duration);
    }

    printf("\nLoading complete!\n");

    return 0;
}