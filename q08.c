#include <stdio.h>

int main() {
    int count = 40;
    
    while (count <= 400) {
        printf("%d", count);
        
        if (count < 400) {
            printf("\n");
        }
        
        count += 10;
    }
    
    printf("\n");
    
    return 0;
}

/*
40
50
60
70
80
90
100
110
120
130
140
150
160
170
180
190
200
210
220
230
240
250
260
270
280
290
300
310
320
330
340
350
360
370
380
390
400
*/