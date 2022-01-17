#include "_2_LinkList/LinkList.h"
int main() {
    LinkedList list;
    initializeList(&list);
    addTail(&list,1);
    addTail(&list,2);
    addTail(&list,3);
    addTail(&list,5);
    PrintLinkList(&list);
    delete(&list,getNode(&list,5));
    PrintLinkList(&list);
    return 0;
}
