#include "_3_Queue/queue.h"
int main() {
    Queue queue;
    initQueue(&queue);

    for (int i = 0; i < 5; ++i) {
        queue_push(&queue, i);
    }
    for (int i = 0; i < 3; ++i) {
        queue_pop(&queue);
    }
    for (int i = 0; i < 2; ++i) {
        queue_push(&queue, i);
    }


    PrintQueue(&queue);
    return 0;
}
