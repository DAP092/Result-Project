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
    int input;
    if (head == NULL){
        head = new node;
        cout<<"Masukan Data: ";
        cin>>input;
        head->data = input;
        head->next = NULL;
    }
    else{
        tail = head;
        while (tail->next !=head){
            tail = tail->next;
        }
        tail->next = new node;
        cout<<"Masukan data: ";
        cin>>input;
        tail->next->data = input;
        tail->next->next = head;
        tail = tail->next;
    }
    cout<<endl;
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
    char huruf;
    short pil;

    do{
        system("cls");
        cout<<"===================================================="<<endl;
        cout<<"   Menu Program Queue single linked circular list   "<<endl;
        cout<<"===================================================="<<endl;
        cout<<"1. Enqueque"<<endl;
        cout<<"2. Dequeue"<<endl;
        cout<<"3. Tampil"<<endl;
        cout<<"4. Full"<<endl;
        cout<<"5. Empty"<<endl;
        cout<<"6. Clear"<<endl;

        cout<<"Masukan pilihan anda: ";
        cin>>pil;

        switch (pil){
        case 1:
            enqueue();
            break;
        
        case 2:
            dequeue();
            break;
        
        case 3:
            tampil();
            break;
        
        case 4:
            full();
            break;

        case 5:
            empty();
            break;

        case 6:
            clear();
            break;
        
        default:
            break;
        }
    }
    while (pil !=7);
    system("pause");
}
