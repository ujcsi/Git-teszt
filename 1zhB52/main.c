#include <stdio.h>

int main() {
    for (int i = 0; i <= 99; i++) { // Az egész rész (0-99)
        int reversed = (i % 10) * 10 + (i / 10); // Az egész rész fordítottja
        printf("%d\n",reversed);

        for (int j = 0; j <= 99; j++) { // tizedespont

            if (j==reversed){

                  printf("%d.%02d\n",i, j);


            }
        }

    }
}
