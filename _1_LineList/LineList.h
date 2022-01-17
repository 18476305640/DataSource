#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define LIST_SIZE 50
#define ADD_SIZE 1.5
typedef int ElemType; //定义数据元素类型
typedef struct {
    ElemType  *elem; //存储空间基址
    int length; //当前长度
    int capacity; //当前分配的存储容量
} LineList;
//检查index的合法性
int CheckIndexIegality(LineList *L, int index);
void OutputErrorMessage(char *msg);


int Init(LineList *L);
int Destroy(LineList *L);
int Push(LineList *L, ElemType elem);
int Insert(LineList *L,int index, ElemType elem);
int DeleteListElem(LineList *L, int index);
int UpdateElemByIndex(LineList *L, int index, ElemType elem);
ElemType GetByIndex(LineList *L, int index);
int FindElem(LineList *L,ElemType elem);
//输出线性表
void PrintLineList(LineList *L);
int CapacityDilatation(LineList *L, int newCapacity);
int DilatationCheck(LineList *L);
