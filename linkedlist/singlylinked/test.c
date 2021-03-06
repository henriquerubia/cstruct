/**
 * CStruct (C) 2019-2021 https://github.com/henriquerubia/cstruct
 * 
 * @author Carlos Henrique Rubia Barbosa <carlos.h.barbosa@edu.ufes.br>
 * 
 * See LICENSE for terms and licensing notice.
 */

#include <stdio.h>
#include "linkedlist.h"

// dummy test
int main() {
    List *lst = createlst();

    // Cria 3 nós.
    InfoList *info1 = lstinfo(87);
    insertlastlst(lst, info1);

    InfoList *info2 = lstinfo(23);
    insertlastlst(lst, info2);

    InfoList *info3 = lstinfo(543);
    insertlastlst(lst, info3);

    // Imprime lista com elementos adicionados.
    // Output: [ (87) (23) (543) ]
    printlst(lst);

    // Inverte elementos da lista.
    // Output: [ (543) (23) (87) ]
    reverselst(lst);
    printlst(lst);

    // Ordena elementos da lista.
    // Output: [ (23) (87) (543) ]
    sortlst(lst);
    printlst(lst);

    // Remove elemento na primeira posição da lista.
    // Output: [ (87) (543) ]
    delfirstlst(lst);
    printlst(lst);

    return 0;
}