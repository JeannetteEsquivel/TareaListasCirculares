
#include <malloc.h>
#include <stdlib.h>
#include "listaCircular.h"

listaCircular::listaCircular() {
    headNode = NULL;
    tailNode = NULL;
}

listaCircular::listaCircular(const listaCircular& orig) {
}

listaCircular::~listaCircular() {
}

void listaCircular::insertIntoList(char value) {
    NODEPTR newPtr, tempPtr, previousPtr;
    //primero asignar dinamicamente la memoria
    newPtr = (NODEPTR) malloc(sizeof (NODE));
    newPtr->data = value;
    //newPtr->nextPtr = NULL;
    tempPtr = headNode;

    if (tempPtr == NULL) {
        headNode = newPtr;
        tailNode = newPtr;
        headNode->nextPtr = newPtr;
    } else {
        tailNode->nextPtr = newPtr;
        newPtr->nextPtr = tempPtr;
        headNode = newPtr;
    }
}//insertarInicio

void listaCircular::insertInOrder(char value) {
    NODEPTR newPtr, tempPtr, previousPtr;
    //primero asignar dinamicamente la memoria
    newPtr = (NODEPTR) malloc(sizeof (NODE));
    newPtr->data = value;
    //newPtr->nextPtr = NULL;
    tempPtr = headNode->nextPtr;
    while (tempPtr != headNode && tempPtr->data != value) {
        if (newPtr->data > tempPtr->data) {
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = tempPtr;

        }
        previousPtr = tempPtr;
        tempPtr = tempPtr->nextPtr;
    }

    //    if (tempPtr == NULL) {
    //        headNode = newPtr;
    //        tailNode = newPtr;
    //        headNode->nextPtr = newPtr;
    //    } else {
    //        tailNode->nextPtr = newPtr;
    //        newPtr->nextPtr = tempPtr;
    //        headNode = newPtr;
    //    }

}//insertarInicio

void listaCircular::insertIntoListLast(char value) {
    NODEPTR newPtr;
    //primero asignar dinámicamente la memoria
    newPtr = (NODEPTR) malloc(sizeof (NODE));
    newPtr->data = value;
    newPtr->nextPtr = NULL;

    tailNode->nextPtr = newPtr;

    newPtr->nextPtr = headNode;
    tailNode = newPtr;
    //newPtr->prevPtr = tailNode;


}//insertIntoListLast

void listaCircular::deleteList(char value) {
    NODEPTR tempPtr, previousPtr;
    tempPtr = headNode->nextPtr;
    if (headNode->data == value) {
        tailNode->nextPtr = tempPtr;

    } else {
        while (tempPtr != headNode && tempPtr->data != value) {
            tempPtr = tempPtr->nextPtr;
        }//while
    }//else
    if (tempPtr->data == value) {
        //previousPtr->nextPtr=tempPtr->nextPtr;
        tempPtr->prevPtr->nextPtr = tempPtr->nextPtr;
        //tempPtr->nextPtr->prevPtr = tempPtr->prevPtr;
    }

}//deleteList

void listaCircular::actualizar(char value1, char value2) {
    NODEPTR tempPtr, previousPtr;
    previousPtr = NULL;
    tempPtr = headNode;
    while (tempPtr != NULL && tempPtr->data != value1) {
        previousPtr = tempPtr;
        tempPtr = tempPtr->nextPtr;
    }
    if (tempPtr->data == value1) {
        tempPtr->data = value2;
    }
}//actualizar

void listaCircular::printList() {
    //nodo temporal
    NODEPTR tempNode = headNode->nextPtr;
    bool f = true;
    if (headNode != NULL) {
        printf("%c-->", headNode->data);
        while (tempNode != headNode) {
            printf("%c-->", tempNode->data);
            tempNode = tempNode->nextPtr;
            f = false;
        }
        printf("\n\n");
    } else {
        printf("the list is empaty.\n\n");
    }
}//printList

//void listaCircular::printList1() {
//    //nodo temporal
//    NODEPTR tempNode = headNode;
//    bool f = true;
//    if (tempNode != NULL) {
//        
//        while (tempNode->nextPtr != headNode||f) {
//            printf("%c-->", tempNode->data);
//            tempNode = tempNode->nextPtr;
//            f = false;
//        }
//        printf("\n\n");
//    } else {
//        printf("the list is empaty.\n\n");
//    }
//}//printList

//void listaCircular::printList() {
//    //nodo temporal
//    NODEPTR tempNode = headNode->nextPtr;
//    bool f = true;
//    if (headNode != NULL) {
//        printf("%c-->", headNode->data);
//        while (tempNode != headNode) {
//            printf("%c-->", tempNode->data);
//            tempNode = tempNode->nextPtr;
//            f = false;
//        }
//        printf("\n\n");
//    } else {
//        printf("the list is empaty.\n\n");
//    }
//}//printList
