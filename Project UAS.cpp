/*
    Project Ujian Akhir Semester Struktur data kelompok 2
*/

#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

node *head = NULL, *bantu, *hapus, *insert, *cari, *tail;
int x;

//pengerjaan "Tampil" -> Bagus Ari Sudamto
void tampil(){
    if (head == NULL){
        cout<<"Linked list kosong"<<endl;
        return;
    }
    node *current = head;
    while (current !=NULL){
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
}

//pengerjaan "Enqueque" -> Mediana Nurlaili
void enqueue(){
    int n;
    insert = new node;
    insert->data = n;
    insert->next = NULL;
    tail = insert;

    if (head == NULL;){
}

//pengerjaan "Dequeue" -> Sulthon Febriawan
void dequeue(){

}

//pengerjaan "Full" -> Ryanveno Pasha
void full(){
    int bil;
    node *current = head;
    while (current !=NULL){
        bil++;
        current=current->next;
    }
    if (bil>=10){
        cout<<"Linked list telah penuh"<<endl;
    }
    else{
        cout<<"Linked list belum penuh"<<endl;
    }
    
}

//pengerjaan "Empty" -> Dimas Agus Prasetyo
void empty(){
    if (head == NULL){
        cout<<"Linked list kosong"<<endl;
    }
    else{
        cout<<"Linked list belum kosong"<<endl;
    }
}

//pengerjaan "Clear" -> Angga Pradipa
void clear(){
    
}

//Membuat program menu "Queue Single Linked Circular List" -> Dimas Agus Prasetyo
int main(){
    enqueue();
    dequeue();
    tampil();
    full();
    empty();
    clear();
    system("pause");
}
