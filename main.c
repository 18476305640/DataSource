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
        queue_push(&queue, i+20);
    }
    for (int i = 0; i < 500; ++i) {
        queue_push(&queue, i+30);
    }
    for (int i = 0; i < 5; ++i) {
        queue_pop(&queue);
    }


    PrintQueue(&queue);
    return 0;
}
