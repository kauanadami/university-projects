#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int LINHA = 3; // Número de linhas da matriz.
const int COLUNA = 3; // Número de colunas da matriz.

// Matriz correta para vencer.
bool matriz_gabarito (int matriz[LINHA][COLUNA]) {
    int valor_correto = 1;
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            if (matriz[i][j] != valor_correto && (i != LINHA - 1 || j != COLUNA - 1)) {
                return false;
            }
            valor_correto++;
        }
    }
    return true;
}
// Função para gerar a matriz com posições aleatórias.
void gerar_matriz (int matriz[LINHA][COLUNA], int &linha_zero, int &coluna_zero) {
    srand(time(NULL)); // Inicializa os números aleatórios.
    cout << endl << endl << endl << endl << endl;
    for (int i = 0; i < LINHA; i++) {
        cout << "\t\t\t\t\t\t    | ";
        for (int j = 0; j < COLUNA; j++) {
            if (i == linha_zero && j == coluna_zero) // Se a posição atual é a do zero, imprimir espaço em branco
                cout << "  | ";
            else {
                bool valor_diferente = true; // Controla se o valor gerado aleatoriamente já existe na matriz.
                do {
                    matriz[i][j] = rand() % 9; // Gera um número aleatório entre 0 e 8.
                    valor_diferente = false;
                    for (int l = 0; l < LINHA; l++) {
                        for (int c = 0; c < COLUNA; c++) {
                            if (matriz[l][c] == matriz[i][j] && (l != i || c != j)) { // Verifica se o valor já foi gerado na matriz.
                                valor_diferente = true;
                                break;
                            }
                        }
                        if (valor_diferente)
                            break;
                    }
                } while (valor_diferente); // Repete até encontrar um valor diferente do que já foi gerado.
                cout << matriz [i][j] << " | ";
            }
        }
        cout << endl << endl;
    }
}
// Função para trocar as posições que o usuário escolher.
void trocar_posicao (int matriz[LINHA][COLUNA], int &linha_zero, int &coluna_zero, char movimento) {
    if (movimento == 'w') {
        int aux = matriz[linha_zero - 1][coluna_zero];
        matriz[linha_zero - 1][coluna_zero] = 0;
        matriz[linha_zero][coluna_zero] = aux;
        linha_zero--;
    } else {
        if (movimento == 'a') {
            int aux = matriz[linha_zero][coluna_zero - 1];
            matriz[linha_zero][coluna_zero - 1] = 0;
            matriz[linha_zero][coluna_zero] = aux;
            coluna_zero--;
        } else {
            if (movimento == 's') {
                int aux = matriz[linha_zero + 1][coluna_zero];
                matriz[linha_zero + 1][coluna_zero] = 0;
                matriz[linha_zero][coluna_zero] = aux;
                linha_zero++;
            } else {
                if (movimento == 'd') {
                    int aux = matriz[linha_zero][coluna_zero + 1];
                    matriz[linha_zero][coluna_zero + 1] = 0;
                    matriz[linha_zero][coluna_zero] = aux;
                    coluna_zero++;
                }
            }
        }
    }
}
// Função para imprimr a matriz alterada com as posições que o usuário escolher.
void imprimir_matriz_alterada (int matriz[LINHA][COLUNA], int &linha_zero, int &coluna_zero) {
    cout << endl << endl << endl << endl << endl;
    for (int i = 0; i < LINHA; i++) {
        cout << "\t\t\t\t\t\t    | ";
        for (int j = 0; j < COLUNA; j++) {
            if (i == linha_zero && j == coluna_zero) // Se a posição atual é a do zero, imprimir espaço em branco
                cout << "  | ";
            else
                cout << matriz [i][j] << " | ";
        }
        cout << endl << endl;
    }
}
// Função para mover o número da matriz conforme o usuário digitar as teclas.
void mover_numero (int matriz[LINHA][COLUNA], int &linha_zero, int &coluna_zero, char movimento, int &w, int &a, int &s, int &d, int &quebra_de_linha) {
    switch (movimento) {
    case 'w': case 'W':
        if (linha_zero > 0) { // Verifica se o movimento é válido.
            trocar_posicao (matriz, linha_zero, coluna_zero, movimento);
            w++;
        } else {
            quebra_de_linha++;
        }
        break;
    case 'a': case 'A':
        if (coluna_zero > 0) { // Verifica se o movimento é válido.
            trocar_posicao (matriz, linha_zero, coluna_zero, movimento);
            a++;
        } else {
            quebra_de_linha++;
        }
        break;
    case 's': case 'S':
        if (linha_zero < LINHA - 1) { // Verifica se o movimento é válido.
            trocar_posicao (matriz, linha_zero, coluna_zero, movimento);
            s++;
        } else {
            quebra_de_linha++;
        }
        break;
    case 'd': case 'D':
        if (coluna_zero < COLUNA - 1) { // Verifica se o movimento é válido.
            trocar_posicao (matriz, linha_zero, coluna_zero, movimento);
            d++;
        } else {
            quebra_de_linha++;
        }
        break;
    }
}

