
#include <cstdlib>

#include "listaCircular.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    listaCircular listaCircular;
    listaCircular.insertIntoList( 'a');
    //listaCircular.insertIntoList( 'b');
    listaCircular.insertIntoList( 'c');
    listaCircular.insertIntoList( 'd');
    listaCircular.insertIntoList( 'e');
    
    listaCircular.insertInOrder( 'b');
    
//    listaCircular.insertIntoList( 'g');
//    listaCircular.insertIntoList( 'h');

    listaCircular.printList();
    
    listaCircular.actualizar( 'c','f');
    
    listaCircular.insertIntoListLast( 'z');
    listaCircular.insertIntoListLast( 'e');
    listaCircular.printList();
    
//    listaCircular.deleteList( 'a');
//    listaCircular.printList();
    
    
    listaCircular.printList();
//    listaCircular.deleteList( 'b');
//    listaCircular.printList();
//    listaCircular.deleteList( 'c');
//    listaCircular.printList();
//    listaCircular.deleteList( 'f');
//    listaCircular.printList();
    return 0;
}

