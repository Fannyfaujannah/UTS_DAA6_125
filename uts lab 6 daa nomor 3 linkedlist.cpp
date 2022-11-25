#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct TNode{
    int detaildata;
    TNode *next;
};

TNode *head, *tail;

void init (){
    head = NULL;
    tail = NULL;
}

int isEmpty(){
    if(tail==NULL)return 1;
    else return 0;
}

void insertDepan(int detaildataterbaru)
{
    TNode *terbaru;
    terbaru = new TNode;
    terbaru->detaildata = detaildataterbaru;
    terbaru->next = NULL;
    if(isEmpty()==1)
    {
        head=tail=terbaru;
        tail->next=NULL;
    }else
    {
        terbaru->next = head;
        head=terbaru;
    }
    cout<<"Data masuk\n";
}

void tampil(){
    TNode *bantu;
    bantu=head;
        if(isEmpty()==0)
        {
            while(bantu!=NULL)
            {
                cout<<bantu->detaildata<<" ";
                bantu=bantu->next;
            }
        }else cout <<"Masih kosong\n";
}

void menghapusDepan()
{

    TNode *menghapus;
    int d;
    if (isEmpty()==0)
    {
        if(head!=tail)
        {
            menghapus=head;
            d=menghapus->detaildata;
            head=head->next;
            delete menghapus;
        }else
        {
            d=tail->detaildata;
            head=tail=NULL;
        }
    cout<<d<<"terhapus";
    }else cout<<"Masih kosong\n";
}
void clear()
{
    TNode *bantu, *menghapus;
    bantu =head;
    while(bantu!=NULL)
    {
        menghapus=bantu;
        bantu=bantu->next;
        delete menghapus;
    }
    head = NULL;
    printf("clear");
}

int main()
{
    int pil, detaildataterbaru;
    do
    {
        system("clear");
        cout<<endl;
        cout<<" ************ "<<endl;
        cout<<" =    CONTOH PROGRAM LINKED LIST    ="<<endl;
        cout<<" ************ "<<endl;
        cout<<" = 1. Insert di Depan Data          ="<<endl;
        cout<<" = 2. Delete di Depan Data          ="<<endl;
        cout<<" = 3. Tampil di Data  Data          ="<<endl;
        cout<<" = 4. Clear Data                    ="<<endl;
        cout<<" = 5. Exit                          ="<<endl;
        cout<<" ************ "<<endl;
        cout<<" Masukan Pilihan : ";cin>>pil;
        switch (pil)
        {
            case 1: system("clear");{
                cout<<"Masukan Data = ";cin>>detaildataterbaru;
                insertDepan(detaildataterbaru);
                break;
            }
            case 2: system("clear");{
                menghapusDepan();
                break;
            }
            case 3: system("clear");{
                tampil();
                break;
            }
            case 4: system("clear");{
                clear();
                break;
            }
            case 5: system("clear");{
                return 0;
                break;
            }
            default : system("clear");
            {
                cout<<"\n Maaf, Pilihan yang anda pilih tidak tersedia!";
            }
        }
        getch();
    }
    while (pil!=7);
}
