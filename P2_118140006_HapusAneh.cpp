// NIM: 118140006
// Nama : Fitra Salam S. Nagalay
// Tanggal : 12/11/2020
// Deskripsi : Hapus Aneh

#include<bits/stdc++.h>
using namespace std;
typedef int infotype;
typedef struct TElmtList *address;
typedef struct TElmtList{
    infotype info;
    address next;
} ElmtList;

struct List {
    address first;
};

bool IsEmpty(List L){
    return ((L).first == NULL);
}

void CreateEmpty(List *L){
    (*L).first = NULL;
}

void Deallocation(address hapus){
    free(hapus);
}

address Allocation(infotype x){
    address NewElmt;
    NewElmt = (ElmtList*) malloc (sizeof(ElmtList));

    NewElmt->info = x;
    NewElmt->next = NULL;

    return NewElmt;
}

void InsertFirst(List *L, infotype x){
    address NewElmt;
    NewElmt = Allocation(x);

    if(NewElmt != NULL){
        NewElmt->next = (*L).first;
        (*L).first = NewElmt;
    }
}

void InsertAfter(address *PredElmt, infotype x){
    address NewElmt;
    NewElmt = Allocation(x);

    if(NewElmt != NULL){
        NewElmt->next = (*PredElmt)->next;
        (*PredElmt)->next = NewElmt;
    }
}

void InsertLast(List *L, infotype x){
    if(IsEmpty(*L)){
        InsertFirst(&(*L), x);
    } else {
        address temp;
        temp = (*L).first;
        while (temp->next != NULL){
            temp = temp->next;
        }
        InsertAfter(&temp, x);
    }
}

void DeleteFirst(List *L, infotype *hapus){
    if(!IsEmpty(*L)){
        address temp;
        temp = (*L).first;
        *hapus = temp->info;
        (*L).first = (*L).first->next;
        temp->next = NULL;
        Deallocation(temp);
    }
}

void DeleteAfter(address pred, infotype *hapus){
    if(pred->next != NULL){
        address temp;
        temp = pred->next;
        *hapus = temp->info;
        pred->next = temp->next;
        temp->next = NULL;
        Deallocation(temp);
    }
}

void DeleteLast(List *L, infotype *hapus){
    if(!IsEmpty(*L)){
        address temp, predTemp;
        predTemp = NULL;
        temp = (*L).first;
        while (temp->next != NULL){
            predTemp = temp;
            temp = temp->next;
        }

        if(temp == (*L).first){
            DeleteFirst(&(*L), &(*hapus));
        } else {
            DeleteAfter(predTemp, &(*hapus));
        }
    }
}

void printInfo (List L){

    cout<<"[";
    if(L.first != NULL){
        address P = L.first;
        while(P->next != NULL){
            cout<<P->info<<", ";
            P = P->next;
        }
        cout<<P->info;
    }
    cout<<"]"<<endl;
}

void Hapus (List *L){

    address temp = L->first;
    infotype del1,del2;
    
    while(temp != NULL){
        if(temp->info % 2 == 0) {
            DeleteFirst(L, &del1);
        }
        if(temp->info % 3 == 0) DeleteLast(L, &del2);
        temp = temp->next;
    }
}

int main() {
    List L;
    CreateEmpty(&L);
    int n,x;
    cin>>n;
    for (int i =0;i<n;i++){
        cin>>x;    
        InsertLast(&L,x);
    }
    Hapus(&L);
    printInfo(L);
    return 0;
}


