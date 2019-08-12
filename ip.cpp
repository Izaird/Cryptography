#include <iostream>
#include <bitset>
#include <string>
using namespace std;

string initial_permutation(string cadena);
string str_to_bin (string cadena);

int main() {

        string prueba = "E348D5YT";
        prueba = str_to_bin(prueba);
        cout << prueba << endl;
        prueba = initial_permutation(prueba);
        cout << prueba << endl;


}

string initial_permutation(string cadena){
        string ip_res,aux;
        int ip[8][8] = {
                {58,50,41,34,26,18,10,2},
                {60,51,44,36,28,20,12,4},
                {62,54,46,38,30,22,14,6},
                {64,56,48,40,32,24,16,8},
                {57,49,41,33,25,17,9,1},
                {59,51,43,35,27,19,11,3},
                {61,53,45,37,29,21,13,5},
                {63,55,47,39,31,23,15,7},
        };

        for (int i = 0; i < 8; i++)
        {
                for (int j = 0; j < 8; j++)
                {
                        aux= cadena[(ip[i][j])-1];
                        ip_res.append(aux);
                }
                
        }
        return ip_res;
}

string str_to_bin (string cadena){//Covertir a binario cualquier cadena 
        bitset<8> mybits;
        string bin, aux;

        for (int i = 0; i < cadena.size(); ++i){
                mybits = bitset<8>(cadena.c_str()[i]);
                aux = mybits.to_string<char,std::string::traits_type,std::string::allocator_type>();
                bin.append(aux);
        }
        return bin;
}


