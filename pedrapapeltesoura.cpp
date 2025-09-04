#include <iostream>
#include <vector>
#include <random>
#include<ctime>
using namespace std;

string ppt() {
	string opcaoplayer;
	cout << "Escolha pedra,papel,tesoura ou exit para sair.\n";
	cin >> opcaoplayer;
	if (opcaoplayer != "pedra" && opcaoplayer != "papel" && opcaoplayer != "tesoura" && opcaoplayer != "exit") {
		cerr << "Opcao invalida.\n";
		return"";
	}
	return opcaoplayer;
}
int main() {
	int vitorias = 0;
	int derrotas = 0;
	int empates = 0;
	vector<string> opcoes{ "pedra", "papel", "tesoura" };
	uniform_int_distribution<int> dist(0, 2);
	default_random_engine engine(time(0));

	while (true){
		string opcaoplayer = ppt();
		if (opcaoplayer == "exit") {
			cout << "\n===== Placar final =====\n";
			cout << "Vitorias: " << vitorias << "\n";
			cout << "Derrotas: " << derrotas << "\n";
			cout << "Empates: " << empates << "\n";
			break;
		}

		if (opcaoplayer.empty()) {
			cout << "Tente novamente.\n";
			continue;
		}
		
		string opcaopc = opcoes[dist(engine)];
		cout << "Computador escolheu:" << opcaopc << ".\n";

		if (opcaopc == opcaoplayer) {
			cout << "O jogo empatou.\n";
			++empates;
		}

		else if ((opcaoplayer == "pedra" && opcaopc == "tesoura") || (opcaoplayer == "tesoura" && opcaopc == "papel") || (opcaoplayer == "papel" && opcaopc == "pedra")) {
			cout << "Voce ganhou.\n";
			++vitorias;
		}
		
		else {
		cout << "Voce perdeu.\n";
		++derrotas;
		}
	}
	return 0;
	}


