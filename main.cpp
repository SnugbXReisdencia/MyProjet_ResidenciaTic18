#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{

    system("clear");

    string nome;

    vector<string> nomes; 

    cout << "Digite o seu nome: ";

    cin >> nome;

    nomes.push_back(nome);

    
    cout << "Bom dia, " << nome << ". tenha um bom curso." << endl;


    return 0;
}
