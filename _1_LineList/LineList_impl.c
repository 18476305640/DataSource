#include "LineList.h"
int CheckIndexIegality_Insert(LineList *L, int index) {
    if (index < 0 || index > L->length) {
        fprintf(stderr, "\nindex: %d, iIllegal! \n", index);
        exit(-1);
    }
    return TRUE;
}
int CheckIndexIegality_Get(LineList *L, int index) {
    if (index < 0 || index >= L->length) {
        fprintf(stderr, "\nindex: %d, iIllegal! \n", index);
        exit(-1);
    }
    return TRUE;
}
void OutputErrorMessage(char *msg) {
    fprintf(stderr, "\n%s\n", msg);
    exit(-1);
}
int Init(LineList *L) {
    L->elem = (ElemType *)malloc(LIST_SIZE*sizeof(ElemType));
    if (!L->elem) {
        return ERROR;
    }
    L->length = 0;
    L->capacity=LIST_SIZE;
    printf("_1_LineList inited!\n");
    return TRUE;
}
int Destroy(LineList *L) {
    if (L->elem != NULL) {
        free(L->elem);
        L->elem = NULL;
        L->length = 0;
        L->capacity = 0;
    }

}
int Push(LineList *L, ElemType elem) {
    DilatationCheck(L); //检查容量
    L->elem[L->length] = elem;
    L->length++;
    return TRUE;

}
int Insert(LineList *L,int index, ElemType elem) {
    CheckIndexIegality_Insert(L,index); //检查索引合法性
    DilatationCheck(L); //检查容量
    if(index  == L->length) {
        //追加操作
        Push(L,elem);
    }else {
        //插入操作
        for (int i = L->length-1; i >= index ; --i) {
            L->elem[i+1] = L->elem[i];
        }
        L->elem[index] = elem;
        L->length++;
    }
    L->elem[index];
    return TRUE;
}
ElemType GetByIndex(LineList *L, int index) {
    CheckIndexIegality_Get(L,index); //检查索引的合法性
    return L->elem[index];

}
int FindElem(LineList *L,ElemType elem) {
    int pos = -1;
    for (int i = 0; i < L->length; ++i) {
        if (L->elem[i] == elem ) {
            return pos = i;
        }
    }
    return pos;

}
void PrintLineList(LineList *L) {
    for (int i = 0; i < L->length; ++i) {
        if(i != L->length-1) {
            printf("[%d]->%d, ",i, L->elem[i]);
        }else {
            printf("[%d]->%d\n",i, L->elem[i]);
        }

    }

}
int DeleteListElem(LineList *L, int index) {
    CheckIndexIegality_Get(L,index);
    for (int i = index; i < L->length-1; ++i) {
        L->elem[i] = L->elem[i+1];
    }
    L->length--;
    return TRUE;
}
int UpdateElemByIndex(LineList *L, int index, ElemType elem) {
    CheckIndexIegality_Get(L,index);
    free(L->elem[index]);
    L->elem[index] = elem;

    return TRUE;
}
int DilatationCheck(LineList *L) {
    if (L->length >= L->capacity) {
        CapacityDilatation(L, (int)(L->capacity*ADD_SIZE));
        return FALSE;
    }
    return TRUE;

}
int CapacityDilatation(LineList *L, int newCapacity) {

    if (newCapacity <= L->capacity) {
        //这不是扩容
        return FALSE;
    }else {
        //扩容
        ElemType *et = (ElemType *)malloc(newCapacity*sizeof(ElemType));
        for (int i = 0; i < L->length; ++i) {
            et[i] = L->elem[i];
        }
        L->elem = et;
        L->capacity = newCapacity;
        printf("_1_LineList new capacity: %d!\n", L->capacity);
        return TRUE;
    }
}