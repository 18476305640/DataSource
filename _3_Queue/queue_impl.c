#include "queue.h"

//初始化队列
int initQueue(Queue *queue) {
    //创建一个连续的空间，逻辑上是尾首连通的
    queue->queueArr = (ElemType *)malloc(sizeof(ElemType)*INIT_SIZE);
    //初始化各个变量
    queue->capacity=INIT_SIZE;
    queue->head = 0;
    queue->tail = -1;
    queue->length = 0;
}
//弹出
ElemType queue_pop(Queue *queue) {
    //判断是否有元素
    if (queue->length <= 0) return FALSE;
    //计算出弹出后head指向的索引，在有元素的基础上弹出是“安全”的
    int new_head_index = (queue->head+1 > queue->capacity-1)?0:queue->head+1;
    //弹出
    ElemType elemType = queue->queueArr[queue->head];
    //维护一些属性
    queue->head = new_head_index;
    queue->length--;
    //返回弹出的元素
    return elemType;

}
//入队
int queue_push(Queue *queue, ElemType elemType) {
    //检查容量，如果容量不能再満了，扩容
    if(queue->length >= queue->capacity) {
        printf("正在调整容量:%d-%d~",queue->head,queue->tail);
        //创建新的容器空间
        ElemType *new_queueArr= (ElemType *)malloc(sizeof(ElemType)*queue->capacity*INCREASE);
        //判断是顺还是逆，因为两者获取的旧容器中的元素不一样
        if (queue->tail >= queue->head) {
            for (int i = queue->head; i <= queue->tail; ++i) {
                new_queueArr[i - queue->head] = queue->queueArr[i];
            }
        }else {
            //将尾距窗口尾的元素放入新容器中
            for (int i = queue->head; i <= queue->capacity-1; ++i) {
                new_queueArr[i - queue->head] = queue->queueArr[i];
            }
            //将索引0到头索引的元素放入新容器中
            for (int i = 0; i <= queue->tail; ++i) {
                new_queueArr[queue->capacity - queue->head + i] = queue->queueArr[i];
            }
        }
        //维护好一些属性
        queue->head = 0;
        queue->tail = queue->length-1;
        queue->capacity = queue->capacity*INCREASE;
        queue->queueArr = new_queueArr;
        printf("%d-%d\n",queue->head,queue->tail);

    }
    //在存在可容纳空间下，计算出插入的索引位置
    int insert_index = (queue->tail+1 > queue->capacity-1)?0:queue->tail+1;
    //入队
    queue->queueArr[insert_index] = elemType;
    //维护属性
    queue->tail = insert_index;
    queue->length++;
    return SUCCESS;

}
void PrintQueue(Queue *queue) {

    printf("输出队列：");
    if (queue->length <= 0) {
        printf("%空栈！容量为%d~\n",queue->capacity);
        return;
    }
    for (int i = 0; i < queue->capacity; ++i) {
        if (       (queue->tail >= queue->head && (i >= queue->head && i <= queue->tail  ))
                || ((queue->tail < queue->head && ((i >= queue->head && i<=queue->capacity-1) || (i <= queue->tail && i >= 0))) )
            ) {
            if (i == queue->head) {
                //头
                printf("\t头=>[%d](%d)-",i,queue->queueArr[i]);
            }else if(i == queue->tail) {
                //尾
                printf("[%d](%d)<=尾\t",i,queue->queueArr[i]);

            } else {
                printf("[%d](%d)-",i,queue->queueArr[i]);
            }

        }else {
            printf("[%d](NULL)",i);
        }
    }

}
