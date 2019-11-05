#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <ctime>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    string kata="";
    string huruf="";
    int acak=0;
    int jml_huruf=0;
    vector<int> temp;
    vector<int>::iterator j;

    cout<<"Masukkan kata : ";cin>>kata;
    jml_huruf=kata.size();
    cout<<"Jumlah huruf dari "<<kata<<" adalah : "<<jml_huruf<<endl;
    srand(static_cast<unsigned int>(time(0)));

    for(int i=0; i<jml_huruf;i++){
        temp.push_back(i);
    }
    random_shuffle(temp.begin(),temp.end());
    for(j = temp.begin();j != temp.end();++j){
        cout << kata[*j];
    }
    return 0;
}