int main()
{
    srand(time(NULL));
    int matriz[LINHA][COLUNA] = { {0} }; // Declaração da matriz, sendo zerada de início.
    int escolha_menu;
    int w = 0, a = 0, s = 0, d = 0, quebra_de_linha = 0, tecla_errada = 0;
    char movimento;
    string gametag;

    // Gerando posição aleatória do zero
    int linha_zero = rand() % LINHA;
    int coluna_zero = rand() % COLUNA;

    system ("color 0f");
    cout <<"\t\t\t\t              ,---------------------------," << endl;
    cout <<"\t\t\t\t              |  /---------------------\\  |" << endl;
    cout <<"\t\t\t\t              | |                       | |" << endl;
    cout <<"\t\t\t\t              | |     8-PUZZLES GAME    | |" << endl;
    cout <<"\t\t\t\t              | |                       | |" << endl;
    cout <<"\t\t\t\t              | |   DIGITE SUA GAMETAG  | |" << endl;
    cout <<"\t\t\t\t              | |                       | |" << endl;
    cout <<"\t\t\t\t              |  \\_____________________/  |" << endl;
    cout <<"\t\t\t\t              |___________________________|" << endl;
    cout <<"\t\t\t\t            ,---\\_____     []     _______/------," << endl;
    cout <<"\t\t\t\t          /         /______________\\           /|" << endl;
    cout <<"\t\t\t\t        /___________________________________ /  | ___" << endl;
    cout <<"\t\t\t\t        |                                   |   |    )" << endl;
    cout <<"\t\t\t\t        |  _ _ _                 [-------]  |   |   (" << endl;
    cout <<"\t\t\t\t        |  o o o                 [-------]  |  /    _)_" << endl;
    cout <<"\t\t\t\t        |__________________________________ |/     /  /" << endl;
    cout <<"\t\t\t\t    /-------------------------------------/|      ( )/" << endl;
    cout <<"\t\t\t\t  /-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/ /" << endl;
    cout <<"\t\t\t\t/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/ /" << endl;
    cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << "\n\t\t\t\t\t\t     Gametag: ";
    getline (cin, gametag);
    system("cls");

    do {
        do {
            system ("color 0f");
            cout << "\n\t\t\t\t\t\t    Bem vindo, " << gametag << "!" << endl;
            cout <<"\t\t\t\t    _______________________________________________" << endl;
            cout <<"\t\t\t\t   /                                               \\" << endl;
            cout <<"\t\t\t\t  |    _________________________________________    |" << endl;
            cout <<"\t\t\t\t  |   |                                         |   |" << endl;
            cout <<"\t\t\t\t  |   |          O QUE DESEJA EXECUTAR?         |   |" << endl;
            cout <<"\t\t\t\t  |   |                                         |   |" << endl;
            cout <<"\t\t\t\t  |   |                                         |   |" << endl;
            cout <<"\t\t\t\t  |   |                                         |   |" << endl;
            cout <<"\t\t\t\t  |   |                1 - JOGAR                |   |" << endl;
            cout <<"\t\t\t\t  |   |                                         |   |" << endl;
            cout <<"\t\t\t\t  |   |                2 - SOBRE                |   |" << endl;
            cout <<"\t\t\t\t  |   |                                         |   |" << endl;
            cout <<"\t\t\t\t  |   |                3 - SAIR                 |   |" << endl;
            cout <<"\t\t\t\t  |   |                                         |   |" << endl;
            cout <<"\t\t\t\t  |   |                                         |   |" << endl;
            cout <<"\t\t\t\t  |   |                                         |   |" << endl;
            cout <<"\t\t\t\t  |   |_________________________________________|   |" << endl;
            cout <<"\t\t\t\t  |                                                 |" << endl;
            cout <<"\t\t\t\t   \\_______________________________________________/" << endl;
            cout <<"\t\t\t\t         \\___________________________________/" << endl;

            cout << "\n\t\t\t\t\t\t     Executar: ";
            cin >> escolha_menu;
            system("cls");

        } while (escolha_menu != 1 && escolha_menu != 2 && escolha_menu != 3);

        switch (escolha_menu) {
        case 1:
            // Colocando o zero na posição gerada aleatoriamente
            matriz[linha_zero][coluna_zero] = 0;
            gerar_matriz(matriz, linha_zero, coluna_zero);

            while (!matriz_gabarito(matriz)) {
                do {
                    system ("color 0f");
                    cout <<"\t\t\t\t\t\t      _,----._"  << endl;
                    cout <<"\t\t\t\t\t\t     ||| W  |||" << endl;
                    cout <<"\t\t\t\t\t\t     |||    |||" << endl;
                    cout <<"\t\t\t\t\t\t     ||;----:||" << endl;
                    cout <<"\t\t\t\t\t\t _,----._,----._,----._" << endl;
                    cout <<"\t\t\t\t\t\t||| A  ||| S  ||| D  |||" << endl;
                    cout <<"\t\t\t\t\t\t|||    |||    |||    |||" << endl;
                    cout <<"\t\t\t\t\t\t||;----:|;----:|;----:||" << endl;
                    cout <<"\t\t\t\t\t\t ---------------------- " << endl;
                    movimento = getch();
                    if (movimento != 'w' && movimento != 'a' && movimento != 's' && movimento != 'd') {
                        do {
                            system("color 04");
                            system("cls");
                            cout <<"\n\n\n\n\t\t\t\t\t\t       _______" << endl;
                            cout <<"\t\t\t\t\t\t      |.-----.|" << endl;
                            cout <<"\t\t\t\t\t\t      ||x . x||" << endl;
                            cout <<"\t\t\t\t\t\t      ||_.-._||" << endl;
                            cout <<"\t\t\t\t\t\t      `--)-(--`" << endl;
                            cout <<"\t\t\t\t\t\t     __[=== o]___" << endl;
                            cout <<"\t\t\t\t\t\t    |:::::::::::|\\" << endl;
                            cout <<"\t\t\t\t\t\t    `-=========-`()" << endl << endl;
                            cout << "\t\t\t\t\t   OPCAO INVALIDA. TENTE NOVAMENTE." << endl;
                            tecla_errada++;
                            movimento = getch();
                            system("cls");
                        } while (movimento != 'w' && movimento != 'a' && movimento != 's' && movimento != 'd');
                        break;
                    }
                } while (movimento != 'w' && movimento != 'a' && movimento != 's' && movimento != 'd');

                system("cls");

                mover_numero (matriz, linha_zero, coluna_zero, movimento, w, a, s, d, quebra_de_linha);
                imprimir_matriz_alterada (matriz, linha_zero, coluna_zero);
            }

            system("cls");
            system("color 0a");
            cout << "\n\t\t\t\t    Parabens pela vitoria! Deseja jogar novamente?" << endl;
            cout << "\t\t\t\t     Jogadas com w / a / s / d: " << w  << " / " << a << " / " << s << " / " << d << endl;
            cout << "\t\t\t\t\t\t Quebra de linhas: " << quebra_de_linha << endl;
            cout << "\t\t\t\t\t      Clicks na tecla errada: " << tecla_errada << endl;

            cout << "\n\n\t\t\t                                    (O)                          " << endl;
            cout << "\t\t\t                                 __--|--__                       " << endl;
            cout << "\t\t\t                         .------~---------~-----.                " << endl;
            cout << "\t\t\t                         | .------------------. |                " << endl;
            cout << "\t\t\t                         | |                  | |                " << endl;
            cout << "\t\t\t                         | |   .'''.  .'''.   | |                " << endl;
            cout << "\t\t\t                         | |   :    ''    :   | |                " << endl;
            cout << "\t\t\t                         | |   :          :   | |                " << endl;
            cout << "\t\t\t                         | |    '.      .'    | |                " << endl;
            cout << "\t\t\t                         | |      '.  .'      | |                " << endl;
            cout << "\t\t\t   .------------.        | |        ''        | |  .------------." << endl;
            cout << "\t\t\t   | O          |        | `------------------' |  |            |" << endl;
            cout << "\t\t\t   | O   .-----.|        `.____________________.'  |.-----.     |" << endl;
            cout << "\t\t\t   | O .'      ||          `-------.  .-------'    ||      `.   |" << endl;
            cout << "\t\t\t   |o*.'       ||   .--.      ____.'  `.____       ||       `.  |" << endl;
            cout << "\t\t\t   |.-'        || .-~--~-----~--------------~----. ||        `-.|" << endl;
            cout << "\t\t\t   ||          || |     .---------.|.--------.|()| ||          ||" << endl;
            cout << "\t\t\t   ||          || |     `---------'|`-o-=----'|  | ||          ||" << endl;
            cout << "\t\t\t   |`-._       || |-*-*------------| *--  (==)|  | ||       _.-'|" << endl;
            cout << "\t\t\t   |    ~-.____|| |         -      |          |  | ||____.-~    |" << endl;
            cout << "\t\t\t   `------------' `------------------------------' `------------'" << endl;

            system("pause");
            system("cls");
            break;
        case 2:
            system("color 0e");
            cout <<"\n\n\t\t\t\t    _______________________________________________" << endl;
            cout <<"\t\t\t\t   /                                               \\" << endl;
            cout <<"\t\t\t\t  |    _________________________________________    |" << endl;
            cout <<"\t\t\t\t  |   |                                         |   |" << endl;
            cout <<"\t\t\t\t  |   |      Jogo desenvolvido por aluno da     |   |" << endl;
            cout <<"\t\t\t\t  |   |         UNIVALI, segundo periodo        |   |" << endl;
            cout <<"\t\t\t\t  |   |      do curso Ciencias da Computacao.   |   |" << endl;
            cout <<"\t\t\t\t  |   |               Marco/2023                |   |" << endl;
            cout <<"\t\t\t\t  |   | ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ |   |" << endl;
            cout <<"\t\t\t\t  |   |                Professor:               |   |" << endl;
            cout <<"\t\t\t\t  |   |       Marcos Cesar Cardoso Carrard      |   |" << endl;
            cout <<"\t\t\t\t  |   |      (Algoritmos e Programacao II)      |   |" << endl;
            cout <<"\t\t\t\t  |   |                                         |   |" << endl;
            cout <<"\t\t\t\t  |   |                  Aluno:                 |   |" << endl;
            cout <<"\t\t\t\t  |   |       Kauan Adami Guerreiro Chvaes      |   |" << endl;
            cout <<"\t\t\t\t  |   |                                         |   |" << endl;
            cout <<"\t\t\t\t  |   |_________________________________________|   |" << endl;
            cout <<"\t\t\t\t  |                                                 |" << endl;
            cout <<"\t\t\t\t   \\_______________________________________________/" << endl;
            cout <<"\t\t\t\t         \\___________________________________/" << endl << endl;

            system("pause");
            system("cls");
            break;
        }
    } while (escolha_menu != 3);

    system("color 0c");
    cout <<"\t\t\t\t              ,---------------------------," << endl;
    cout <<"\t\t\t\t              |  /---------------------\\  |" << endl;
    cout <<"\t\t\t\t              | |                       | |" << endl;
    cout <<"\t\t\t\t              | |     8-PUZZLES GAME    | |" << endl;
    cout <<"\t\t\t\t              | |                       | |" << endl;
    cout <<"\t\t\t\t              | |   VOCE SAIU DO JOGO   | |" << endl;
    cout <<"\t\t\t\t              | |                       | |" << endl;
    cout <<"\t\t\t\t              |  \\_____________________/  |" << endl;
    cout <<"\t\t\t\t              |___________________________|" << endl;
    cout <<"\t\t\t\t            ,---\\_____     []     _______/------," << endl;
    cout <<"\t\t\t\t          /         /______________\\           /|" << endl;
    cout <<"\t\t\t\t        /___________________________________ /  | ___" << endl;
    cout <<"\t\t\t\t        |                                   |   |    )" << endl;
    cout <<"\t\t\t\t        |  _ _ _                 [-------]  |   |   (" << endl;
    cout <<"\t\t\t\t        |  o o o                 [-------]  |  /    _)_" << endl;
    cout <<"\t\t\t\t        |__________________________________ |/     /  /" << endl;
    cout <<"\t\t\t\t    /-------------------------------------/|      ( )/" << endl;
    cout <<"\t\t\t\t  /-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/ /" << endl;
    cout <<"\t\t\t\t/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/ /" << endl;
    cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

    return 0;
}
