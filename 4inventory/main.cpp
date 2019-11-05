#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int jml_item;
    int pilih;
    vector<string> item{"Pedang 10","Rudal 56","Clurit 2","Nulir 999","Berlian 8998"};
    vector<int> stat{2,3,4,5,6};
    vector<string> inven;
    vector<string>::iterator i;
    int acak;
    int hapus;
    char jawab='y';

    cout<<"Program Inventory\n"<<endl;
    cout<<"Jumlah item tersedia : "<<item.size()<<endl;
    cout<<"Masukkan jumlah item : ";cin>>jml_item;

    while(jawab=='y'){
        cout<<"\nMenu Inventory : "<<endl;
        cout<<"1. Tampil Item "<<endl;
        cout<<"2. Tambah Item "<<endl;
        cout<<"3. Hapus Item "<<endl;
        cout<<"Masukkan Pilihan : ";cin>>pilih;

        if(pilih==1){
            if(inven.empty()) cout<<"Item Kosong"<<endl;
            else{
                for(i=inven.begin();i != inven.end();++i){
                    cout<<*i<<endl;
                }
            }
        }
        else if(pilih==2){
            if(inven.size()==jml_item) cout<<"Item Penuh"<<endl;
            else{
                srand(static_cast<unsigned int>(time(0)));
                acak = rand()%item.size();
                cout<<"Anda Mendapat : "<<item[acak]<<endl;
                inven.push_back(item[acak]);
            }
        }
        else if(pilih==3){
            if(inven.empty()) cout<<"Item Kosong"<<endl;
            else{
                for(i=inven.begin();i != inven.end();++i){
                    cout<<*i<<endl;
                }
                cout<<"\nItem berapa yang akan dihapus ?";cin>>hapus;
                if(hapus>inven.size()) cout<<"Item gagal dihapus"<<endl;
                else{
                    inven.erase(inven.begin()+hapus-1);
                    cout<<"Item berhasil dihapus"<<endl;
                }
            }
        }
        cout<<"\nIngin melanjutkan sistem inventory ? (y/n)";cin>>jawab;
    }
    return 0;
}
