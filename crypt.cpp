#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main () {
	
	int ans = 1, key;
	string in;
	while(ans != 0) {
		cout<<"Digite 1 para criptograr um arquivo. \nDigite 2 para descriptografar um arquivo.\nDigite 0 para encerrar o programa."<<endl;
		cin>>ans;
		if (ans != 0) {
			cout<<"Insira o nome do arquivo (caso tenha adiocione a extensão: .pdf, .txt, .jpeg, etc)"<<endl;
			cin>>in;
			cout<<"Insira a chave (numero inteiro)"<<endl;
			cin>>key;
		
			if (ans == 1){
				char c;
				ifstream fin;
				ofstream fout;
				fin.open(in.c_str(), ios::binary);
				in = in;
				fout.open(in.c_str(), ios::binary);
		
				while (!fin.eof()) {
					fin>>noskipws>>c;
					int temp = (c + key);
					fout<<(char)temp;
				}
				fin.close();
				fout.close();
				
				cout<<"\nARQUIVO CRIPTOGRAFADO\n\n";
			}
	
			else if (ans == 2){
				char c;
				ifstream fin;
				ofstream fout;
				fin.open(in.c_str(), ios::binary);
				in = in;
				fout.open(in.c_str(), ios::binary);
		
				while (!fin.eof()) {
					fin>>noskipws>>c;
					int temp = (c - key);
					fout<<(char)temp;
				}
				fin.close();
				fout.close();
				
				cout<<"\nARQUIVO DESCRIPTOGRAFADO\n\n";
			}
		}
	}
	cout<<"!!!ENCERRANDO PROGRAMA!!!";
}
