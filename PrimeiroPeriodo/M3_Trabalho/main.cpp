#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Link do vídeo: https://youtu.be/XUa1mC_X8r8

using namespace std;

int main()
{
    srand(time(NULL));
    int opcao_dificuldade, opcao_menu, opcao_linha, opcao_coluna;
    int contador_bombas, contador_jogadas, contador_posicao, coordenada_bombaI, coordenada_bombaJ, LINHA = 9, COLUNA = 9;
    int i, j, Ci, Cj, nB = 3;
    char matriz[LINHA][COLUNA];
    char matriz_caractere[LINHA][COLUNA];
    string gametag;

    //Tela inicial.
    system ("color 0f");
    cout << "\n\n\t\t\t\t                         ______                     " << endl;
    cout << "\t\t\t\t _________        .---\"\"\"      \"\"\"---.        " << endl;
    cout << "\t\t\t\t:______.-':      :  .--------------.  :             " << endl;
    cout << "\t\t\t\t| ______  |      | :                : |             " << endl;
    cout << "\t\t\t\t|:______B:|      | | MINEFIELD GAME | |             " << endl;
    cout << "\t\t\t\t|:______B:|      | |                | |             " << endl;
    cout << "\t\t\t\t|:______B:|      | |     DIGITE     | |             " << endl;
    cout << "\t\t\t\t|         |      | |  SUA GAMETAG   | |             " << endl;
    cout << "\t\t\t\t|:_____:  |      | |                | |             " << endl;
    cout << "\t\t\t\t|    ==   |      | :                : |             " << endl;
    cout << "\t\t\t\t|       O |      :  '--------------'  :             " << endl;
    cout << "\t\t\t\t|       o |      :'---...______...---'              " << endl;
    cout << "\t\t\t\t|       o |-._.-i___/'             \\._             " << endl;
    cout << "\t\t\t\t|'-.____o_|   '-.   '-...______...-'  `-._          " << endl;
    cout << "\t\t\t\t:_________:      `.____________________   `-.___.-. " << endl;
    cout << "\t\t\t\t                 .'.eeeeeeeeeeeeeeeeee.'.      :___:" << endl;
    cout << "\t\t\t\t               .'.eeeeeeeeeeeeeeeeeeeeee.'.         " << endl;
    cout << "\t\t\t\t              :____________________________:        " << endl;

    cout << "\n\t\t\t\t\t\t     Gametag: ";
    cin >> gametag; //Variavel para usuario escolher o nome que desejar.

    system ("cls");

    do {
        //Menu principal.
        system ("color 0f");

        cout << "\n\t\t\t\t     Seja bem-vindo ao Minefield Game " << gametag << "!" << endl;

        cout << "\t\t\t  ______________________________________________________________     " << endl;
        cout << "\t\t\t.'  __________________________________________________________  '.   " << endl;
        cout << "\t\t\t: .'                                                          '. :   " << endl;
        cout << "\t\t\t| |      ________________________________________________      | |   " << endl;
        cout << "\t\t\t| |    .:________________________________________________:.    | |   " << endl;
        cout << "\t\t\t| |    |                                                  |    | |   " << endl;
        cout << "\t\t\t| |    |              O QUE DESEJA EXECUTAR?              |    | |   " << endl;
        cout << "\t\t\t| |    |                                                  |    | |   " << endl;
        cout << "\t\t\t| |    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|    | |   " << endl;
        cout << "\t\t\t| |    |                                                  |    | |   " << endl;
        cout << "\t\t\t| |    |       )          (1) - JOGAR           \\|/       |    | |   " << endl;
        cout << "\t\t\t| |    |      (                                - o -      |    | |   " << endl;
        cout << "\t\t\t| |    |     .-`-.        (2) - SOBRE           /-`-.     |    | |   " << endl;
        cout << "\t\t\t| |    |     :   :                              :   :     |    | |   " << endl;
        cout << "\t\t\t| |    |     :TNT:        (3) - SAIR            :TNT:     |    | |   " << endl;
        cout << "\t\t\t| |    |     :___:                              :___:     |    | |   " << endl;
        cout << "\t\t\t| |    |            __________________________            |    | |   " << endl;
        cout << "\t\t\t| |    |           |  |  |  |  |  |  |  |  |  |           |    | |   " << endl;
        cout << "\t\t\t| |    '.__________|__|__|__|__|__|__|__|__|__|__________.'    | |   " << endl;
        cout << "\t\t\t| |                                                            | |   " << endl;
        cout << "\t\t\t| |                                                            | |   " << endl;
        cout << "\t\t\t: '.__________________________________________________________.' :   " << endl;
        cout << "\t\t\t \".____________________________\\__/____________________________.\" " << endl;

        cout << "\n\t\t\t\t\t\t    EXECUTAR: ";
        cin >> opcao_menu; //Variavel para usuario escolher o que executar.

        system("cls");

        switch (opcao_menu) {
        case 1:
            cout << "\n\n\t\t\t  ______________________________________________________________     " << endl;
            cout << "\t\t\t.'  __________________________________________________________  '.   " << endl;
            cout << "\t\t\t: .'                                                          '. :   " << endl;
            cout << "\t\t\t| |      ________________________________________________      | |   " << endl;
            cout << "\t\t\t| |    .:________________________________________________:.    | |   " << endl;
            cout << "\t\t\t| |    |                                                  |    | |   " << endl;
            cout << "\t\t\t| |    |        SELECIONE A DIFICULDADE QUE DESEJA        |    | |   " << endl;
            cout << "\t\t\t| |    |                                                  |    | |   " << endl;
            cout << "\t\t\t| |    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|    | |   " << endl;
            cout << "\t\t\t| |    |                                                  |    | |   " << endl;
            cout << "\t\t\t| |    |       )          (1) - FACIL           \\|/       |    | |   " << endl;
            cout << "\t\t\t| |    |      (                                - o -      |    | |   " << endl;
            cout << "\t\t\t| |    |     .-`-.        (2) - MEDIO           /-`-.     |    | |   " << endl;
            cout << "\t\t\t| |    |     :   :                              :   :     |    | |   " << endl;
            cout << "\t\t\t| |    |     :TNT:        (3) - DIFICIL         :TNT:     |    | |   " << endl;
            cout << "\t\t\t| |    |     :___:                              :___:     |    | |   " << endl;
            cout << "\t\t\t| |    |            __________________________            |    | |   " << endl;
            cout << "\t\t\t| |    |           |  |  |  |  |  |  |  |  |  |           |    | |   " << endl;
            cout << "\t\t\t| |    '.__________|__|__|__|__|__|__|__|__|__|__________.'    | |   " << endl;
            cout << "\t\t\t| |                                                            | |   " << endl;
            cout << "\t\t\t| |                                                            | |   " << endl;
            cout << "\t\t\t: '.__________________________________________________________.' :   " << endl;
            cout << "\t\t\t \".____________________________\\__/____________________________.\" " << endl;

            cout << "\n\t\t\t\t\t\t   DIFICULDADE: ";
            cin >> opcao_dificuldade; //Variavel para usuario escolher a dificuldade.

            system("cls");

            if (opcao_dificuldade == 1) { //Alterar as linhas, colunas e numeros de bombas conforme a variavel.
                LINHA = 9;
                COLUNA = 9;
                nB = 3;
                cout << "\n\t\t    DIFICULDADE FACIL SELECIONADA!" << endl;
            }
            if (opcao_dificuldade == 2) {
                LINHA = 20;
                COLUNA = 15;
                nB = 100;
                cout << "\n\t\t    DIFICULDADE MEDIA SELECIONADA!" << endl;

            }
            if (opcao_dificuldade == 3) {
                LINHA = 110;
                COLUNA = 30;
                nB = 2000;
                cout << "\n\t\t  DIFICULDADE DIFICIL SELECIONADA!" << endl;
            }



            cout << "\n\t\t     ";
            for (Cj = 0; Cj < COLUNA; Cj++) { //Loop para gerar as coordenadores da coluna.
                cout << Cj << "  ";
            }
            cout << endl << endl;
            Ci = 1; //Variavel da coordenada linha tem valor 1.
            cout << "\t\t0    ";
            for (i = 0; i < LINHA; i++) { //Loop para formar a matrz com caracteres.
                for(j = 0; j < COLUNA; j++) {
                    matriz_caractere[i][j] = '~';
                    cout << matriz_caractere[i][j] << "  ";
                }
                cout << endl;
                if (Ci < LINHA) { //Vai gerar as coordenadas linha até que seja igual ou menor que a linha.
                    if (Ci <= 9) {
                        cout << "\t\t" << Ci << "    ";
                        Ci++;
                    } else {
                        if (Ci >= 100) {
                            cout << "\t\t" << Ci << "  ";
                            Ci++;
                        } else {
                            if (Ci > 9 && Ci < 100) {
                                cout << "\t\t" << Ci << "   ";
                                Ci++;
                            }
                        }
                    }
                }
            }
            cout << endl;
            for (i = 0; i < LINHA; i++) { //""Zerar"" matriz para compensar o trabalho de colocar o número zero depois.
                for (j = 0; j < COLUNA; j++) {
                    matriz[i][j] = '0';
                }
            }
            contador_bombas = 0;
            do {
                i = rand()%LINHA; // Randomizando as bombas, escolhendo uma linha e coluna aleátoria.
                j = rand()%COLUNA;
                if (matriz[i][j] != 'x') { //Condicional para que uma bomba não seja colocada aonde já tem uma.
                    matriz[i][j] = 'x';

                    coordenada_bombaI = i;
                    coordenada_bombaJ = j;

                    for (i = coordenada_bombaI - 1; i <= coordenada_bombaI + 1; i++) {
                        for (j = coordenada_bombaJ - 1; j <= coordenada_bombaJ + 1; j++) {
                            if (matriz[i][j] != 'x' && i >= 0 && i < LINHA && j >= 0 && j < COLUNA) {
                                matriz[i][j]++;
                            } //Loop necessário para que some as coordenadas adjacentes as bombas.
                        }
                    }
                    contador_bombas++;
                }
            } while (contador_bombas < nB);

            contador_jogadas = 0;
            contador_posicao = 0;

            do {
                for (opcao_linha = LINHA; opcao_linha >= LINHA || opcao_linha < 0;) { //Loop para usuário digitar a coordenada linha
                    cout << "\t\tDigite sua coordenada LINHA: ";
                    cin >> opcao_linha;
                    if (opcao_linha >= LINHA || opcao_linha < 0) {
                        cout << "\n\n\t\tCoordenada INEXISTENTE. Tente novamente!" << endl;
                    }
                }
                for (opcao_coluna = COLUNA; opcao_coluna >= COLUNA || opcao_coluna < 0;) { //Loop para o usuário digitar a coordenada coluna.
                    cout << "\t\tDigite sua coordenada COLUNA: ";
                    cin >> opcao_coluna;
                    if (opcao_coluna >= COLUNA || opcao_coluna < 0) {
                        cout << "\n\n\t\tCoordenada INEXISTENTE. Tente novamente!" << endl;
                    }
                }
                system("cls");

                contador_jogadas++;
                contador_posicao++;

                cout << "\n\n\n\t\t     "; //Mesmo esquema para gerar as coordendas coluna.
                for (Cj = 0; Cj < COLUNA; Cj++) {
                    cout << Cj << "  ";
                }
                cout << endl << endl;

                Ci = 1;
                cout << "\t\t0    ";
                for( i = 0; i < LINHA; i++) { //Nesse loop, é usuado para revelar a posição que o usuário digitou
                    for(j = 0; j < COLUNA;j++) {
                        if(opcao_linha == i && opcao_coluna == j){
                            cout << matriz[i][j] << "  ";
                            matriz_caractere[i][j] = matriz[i][j];
                        } else {
                            cout << matriz_caractere[i][j] << "  ";
                        }
                    }
                    cout << endl;
                    if (Ci < LINHA) {
                        if (Ci <= 9) {
                            cout << "\t\t" << Ci << "    ";
                            Ci++;
                        } else {
                            if (Ci >= 100) {
                                cout << "\t\t" << Ci << "  ";
                                Ci++;
                            } else {
                                if (Ci > 9 && Ci < 100) {
                                    cout << "\t\t" << Ci << "   ";
                                    Ci++;
                                }
                            }
                        }
                    }
                }
                cout<<endl;
            } while (matriz_caractere[opcao_linha][opcao_coluna] != 'x' && contador_posicao < LINHA * COLUNA - nB);

            if (matriz_caractere[opcao_linha][opcao_coluna] == 'x') {
                system("cls");
                system ("color 04");
                cout << "\n\t\t\t\t     Infelizmente, fosse EXPLODIDO. JOGUE NOVAMENTE!" << endl;
                cout << "\t\t\t\t\t\t  Jogadas em vao: " << contador_jogadas << " vezes" << endl;

                cout << "\n\n\t\t\t\t\t\t     _.-^^---....,,--         " << endl;
                cout << "\t\t\t\t\t\t _--                  --_     " << endl;
                cout << "\t\t\t\t\t\t<                        >)   " << endl;
                cout << "\t\t\t\t\t\t|                         |   " << endl;
                cout << "\t\t\t\t\t\t \\._                   _./   " << endl;
                cout << "\t\t\t\t\t\t    ```--. . , ; .--'''       " << endl;
                cout << "\t\t\t\t\t\t          | |   |             " << endl;
                cout << "\t\t\t\t\t\t       .-=||  | |=-.          " << endl;
                cout << "\t\t\t\t\t\t       `-=#$%&%$#=-'          " << endl;
                cout << "\t\t\t\t\t\t          | ;  :|             " << endl;
                cout << "\t\t\t\t\t\t _____.,-#%&$@%#&#~,._____    " << endl;
                system("pause");
                system("cls");

            } else {

            system("pause");
            system("cls");
                system("cls");
                system("color 0a");
                cout << "\n\t\t\t\t\tParabens pela vitoria! Vamos jogar novamente?" << endl;
                cout << "\t\t\t\t\t\t     Jogadas: " << contador_jogadas << " vezes" << endl;

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
            }

            break;

        case 2:

            system ("color 0e");
            cout << "\n\n\t\t\t  ______________________________________________________________     " << endl;
            cout << "\t\t\t.'  __________________________________________________________  '.   " << endl;
            cout << "\t\t\t: .'                                                          '. :   " << endl;
            cout << "\t\t\t| |      ________________________________________________      | |   " << endl;
            cout << "\t\t\t| |    .:________________________________________________:.    | |   " << endl;
            cout << "\t\t\t| |    |                                                  |    | |   " << endl;
            cout << "\t\t\t| |    |   Jogo desenvolvido pelo estudante da UNIVALI,   |    | |   " << endl;
            cout << "\t\t\t| |    | primeiro periodo do curso Ciencias da Computacao |    | |   " << endl;
            cout << "\t\t\t| |    |                  Novembro/2022                   |    | |   " << endl;
            cout << "\t\t\t| |    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|    | |   " << endl;
            cout << "\t\t\t| |    |                   Professor:                     |    | |   " << endl;
            cout << "\t\t\t| |    |              Eduardo Alves da Silva              |    | |   " << endl;
            cout << "\t\t\t| |    |            (Algoritmo de Programacao)            |    | |   " << endl;
            cout << "\t\t\t| |    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|    | |   " << endl;
            cout << "\t\t\t| |    |                     Aluno:                       |    | |   " << endl;
            cout << "\t\t\t| |    |           Kauan Adami Guerreiro Chaves           |    | |   " << endl;
            cout << "\t\t\t| |    |            __________________________            |    | |   " << endl;
            cout << "\t\t\t| |    |           |  |  |  |  |  |  |  |  |  |           |    | |   " << endl;
            cout << "\t\t\t| |    '.__________|__|__|__|__|__|__|__|__|__|__________.'    | |   " << endl;
            cout << "\t\t\t| |                                                            | |   " << endl;
            cout << "\t\t\t| |                                                            | |   " << endl;
            cout << "\t\t\t: '.__________________________________________________________.' :   " << endl;
            cout << "\t\t\t \".____________________________\\__/____________________________.\" " << endl;

            system("pause");
            system("cls");
            break;

        case 3:

            system("cls");
            break;
        }
    } while (opcao_menu != 3);

    system ("color 0c");
    cout << "\n\n\t\t\t\t                         ______                     " << endl;
    cout << "\t\t\t\t _________        .---\"\"\"      \"\"\"---.        " << endl;
    cout << "\t\t\t\t:______.-':      :  .--------------.  :             " << endl;
    cout << "\t\t\t\t| ______  |      | :                : |             " << endl;
    cout << "\t\t\t\t|:______B:|      | | MINEFIELD GAME | |             " << endl;
    cout << "\t\t\t\t|:______B:|      | |                | |             " << endl;
    cout << "\t\t\t\t|:______B:|      | |   VOCE SAIU    | |             " << endl;
    cout << "\t\t\t\t|         |      | |                | |             " << endl;
    cout << "\t\t\t\t|:_____:  |      | |                | |             " << endl;
    cout << "\t\t\t\t|    ==   |      | :                : |             " << endl;
    cout << "\t\t\t\t|       O |      :  '--------------'  :             " << endl;
    cout << "\t\t\t\t|       o |      :'---...______...---'              " << endl;
    cout << "\t\t\t\t|       o |-._.-i___/'             \\._             " << endl;
    cout << "\t\t\t\t|'-.____o_|   '-.   '-...______...-'  `-._          " << endl;
    cout << "\t\t\t\t:_________:      `.____________________   `-.___.-. " << endl;
    cout << "\t\t\t\t                 .'.eeeeeeeeeeeeeeeeee.'.      :___:" << endl;
    cout << "\t\t\t\t               .'.eeeeeeeeeeeeeeeeeeeeee.'.         " << endl;
    cout << "\t\t\t\t              :____________________________:        " << endl;

    return 0;
}
