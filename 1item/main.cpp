#include <iostream>
#include <string>

using namespace std;

int main()
{
    int stat=0,hebat=0,lemah=0;
    string item = "", item_sblm = "";
    string item_hebat="", item_lemah="";
    char pindah = 'y';
    bool item_pertama = true;

    while(pindah=='y'){
        cout<<"Masukkan nama item : ";cin>>item;
        cout<<"Masukkan stat : ";cin>>stat;

        cout<<"Item anda : "<<item<<endl;
        cout<<"Stat : "<<stat<<endl;

        if(item_pertama==true){
            cout<<"\nItem sebelum : Nothing"<<endl;
            item_sblm = item;

            item_hebat = item;
            hebat = stat;
            cout<<"Item terhebat : "<<item_hebat<<endl;
            item_lemah = item;
            lemah = stat;
            cout<<"Item terlemah : "<<item_lemah<<endl;
            item_pertama = false;
        }
        else{
            cout<<"\nItem sebelum : "<<item_sblm<<endl;
            item_sblm = item;

            if(stat>=hebat){
                item_hebat = item;
                hebat = stat;
                cout<<"Item terhebat : "<<item_hebat<<endl;
            }
            else{
                cout<<"Item terhebat : "<<item_hebat<<endl;
            }

            if(stat<=lemah){
                item_lemah = item;
                lemah = stat;
                cout<<"Item terlemah : "<<item_lemah<<endl;
            }
            else{
                cout<<"Item terlemah : "<<item_lemah<<endl;
            }
        }
        cout<<"\nInput item lagi ? (y/n)";cin>>pindah;
        cout<<"\n";
    }
    return 0;
}
