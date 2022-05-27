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




