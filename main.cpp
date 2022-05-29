#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;
int index;
int najgolemaCifra();
void dodavanjeVofStream();

int main()
{
    ofstream podredeniKarakteri("INKI890-Proekt3.txt");
    cin>>index;
    int najgolemaIzdvoenaCifra = najgolemaCifra();
    cout<<najgolemaIzdvoenaCifra<<endl;

    vector <char> karakteri;
    string sodrzina = "Yo his palms are sweaty knees weak arms are heavy theres vommit on his sweater already moms spaghetti";

    for(int i=0; i<sodrzina.size();i++){
        karakteri.push_back((sodrzina[i] + najgolemaIzdvoenaCifra));
    }
    sort(karakteri.begin(), karakteri.end());

    sodrzina="";
    for(int j=0; j<karakteri.size(); j++) {

        sodrzina.push_back(karakteri[j]);
    }
cout<<sodrzina;
podredeniKarakteri<<sodrzina;
    return 0;
}
// funkcija za izdvojuvanje najgolema cifra od index
int najgolemaCifra(){
    int najgolemaIzdvoenaCifra;
    int a,b,c;
    a = index/100;
    b = (index%100)/10;
    c = index%10;
    if(a > b && a > c) {
        najgolemaIzdvoenaCifra = a;
    }
    else if(b > a && b > c) {
        najgolemaIzdvoenaCifra = b;
    }
    else if(c > a && c > b) {
        najgolemaIzdvoenaCifra = c;
    }
    return najgolemaIzdvoenaCifra;
};




