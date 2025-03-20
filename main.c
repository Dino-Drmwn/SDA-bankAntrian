#include <stdio.h>
#include "Queue.h"

int main() {
    Queue q;
    initQueue(&q);
    int lastNumber = 0;
    int choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Ambil Antrian\n");
        printf("2. Proses Antrian\n");
        printf("3. Cetak Antrian\n");
        printf("4. Keluar\n");
        printf("Pilih menu (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                lastNumber++;
                enqueue(&q, lastNumber);
                printQueue(&q);
                break;
            case 2:
                if (!isQueueEmpty(&q)) {
                    int servedNumber = dequeue(&q);
                    printf("Nomor antrian %d sedang diproses.\n", servedNumber);
                } else {
                    printf("Tidak ada antrian yang perlu diproses.\n");
                }
                printQueue(&q);
                break;
            case 3:
                printQueue(&q);
                break;
            case 4:
                printf("Terima kasih, program selesai.\n");
                return 0;
            default:
                printf("Pilihan tidak valid, coba lagi.\n");
                break;
        }
    }

    return 0;
}

