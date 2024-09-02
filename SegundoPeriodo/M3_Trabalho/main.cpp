#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdio>

using namespace std;

void pause_cls() {
    system("pause");
    system("cls");
}

struct Lista {
    string palavra[10];
    int cont;
};

void criar_nova_lista (Lista*& lista, int& TAM, int& cont_lista) {
    ofstream meu_arquivo;
    lista = new Lista[TAM];

    meu_arquivo.open("listas.csv", ios::app | ios::out);

    if (meu_arquivo.is_open()) {
        for (int i = 0; i < TAM; i++) {
            cout << "\t(" << i << ") ";
            getline(cin, lista[cont_lista].palavra[i]);
            if (lista[cont_lista].palavra[i] == "fim")
                break;
            meu_arquivo << lista[cont_lista].palavra[i] << ";";
        }

        cont_lista++;
        meu_arquivo << "\n";
        meu_arquivo.close();
    }
    else {
        system("color 0c");
        system("cls");
        cout << "\n\t\t\t\t\tERRO. Nao foi possivel abrir o arquivo.\n" << endl;
        pause_cls();
    }
    system("cls");
}

void salvar_cont_lista (int cont_lista) {
    ofstream arquivo("cont_lista.txt");
    if (arquivo.is_open()) {
        arquivo << cont_lista;
        arquivo.close();
    }
    else {
        cout << "Erro ao abrir o arquivo para salvar cont_lista." << endl;
    }
}

int carregar_cont_lista() {
    ifstream arquivo("cont_lista.txt");
    if (arquivo.is_open()) {
        int cont_lista = 1;
        arquivo >> cont_lista;
        arquivo.close();
        return cont_lista;
    }
    else {
        cout << "Erro ao abrir o arquivo para carregar cont_lista." << endl;
        return 0;
    }
}

void mostrar_lista (Lista*& lista, int& TAM, int& cont_lista) {
    ifstream meu_arquivo("listas.csv");
    if (meu_arquivo.is_open()) {
        string linha;
        int num_linha = 1;
        while (getline(meu_arquivo, linha)) {
            cout << "\tLista " << num_linha << ": ";
            stringstream ss(linha);
            string palavra;
            int num_palavra = 1;
            while (getline(ss, palavra, ';')) {
                if (palavra.empty())
                    break;
                lista[cont_lista].palavra[num_palavra - 1] = palavra;
                cout << palavra;
                if (num_palavra != TAM)
                    cout << ", ";
                num_palavra++;
            }
            cout << endl;
            num_linha++;
        }
        meu_arquivo.close();
    }
    else {
        system("color 0c");
        system("cls");
        cout << "\n\t\t\t\t\t\tERRO. Nenhuma lista criada." << endl;
    }
    cout << endl;
}

void remover_lista(int numero_lista, int& cont_lista) {
    std::ifstream arquivo_entrada("listas.csv");
    std::ofstream arquivo_temporario("temp.csv");

    if (arquivo_entrada.is_open() && arquivo_temporario.is_open()) {
        std::string linha;
        int num_linha = 1;
        while (std::getline(arquivo_entrada, linha)) {
            if (num_linha != numero_lista) {
                arquivo_temporario << linha << "\n";
            }
            num_linha++;
        }
        cont_lista--;
        salvar_cont_lista(cont_lista);
        arquivo_entrada.close();
        arquivo_temporario.close();

        std::remove("listas.csv");
        std::rename("temp.csv", "listas.csv");

        std::cout << "\n\t\tLista removida com sucesso!\n" << std::endl;
    } else {
        std::cout << "\nErro ao abrir os arquivos." << std::endl;
    }

    pause_cls();
}

int main() {
    int opcao, numero_lista, cont_lista = carregar_cont_lista(), TAM = 10;
    Lista* lista = new Lista[TAM];

    do {
        system("color 0f");
        cout << "\n\t\tWord Search\n" << endl;
        cout << "\t1) Mostrar Listas de Palavras" << endl;
        cout << "\t2) Criar Nova Lista" << endl;
        cout << "\t3) Remover Uma Lista" << endl;
        cout << "\t4) Jogar Word Search" << endl;
        cout << "\t5) Sair" << endl;
        cout << "\n\t\tExecutar: ";
        cin >> opcao;

        system("cls");

        switch (opcao) {
        case 1:
            cout << "\n\t\tWord Search\n" << endl;
            cout << "\tListas de Palavras\n" << endl;
            mostrar_lista(lista, TAM, cont_lista);
            cin.ignore();
            pause_cls();
            break;
        case 2:
            cout << "\n\t\tWord Search\n" << endl;
            cout << "\tPalavra (fim p/ terminar): " << endl;
            cout << "\t\tLista (" << cont_lista << "): " << endl;
            cin.ignore();
            criar_nova_lista(lista, TAM, cont_lista);
            break;
        case 3:
            cout << "\n\t\tWord Search\n" << endl;
            mostrar_lista(lista, TAM, cont_lista);
            cout << "\tSelecione a Lista que deseja remover: ";
            cin >> numero_lista;
            remover_lista(numero_lista, cont_lista);
            break;
        case 4:
            cout << "\n\t\tWord Search\n" << endl;
            break;
        case 5:
            break;
        default:
            system("color 0c");
            system("cls");
            cout << "\n\t\t\t\t\tERRO. Tente novamente.\n" << endl;
            pause_cls();
        }
    } while (opcao != 5);

    salvar_cont_lista(cont_lista);

    delete[] lista;
    return 0;
}
