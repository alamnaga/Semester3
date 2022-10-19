// NIM: 118140006
// Nama : Fitra Salam S. Nagalay
// Tanggal : 12/11/2020
// Deskripsi : Besar Dan Kecil

#include<bits/stdc++.h>
using namespace std;
typedef int tipe;
typedef struct TElmtList *jalan;
typedef struct TElmtList
{
    tipe info;
    jalan next;
} ElmtList;
typedef struct List
{
    jalan first;
};
void CreateEmpty(List *L)
{
    (*L).first = NULL;
}
bool IsEmpty(List L)
{
    return ((L).first == NULL);
}
jalan Allocation(tipe x)
{
    jalan NewElmt;
    NewElmt = (ElmtList*) malloc (sizeof(ElmtList));
    NewElmt->info = x;
    NewElmt->next = NULL;
    return NewElmt;
}
void InsertFirst(List *L,tipe x)
{
    jalan NewElmt;
    NewElmt = Allocation(x);
    if (NewElmt != NULL)
        {
            NewElmt->next = (*L).first;
            (*L).first = NewElmt;
        }
}
void printInfo (List L)
{
    tipe min,max;
    if(!IsEmpty(L))
    {
        jalan P =(L).first;
        min=max=P->info;
        while(P->next!=NULL)
        {
            if(min>P->info)
            min=P->info;
            if(max<P->info)
            max=P->info;
            P =P->next;
        }
        if(min>P->info)
        min=P->info;
        if(max<P->info)
        max=P->info;
        cout<<max<<endl<<min;
    }
}
int main()
{
    List L;
    CreateEmpty(&L);
    int n,x;
    cin>>n;
    for (int i =0;i<n;i++)
    {
        cin>>x;
        InsertFirst(&L,x);
    }
    printInfo(L);
    return 0;
}

