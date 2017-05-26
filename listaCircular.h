

#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H

class listaCircular {
public:
    listaCircular();
    listaCircular(const listaCircular& orig);
    virtual ~listaCircular();
    void insertIntoList(char value);
    void insertIntoListLast(char value);
    void insertInOrder(char value);
    void deleteList(char value);
    void actualizar(char value1,char value2);
    void printList();
    
private:
     struct node {
        char data; 
        struct node *nextPtr,*prevPtr;
    };

    /*variablesyp*/
    typedef struct node NODE;
    typedef NODE *NODEPTR;
    
    NODEPTR headNode;/*headNode ó startNode;*/
    NODEPTR tailNode;
};

#endif /* LISTACIRCULAR_H */

