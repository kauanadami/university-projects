#include <iostream>
#include <stdio.h>

using namespace std;

void pular_linha() {
    cout << endl;
}

void limpar_tela() {
    system("cls");
}

void pausar_tela() {
    system("pause");
}

void limpar_quebra_de_linha() {
    fseek (stdin, 0, SEEK_END);
}

template <typename T>
void aumentar_vetor (T *&vet, int &TAM) {
    int aumento = TAM + 5;
    T *novo_vet = new T[aumento];

    for (int i = 0; i < TAM; i++) {
        novo_vet[i] = vet[i];
    }

    delete[] vet;
    vet = novo_vet;
    TAM = aumento;
}

struct Data {
    int d, m, a;
};

struct Devolucao {
    int dd, mm, aa;
};

struct Usuario {
    string nome;
    Data data;
};

struct Titulo {
    string nome_livro;
    string nome_revista;
};

struct Assunto {
    string tema;
};

struct Autor {
    string nome_autor;
};

struct Editora {
    string nome_editora;
};

struct Livro {
    Usuario pessoa;
    Autor escritor;
    Editora editora;
    Titulo titulo;
    Assunto conteudo;
};

struct Revista {
    Usuario humano;
    Editora editora;
    Titulo titulo;
    Assunto conteudo;
};

struct Biblioteca {
    Usuario usuario;
    Titulo nome;
    Assunto assunto;
    Autor escritor;
    Editora editora;
    Livro obra;
    Revista magazine;
    Data calendario;
    Devolucao atraso;
};

static int cont_usuario = 0;
static int cont_autor = 0;
static int cont_editora = 0;
static int cont_livro = 0;
static int cont_revista = 0;

void cadastrar_usuario (Biblioteca *&limite_usuario, int &TAM_usuario) {
    int cadastrar_novamente;

    limite_usuario = new Biblioteca[TAM_usuario];
    if (cont_usuario == TAM_usuario) aumentar_vetor (limite_usuario, TAM_usuario);

    do {
        if (cont_usuario < TAM_usuario) {
            cout << "\t\tBIBLIOTECA" << endl;
            pular_linha();
            limpar_quebra_de_linha();
            cout << "Digite seu nome: ";
            getline(cin, limite_usuario[cont_usuario].usuario.nome);
            pular_linha();
            do {
                if (cont_usuario < TAM_usuario) {
                    cout << "Deseja cadastrar outro Usuario?" << endl;
                    pular_linha();
                    cout << "\t1 - SIM" << endl;
                    cout << "\t2 - NAO" << endl;
                    pular_linha();
                    cout << "Escolha: ";
                    cin >> cadastrar_novamente;
                    limpar_quebra_de_linha();
                    limpar_tela();
                    if (cadastrar_novamente < 1 || cadastrar_novamente > 2) {
                        limpar_tela();
                        pular_linha();
                        cout << "\t\t\t\t\tOPCAO INVALIDA. Escolha entre 1 e 2." << endl;
                        pular_linha();
                        pausar_tela();
                        limpar_tela();
                    }
                }
            } while (cadastrar_novamente < 1 || cadastrar_novamente > 2);
            cont_usuario++;
        }
        limpar_tela();
    } while (cadastrar_novamente == 1 && cont_usuario < TAM_usuario);
}

void mostrar_usuario (Biblioteca limite_usuario[]) {
    for (int i = 0; i < cont_usuario; i++) {
        cout << "\tUsuario " << "(" << i << "): " << limite_usuario[i].usuario.nome << endl;
    }
}

void cadastrar_autor (Biblioteca *&limite_autor, int &TAM_autor) {
    int novo_autor;

    limite_autor = new Biblioteca[TAM_autor];
    if (cont_autor == TAM_autor) aumentar_vetor (limite_autor, TAM_autor);

    do {
        if (cont_autor < TAM_autor) {
            cout << "\t\tBIBLIOTECA" << endl;
            pular_linha();
            limpar_quebra_de_linha();
            cout << "Digite o nome do Autor: ";
            limpar_quebra_de_linha();
            getline (cin, limite_autor[cont_autor].escritor.nome_autor);
            limpar_quebra_de_linha();
            pular_linha();
            do {
                if (cont_autor < TAM_autor) {
                    cout << "Deseja cadastrar outro Autor?" << endl;
                    pular_linha();
                    cout << "\t1 - SIM" << endl;
                    cout << "\t2 - NAO" << endl;
                    pular_linha();
                    cout << "Escolha: ";
                    cin >> novo_autor;
                    limpar_quebra_de_linha();
                    limpar_tela();
                    if (novo_autor < 1 || novo_autor > 2) {
                        limpar_tela();
                        pular_linha();
                        cout << "\t\t\t\t\tOPCAO INVALIDA. Escolha entre 1 e 2." << endl;
                        pular_linha();
                        pausar_tela();
                        limpar_tela();
                    }
                }
            } while (novo_autor < 1 || novo_autor > 2);
            cont_autor++;
        }
        limpar_tela();
    } while (novo_autor == 1 && cont_autor < TAM_autor);
}

void mostrar_autor (Biblioteca limite_autor[]) {
    for (int i = 0; i < cont_autor; i++) {
        cout << "\tAutor " << "(" << i << "): " << limite_autor[i].escritor.nome_autor << endl;
    }
}

void cadastrar_editora (Biblioteca *&limite_editora, int &TAM_editora) {
    int nova_editora;

    limite_editora = new Biblioteca[TAM_editora];
    if (cont_editora == TAM_editora) aumentar_vetor (limite_editora, TAM_editora);


    do {
        if (cont_editora < TAM_editora) {
            cout << "\t\tBIBLIOTECA" << endl;
            pular_linha();
            limpar_quebra_de_linha();
            cout << "Digite o nome da Editora: ";
            getline (cin, limite_editora[cont_editora].editora.nome_editora);
            limpar_quebra_de_linha();
            pular_linha();
            do {
                if (cont_editora < TAM_editora) {
                    cout << "Deseja cadastrar outra Editora?" << endl;
                    pular_linha();
                    cout << "\t1 - SIM" << endl;
                    cout << "\t2 - NAO" << endl;
                    pular_linha();
                    cout << "Escolha: ";
                    cin >> nova_editora;
                    limpar_quebra_de_linha();
                    limpar_tela();
                    if (nova_editora < 1 || nova_editora > 2) {
                        limpar_tela();
                        pular_linha();
                        cout << "\t\t\t\t\tOPCAO INVALIDA. Escolha entre 1 e 2." << endl;
                        pular_linha();
                        pausar_tela();
                        limpar_tela();
                        nova_editora = 1;
                    }
                }
            } while (nova_editora < 1 || nova_editora > 2);
            cont_editora++;
        }
        limpar_tela();
    } while (nova_editora == 1 && cont_editora < TAM_editora);
}

void mostrar_editora (Biblioteca limite_editora[]) {
    for (int i = 0; i < cont_editora; i++) {
        cout << "\tEditora " << "(" << i << "): " << limite_editora[i].editora.nome_editora << endl;
    }
}

void cadastrar_livro (Biblioteca *&limite_livro, Biblioteca limite_autor[], Biblioteca limite_editora[], int &TAM_livro) {
    int escolha = 0;
    int novo_livro = 0;

    limite_livro = new Biblioteca[TAM_livro];
    if (cont_livro == TAM_livro) aumentar_vetor (limite_livro, TAM_livro);


    do {
        if (cont_livro < TAM_livro) {
            bool autor_cadastrado;

            cout << "\t\tBIBLIOTECA" << endl;
            pular_linha();
            limpar_quebra_de_linha();
            cout << "Digite o titulo do livro: ";
            getline (cin, limite_livro[cont_livro].obra.titulo.nome_livro);
            cout << "Digite o assunto: ";
            getline(cin, limite_livro[cont_livro].obra.conteudo.tema);
            pular_linha();
            do {
                autor_cadastrado = false;
                for (int i = 0; i < TAM_livro; i++) {
                    cout << "\t   AUTORES CADASTRADOS" << endl;
                    pular_linha();
                    mostrar_autor(limite_autor);
                    pular_linha();
                    do {
                        cout << "Escolha o autor da obra: ";
                        cin >> escolha;
                    } while (escolha < 0 && escolha > TAM_livro);
                    if (limite_livro[escolha].obra.escritor.nome_autor == limite_autor[i].escritor.nome_autor) {
                        autor_cadastrado = true;
                    }
                    break;
                }
                if (autor_cadastrado) {
                    limpar_tela();
                    cout << "\t\t\t\tO Autor ja tem um livro cadastrado na biblioteca" << endl;
                    pular_linha();
                    pausar_tela();
                    limpar_tela();
                }
            } while (autor_cadastrado);
            limite_livro[cont_livro].obra.escritor.nome_autor = limite_autor[escolha].escritor.nome_autor;
            pular_linha();
            do {
                cout << "\t  EDITORAS CADASTRADAS" << endl;
                pular_linha();
                mostrar_editora(limite_editora);
                pular_linha();
                cout << "Escolha a Editora da obra: ";
                cin >> escolha;
            } while (escolha < 0 && escolha > TAM_livro);
            limite_livro[cont_livro].obra.editora.nome_editora = limite_editora[escolha].editora.nome_editora;
            pular_linha();
            do {
                if (cont_livro < TAM_livro) {
                    cout << "Deseja cadastrar outro livro?" << endl;
                    pular_linha();
                    cout << "\t1 - SIM" << endl;
                    cout << "\t2 - NAO" << endl;
                    pular_linha();
                    cout << "Escolha: ";
                    cin >> novo_livro;
                    if (novo_livro < 1 || novo_livro > 2) {
                        limpar_tela();
                        pular_linha();
                        cout << "\t\t\t\t\tOPCAO INVALIDA. Escolha entre 1 e 2." << endl;
                        pular_linha();
                        pausar_tela();
                        limpar_tela();
                        novo_livro = 1;
                    }
                }
            } while (novo_livro < 1 || novo_livro > 2);
            cont_livro++;
        }
        limpar_tela();
    } while (novo_livro == 1 && cont_livro < TAM_livro);
}

void mostrar_livros (Biblioteca limite_livro[]) {
    for (int i = 0; i < cont_livro; i++) {
        if (!limite_livro[i].obra.titulo.nome_livro.empty()) {
            cout << "\tLIVRO (" << i << ")" << endl;
        }
        pular_linha();
        if (!limite_livro[i].obra.titulo.nome_livro.empty()) {
            cout << "\tTitulo: " << limite_livro[i].obra.titulo.nome_livro << " (Livro)" << endl;
        }

        if (!limite_livro[i].obra.conteudo.tema.empty()) {
            cout << "\tAssunto: " << limite_livro[i].obra.conteudo.tema << endl;
        }

        if (!limite_livro[i].obra.escritor.nome_autor.empty()) {
            cout << "\tAutor: " << limite_livro[i].obra.escritor.nome_autor << endl;
        }

        if (!limite_livro[i].obra.editora.nome_editora.empty()) {
            cout << "\tEditora: " << limite_livro[i].obra.editora.nome_editora << endl;
        }
        pular_linha();
    }
}

void cadastrar_revista(Biblioteca *&limite_revista, Biblioteca limite_editora[], int &TAM_revista) {
    int escolha = 0;
    int nova_revista = 0;

    limite_revista = new Biblioteca[TAM_revista];
    if (cont_revista == TAM_revista) aumentar_vetor (limite_revista, TAM_revista);

    do {
        if (cont_revista < TAM_revista) {
            cout << "\t\tBIBLIOTECA" << endl;
            pular_linha();
            limpar_quebra_de_linha();
            cout << "Digite o titulo da revista: ";
            getline (cin, limite_revista[cont_revista].magazine.titulo.nome_revista);
            cout << "Digite o assunto: ";
            getline(cin, limite_revista[cont_revista].magazine.conteudo.tema);
            pular_linha();
            do {
                cout << "\t\tEDITORAS CADASTRADAS" << endl;
                pular_linha();
                mostrar_editora(limite_editora);
                pular_linha();
                cout << "Escolha a Editora dessa revista: ";
                cin >> escolha;
            } while (escolha < 0 && escolha > TAM_revista);
            limite_revista[cont_revista].magazine.editora.nome_editora = limite_editora[escolha].editora.nome_editora;
            pular_linha();
            do {
                if (cont_revista < TAM_revista) {
                    cout << "Deseja cadastrar outra revista?" << endl;
                    pular_linha();
                    cout << "\t1 - SIM" << endl;
                    cout << "\t2 - NAO" << endl;
                    pular_linha();
                    cout << "Escolha: ";
                    cin >> nova_revista;
                    if (nova_revista < 1 || nova_revista > 2) {
                        limpar_tela();
                        pular_linha();
                        cout << "\t\t\t\t\tOPCAO INVALIDA. Escolha entre 1 e 2." << endl;
                        pular_linha();
                        pausar_tela();
                        limpar_tela();
                        nova_revista = 1;
                    }
                }
            } while (nova_revista < 1 || nova_revista > 2);
            cont_revista++;
        }
        limpar_tela();
    } while (nova_revista == 1  && cont_revista < TAM_revista);
}

void mostrar_revistas (Biblioteca limite_revista[]) {
    for (int i = 0; i < cont_revista; i++) {
        if (!limite_revista[i].magazine.titulo.nome_revista.empty()) {
            cout << "\tREVISTA (" << i << ")" << endl;
        }
        pular_linha();
        if (!limite_revista[i].magazine.titulo.nome_revista.empty()) {
            cout << "\tTitulo: " << limite_revista[i].magazine.titulo.nome_revista << " (Revista)" << endl;
        }
        if (!limite_revista[i].magazine.conteudo.tema.empty()) {
            cout << "\tAssunto: " << limite_revista[i].magazine.conteudo.tema << endl;
        }
        if (!limite_revista[i].magazine.editora.nome_editora.empty()) {
            cout << "\tEditora: " << limite_revista[i].magazine.editora.nome_editora << endl;
        }
        pular_linha();
    }
}

void retirar_livros (Biblioteca limite_usuario[], Biblioteca limite_livro[], int &TAM_livro) {
    static int cont = 0;
    int escolha;
    bool livro_escolhido;

    cout << "Qual Usuario esta retirando o Livro?" << endl;
    pular_linha();
    mostrar_usuario(limite_usuario);
    pular_linha();
    cout << "Usuario numero: ";
    cin >> cont;
    pular_linha();

    cout << "\t\tLIVROS CADASTRADOS" << endl;
    pular_linha();
    do {
        livro_escolhido = false;
        mostrar_livros(limite_livro);

        do {
            cout << "Escolha o livro que deseja retirar: ";
            cin >> escolha;
        } while (escolha < -1 && escolha > TAM_livro);

        for (int i = 0; i < TAM_livro; i++) {
            if (limite_usuario[i].obra.pessoa.nome == limite_livro[escolha].obra.titulo.nome_livro) {
                livro_escolhido = true;
                break;
            }
        }
        if (livro_escolhido) {
            limpar_tela();
            cout << "\tLivro ja retirado. Tente escolher outro!" << endl;
            pausar_tela();
            limpar_tela();
        }

    } while (livro_escolhido);
    limite_usuario[cont].obra.pessoa.nome = limite_livro[escolha].obra.titulo.nome_livro;
    pular_linha();
    cout << "\tLivro retirado na data (dd/mm/aa): ";
    scanf("%d/%d/%d", &limite_usuario[cont].obra.pessoa.data.d, &limite_usuario[cont].obra.pessoa.data.m, &limite_usuario[cont].obra.pessoa.data.a);
    pular_linha();
    cout << "\t\tLivro retirado com sucesso!" << endl;
    pular_linha();
    pausar_tela();
    limpar_tela();
}

void retirar_revistas (Biblioteca limite_usuario[], Biblioteca limite_revista[], int &TAM_revista) {
    static int cont = 0;
    int escolha;
    bool revista_escolhida;

    cout << "\tQual Usuario esta retirando a Revistra?" << endl;
    pular_linha();
    mostrar_usuario(limite_usuario);
    pular_linha();
    cout << "Usuario numero: ";
    cin >> cont;
    pular_linha();
    cout << "\t\tREVISTAS CADASTRADAS" << endl;
    pular_linha();
    do {
        revista_escolhida = false;
        mostrar_revistas(limite_revista);
        do {
            cout << "Escolha a revista que deseja retirar: ";
            cin >> escolha;
        } while (escolha < 0 && escolha > TAM_revista);
        for (int i = 0; i < TAM_revista; i++) {
            if (limite_usuario[i].magazine.humano.nome == limite_revista[escolha].magazine.titulo.nome_revista) {
                revista_escolhida = true;
                break;
            }
        }
        if (revista_escolhida) {
            limpar_tela();
            cout << "\tRevista ja retirado. Tente escolher outro!" << endl;
            pausar_tela();
            limpar_tela();
        }
    } while (revista_escolhida);
    limite_usuario[cont].magazine.humano.nome = limite_revista[escolha].magazine.titulo.nome_revista;
    pular_linha();
    cout << "\tRevista retirado na data (dd/mm/aa): ";
    scanf("%d/%d/%d", &limite_usuario[cont].magazine.humano.data.d, &limite_usuario[cont].magazine.humano.data.m, &limite_usuario[cont].magazine.humano.data.a);
    pular_linha();
    cout << "\t\tRevista retirado com sucesso!" << endl;
    pular_linha();
    pausar_tela();
    limpar_tela();
}

void modificar_autor (Biblioteca limite_autor[], Biblioteca limite_livro[], int &TAM_autor, int &TAM_livro) {
    int escolha;
    string modificar;
    do {
        cout << "\tAUTORES CADASTRADOS" << endl;
        pular_linha();
        mostrar_autor(limite_autor);
        pular_linha();
        cout << "Escolha o Autor que deseja modificar: ";
        cin >> escolha;
        pular_linha();
        limpar_tela();
    } while (escolha < 0 && escolha > TAM_autor);

    cout << "\tAutor: \"" << limite_autor[escolha].escritor.nome_autor << "\" Escolhido." << endl;
    cout << "\tModificar para: ";
    limpar_quebra_de_linha();
    getline (cin, modificar);
    limpar_quebra_de_linha();
    for (int i = 0; i < TAM_livro; i++) {
        if (limite_autor[escolha].escritor.nome_autor == limite_livro[i].obra.escritor.nome_autor) {
            limite_livro[i].obra.escritor.nome_autor = modificar;
        }
    }
    limite_autor[escolha].escritor.nome_autor = modificar;
    pular_linha();
    cout << "\t\tModificado!" << endl;
    pular_linha();
    pausar_tela();
    limpar_tela();
}

void modificar_editora (Biblioteca limite_editora[], Biblioteca limite_livro[], Biblioteca limite_revista[], int &TAM_editora, int &TAM_livro,int &TAM_revista) {
    int escolha;
    string modificar;
    do {
        cout << "\t\tEDITORAS CADASTRADAS" << endl;
        pular_linha();
        mostrar_editora(limite_editora);
        pular_linha();
        cout << "\tEscolha a Editora que deseja modificar: ";
        cin >> escolha;
        pular_linha();
        limpar_tela();
    } while (escolha < 0 && escolha > TAM_editora);

    cout << "\tEditora: \"" << limite_editora[escolha].editora.nome_editora << "\" Escolhida." << endl;
    cout << "\tModificar para: ";
    limpar_quebra_de_linha();
    getline (cin, modificar);
    limpar_quebra_de_linha();
    for (int i = 0; i < TAM_livro; i++) {
        if (limite_editora[escolha].editora.nome_editora == limite_livro[escolha].obra.editora.nome_editora) {
            limite_livro[escolha].obra.editora.nome_editora = modificar;
        }
    }
    for (int i = 0; i < TAM_revista; i++) {
        if (limite_editora[escolha].editora.nome_editora == limite_revista[escolha].magazine.editora.nome_editora) {
            limite_revista[escolha].magazine.editora.nome_editora = modificar;
        }
    }
    limite_editora[escolha].editora.nome_editora = modificar;
    pular_linha();
    cout << "\t\tModificada!" << endl;
    pular_linha();
    pausar_tela();
    limpar_tela();
}

void modificar_livro (Biblioteca limite_livro[], int &TAM_livro) {
    int escolha_1, escolha_2;
    string modificar;

    do {
        cout << "\t\tLIVROS CADASTRADOS" << endl;
        pular_linha();
        mostrar_livros(limite_livro);
        cout << "Escolha o Livro que deseja modificar: ";
        cin >> escolha_1;
        pular_linha();
        limpar_tela();
    } while (escolha_1 < 0 && escolha_1 > TAM_livro);

    do {
        cout << "O que deseja modificar na obra?" << endl;
        pular_linha();
        cout << "\t1 - Titulo" << endl;
        cout << "\t2 - Assunto" << endl;
        pular_linha();
        cout << "Escolha: ";
        cin >> escolha_2;
        pular_linha();
        limpar_tela();
    } while (escolha_2 < 0 || escolha_2 > 2);

    if (escolha_2 == 1) {
        cout << "\tTitulo: \"" << limite_livro[escolha_1].obra.titulo.nome_livro << "\" Escolhido." << endl;
        cout << "\tModificar para: ";
        limpar_quebra_de_linha();
        getline (cin, modificar);
        limpar_quebra_de_linha();
        limite_livro[escolha_1].obra.titulo.nome_livro = modificar;
        pular_linha();
        cout << "\t\tModificado!" << endl;
        pular_linha();
        pausar_tela();
        limpar_tela();
    } else if (escolha_2 == 2) {
        cout << "\tAssunto: \"" << limite_livro[escolha_1].obra.conteudo.tema << "\" Escolhido." << endl;
        cout << "\tModificar para: ";
        limpar_quebra_de_linha();
        getline (cin, modificar);
        limpar_quebra_de_linha();
        limite_livro[escolha_1].obra.conteudo.tema = modificar;
        pular_linha();
        cout << "\t\tModificado!" << endl;
        pular_linha();
        pausar_tela();
        limpar_tela();
    }
}

void modificar_revista (Biblioteca limite_revista[], int &TAM_revista) {
    int escolha_1, escolha_2;
    string modificar;

    do {
        cout << "\t\tREVISTAS CADASTRADOS" << endl;
        pular_linha();
        mostrar_revistas(limite_revista);
        cout << "Escolha a Revista que deseja modificar: ";
        cin >> escolha_1;
        pular_linha();
        limpar_tela();
    } while (escolha_1 < 0 && escolha_1 > TAM_revista);

    do {
        cout << "O que deseja modificar?" << endl;
        pular_linha();
        cout << "\t1 - Titulo" << endl;
        cout << "\t2 - Assunto" << endl;
        pular_linha();
        cout << "Escolha: " << endl;
        cin >> escolha_2;
        limpar_tela();
    } while (escolha_2 < 0 || escolha_2 > 2);

    if (escolha_2 == 1) {
        cout << "\tTitulo: \"" << limite_revista[escolha_1].magazine.titulo.nome_revista << "\" Escolhido." << endl;
        cout << "\tModificar para: ";
        limpar_quebra_de_linha();
        getline (cin, modificar);
        limpar_quebra_de_linha();
        limite_revista[escolha_1].magazine.titulo.nome_revista = modificar;
        pular_linha();
        cout << "\t\tModificado!" << endl;
        pular_linha();
        pausar_tela();
        limpar_tela();
    } else if (escolha_2 == 2) {
        cout << "\tAssunto: \"" << limite_revista[escolha_1].magazine.conteudo.tema  << "\" Escolhido." << endl;
        cout << "\tModificar para: ";
        limpar_quebra_de_linha();
        getline (cin, modificar);
        limpar_quebra_de_linha();
        limite_revista[escolha_1].magazine.conteudo.tema = modificar;
        pular_linha();
        cout << "\t\tModificado!" << endl;
        pular_linha();
        pausar_tela();
        limpar_tela();
    }
}

void mostrar_obras_titulo(Biblioteca limite_livro[], Biblioteca limite_revista[], int &TAM_livro, int &TAM_revista) {
    string titulo;
    bool titulo_encontrada = false;
    int pesquisar_novamente;

    do {
        do {
            cout << "\t\tBIBLIOTECA" << endl;
            pular_linha();
            limpar_quebra_de_linha();
            cout << "Digite o Titulo do livro: ";
            getline (cin, titulo);
            pular_linha();
            cout << "A(s) obra(s) com o Titulo " << titulo << " cadastrados na biblioteca sao estes:" << endl;
            pular_linha();
            for (int i = 0; i < TAM_livro || i < TAM_revista; i++) {
                if (limite_livro[i].obra.titulo.nome_livro == titulo) {
                    titulo_encontrada = true;
                    cout << "\tTitulo: " << limite_livro[i].obra.titulo.nome_livro << " (Livro)" << endl;
                    cout << "\tAssunto: " << limite_livro[i].obra.conteudo.tema << endl;
                    cout << "\tAutor: " << limite_livro[i].obra.escritor.nome_autor << endl;
                    cout << "\tEditora: " << limite_livro[i].obra.editora.nome_editora << endl;
                    pular_linha();
                }
                if (limite_revista[i].magazine.titulo.nome_revista == titulo) {
                    titulo_encontrada = true;
                    cout << "\tTitulo: " << limite_revista[i].magazine.titulo.nome_revista << " (Revista)" << endl;
                    cout << "\tAssunto: " << limite_revista[i].magazine.conteudo.tema << endl;
                    cout << "\tEditora: " << limite_revista[i].magazine.editora.nome_editora << endl;
                    pular_linha();
                }
            }
            if (!titulo_encontrada) {
                cout << "\tNao ha obras cadastradas com esse Titulo " << titulo  << "." << endl;
                pular_linha();
            }
            pular_linha();
            do {
                cout << "Deseja pesquisar por outro Titulo?" << endl;
                pular_linha();
                cout << "\t1 - SIM" << endl;
                cout << "\t2 - NAO" << endl;
                pular_linha();
                cout << "Escolha: ";
                cin >> pesquisar_novamente;
                limpar_tela();
                if (pesquisar_novamente < 1 || pesquisar_novamente > 2) {
                    limpar_tela();
                    pular_linha();
                    cout << "\t\t\t\t\tOPCAO INVALIDA. Escolha entre 1 e 2." << endl;
                    pular_linha();
                    pausar_tela();
                    limpar_tela();
                }
            } while (pesquisar_novamente < 1 || pesquisar_novamente > 2);
            limpar_tela();
        } while (pesquisar_novamente < 1 || pesquisar_novamente > 2);
    }  while (pesquisar_novamente != 2);
}

void mostrar_obras_autor(Biblioteca limite_autor[], int &TAM_autor) {
    string autor;
    bool obra_encontrada = false;
    int pesquisar_novamente;

    do {
        do {
            cout << "\t\tBIBLIOTECA" << endl;
            pular_linha();
            limpar_quebra_de_linha();
            cout << "Digite o nome do autor(a): ";
            getline (cin, autor);
            pular_linha();
            cout << "A(s) obra(s) do " << autor << " cadastrados na biblioteca sao estes:" << endl;
            pular_linha();
            pular_linha();
            for (int i = 0; i < TAM_autor; i++) {
                if (limite_autor[i].obra.escritor.nome_autor == autor) {
                    obra_encontrada = true;
                    cout << "\tTitulo: " << limite_autor[i].obra.titulo.nome_livro << " (Livro)" << endl;
                    cout << "\tAssunto: " << limite_autor[i].obra.conteudo.tema << endl;
                    cout << "\tAutor: " << limite_autor[i].obra.escritor.nome_autor << endl;
                    cout << "\tEditora: " << limite_autor[i].obra.editora.nome_editora << endl;
                    pular_linha();
                }
            }
            if (!obra_encontrada) {
                cout << "\tNao ha obras cadastradas para o autor(a) " << autor << "." << endl;
                pular_linha();
            }
            pular_linha();
            do {
                cout << "Deseja pesquisar outro autor(a)?" << endl;
                pular_linha();
                cout << "\t1 - SIM" << endl;
                cout << "\t2 - NAO" << endl;
                pular_linha();
                cout << "Escolha: ";
                cin >> pesquisar_novamente;
                limpar_tela();
                if (pesquisar_novamente < 1 || pesquisar_novamente > 2) {
                    limpar_tela();
                    pular_linha();
                    cout << "\t\t\t\t\tOPCAO INVALIDA. Escolha entre 1 e 2." << endl;
                    pular_linha();
                    pausar_tela();
                    limpar_tela();
                }
            } while (pesquisar_novamente < 1 || pesquisar_novamente > 2);
            limpar_tela();
        } while (pesquisar_novamente < 1 || pesquisar_novamente > 2);
    }  while (pesquisar_novamente != 2);
}

void mostrar_obras_editora(Biblioteca limite_livro[], Biblioteca limite_revista[], int &TAM_livro, int &TAM_revista) {
    string editora;
    bool editora_encontrada = false;
    int pesquisar_novamente;

    do {
        do {
            cout << "\t\tBIBLIOTECA" << endl;
            pular_linha();
            limpar_quebra_de_linha();
            cout << "Digite o nome da editora: ";
            getline (cin, editora);
            pular_linha();
            cout << "A(s) obra(s) da " << editora << " cadastrados na biblioteca sao estas:" << endl;
            pular_linha();
            pular_linha();
            for (int i = 0; i < TAM_livro || i < TAM_revista; i++) {
                if (limite_livro[i].obra.editora.nome_editora == editora) {
                    editora_encontrada = true;
                    cout << "\tTitulo: " << limite_livro[i].obra.titulo.nome_livro << " (Livro)" << endl;
                    cout << "\tAssunto: " << limite_livro[i].obra.conteudo.tema << endl;
                    cout << "\tAutor: " << limite_livro[i].obra.escritor.nome_autor << endl;
                    cout << "\tEditora: " << limite_livro[i].obra.editora.nome_editora << endl;
                    pular_linha();
                }
                if (limite_revista[i].magazine.editora.nome_editora == editora) {
                    editora_encontrada = true;
                    cout << "\tTitulo: " << limite_revista[i].magazine.titulo.nome_revista << " (Revista)" << endl;
                    cout << "\tAssunto: " << limite_revista[i].magazine.conteudo.tema << endl;
                    cout << "\tEditora: " << limite_revista[i].magazine.editora.nome_editora << endl;
                    pular_linha();
                }
            }
            if (!editora_encontrada) {
                cout << "\tNao ha obras cadastradas para a editora " << editora << "." << endl;
                pular_linha();
            }
            pular_linha();
            do {
                cout << "Deseja pesquisar outra editora?" << endl;
                pular_linha();
                cout << "\t1 - SIM" << endl;
                cout << "\t2 - NAO" << endl;
                pular_linha();
                cout << "Escolha: ";
                cin >> pesquisar_novamente;
                limpar_tela();
                if (pesquisar_novamente < 1 || pesquisar_novamente > 2) {
                    limpar_tela();
                    pular_linha();
                    cout << "\t\t\t\t\tOPCAO INVALIDA. Escolha entre 1 e 2." << endl;
                    pular_linha();
                    pausar_tela();
                    limpar_tela();
                }
            } while (pesquisar_novamente < 1 || pesquisar_novamente > 2);
            limpar_tela();
        } while (pesquisar_novamente < 1 || pesquisar_novamente > 2);
    }  while (pesquisar_novamente != 2);
}

void mostras_obras_assunto(Biblioteca limite_livro[], Biblioteca limite_revista[], int &TAM_livro, int &TAM_revista) {
    string assunto;
    bool assunto_encontrado = false;
    int pesquisar_novamente;

    do {
        do {
            cout << "\t\tBIBLIOTECA" << endl;
            pular_linha();
            limpar_quebra_de_linha();
            cout << "Digite o assunto do seu interesse: ";
            getline (cin, assunto);
            pular_linha();
            cout << "Obra(s) encontradas com base no assunto: " << assunto << endl;
            pular_linha();
            pular_linha();
            for (int i = 0; i < TAM_livro || i < TAM_revista; i++) {
                if (limite_livro[i].obra.conteudo.tema == assunto) {
                    assunto_encontrado = true;
                    cout << "\tTitulo: " << limite_livro[i].obra.titulo.nome_livro << " (Livro)" << endl;
                    cout << "\tAssunto: " << limite_livro[i].obra.conteudo.tema << endl;
                    cout << "\tAutor: " << limite_livro[i].obra.escritor.nome_autor << endl;
                    cout << "\tEditora: " << limite_livro[i].obra.editora.nome_editora << endl;
                    pular_linha();
                }
                if (limite_revista[i].magazine.conteudo.tema == assunto) {
                    assunto_encontrado = true;
                    cout << "\tTitulo: " << limite_revista[i].magazine.titulo.nome_revista << " (Revista)" << endl;
                    cout << "\tAssunto: " << limite_revista[i].magazine.conteudo.tema << endl;
                    cout << "\tEditora: " << limite_revista[i].magazine.editora.nome_editora << endl;
                    pular_linha();
                }
            }
            if (!assunto_encontrado) {
                cout << "\tNao ha obras cadastradas para o assunto: " << assunto << "." << endl;
                pular_linha();
            }
            pular_linha();
            do {
                cout << "Deseja pesquisar outro assunto?" << endl;
                pular_linha();
                cout << "\t1 - SIM" << endl;
                cout << "\t2 - NAO" << endl;
                pular_linha();
                cout << "Escolha: ";
                cin >> pesquisar_novamente;
                limpar_tela();
                if (pesquisar_novamente < 1 || pesquisar_novamente > 2) {
                    limpar_tela();
                    pular_linha();
                    cout << "\t\t\t\t\tOPCAO INVALIDA. Escolha entre 1 e 2." << endl;
                    pular_linha();
                    pausar_tela();
                    limpar_tela();
                }
            } while (pesquisar_novamente < 1 || pesquisar_novamente > 2);
            limpar_tela();
        } while (pesquisar_novamente < 1 || pesquisar_novamente > 2);
    }  while (pesquisar_novamente != 2);
}

void devolucao_livro(Biblioteca limite_usuario[], int &TAM_usuario) {
    bool devolver;
    int dia_atual = 10;
    int mes_atual = 5;
    int ano_atual = 2023;

    for (int i = 0; i < TAM_usuario; i++) {
        limite_usuario[i].atraso.dd = limite_usuario[i].obra.pessoa.data.d;
        limite_usuario[i].atraso.mm = limite_usuario[i].obra.pessoa.data.m;
        limite_usuario[i].atraso.aa = limite_usuario[i].obra.pessoa.data.a;
        limite_usuario[i].atraso.dd += 7;

        if (limite_usuario[i].atraso.dd > 31) {
            limite_usuario[i].atraso.dd -= 31;
            limite_usuario[i].atraso.mm++;
        }

        if (limite_usuario[i].atraso.mm > 12) {
            limite_usuario[i].atraso.mm -= 12;
            limite_usuario[i].atraso.aa++;
        }
    }

    for (int i = 0; i < TAM_usuario; i++) {
        devolver = false;

        if (limite_usuario[i].atraso.aa < ano_atual) {
            devolver = true;
        }
        else if (limite_usuario[i].atraso.aa == ano_atual && limite_usuario[i].atraso.mm < mes_atual) {
            devolver = true;
        }
        else if (limite_usuario[i].atraso.aa == ano_atual && limite_usuario[i].atraso.mm == mes_atual && limite_usuario[i].atraso.dd < dia_atual) {
            devolver = true;
        }

        if (devolver && limite_usuario[i].obra.pessoa.nome[0] != '\0') {
            cout << "Usuario com pendencia de Livro: " << endl;
            pular_linha();
            cout << "\tUsuario " << "(" << i << "): " << limite_usuario[i].usuario.nome << endl;
            cout << "\tLivro: " <<  limite_usuario[i].obra.pessoa.nome << endl;
            cout << "\tData de retirada: " << limite_usuario[i].obra.pessoa.data.d << "/" << limite_usuario[i].obra.pessoa.data.m << "/" << limite_usuario[i].obra.pessoa.data.a << endl;
            pular_linha();
        }
    }
}

void devolucao_revista (Biblioteca limite_usuario[], int &TAM_usuario) {
    bool devolver;
    int dia_atual = 10;
    int mes_atual = 5;
    int ano_atual = 2023;

    for (int i = 0; i < TAM_usuario; i++) {
        limite_usuario[i].atraso.dd = limite_usuario[i].magazine.humano.data.d;
        limite_usuario[i].atraso.mm = limite_usuario[i].magazine.humano.data.m;
        limite_usuario[i].atraso.aa = limite_usuario[i].magazine.humano.data.a;
        limite_usuario[i].atraso.dd += 7;

        if (limite_usuario[i].atraso.dd > 31) {
            limite_usuario[i].atraso.dd -= 31;
            limite_usuario[i].atraso.mm++;
        }

        if (limite_usuario[i].atraso.mm > 12) {
            limite_usuario[i].atraso.mm -= 12;
            limite_usuario[i].atraso.aa++;
        }
    }

    for (int i = 0; i < TAM_usuario; i++) {
        devolver = false;

        if (limite_usuario[i].atraso.aa < ano_atual) {
            devolver = true;
        }
        else if (limite_usuario[i].atraso.aa == ano_atual && limite_usuario[i].atraso.mm < mes_atual) {
            devolver = true;
        }
        else if (limite_usuario[i].atraso.aa == ano_atual && limite_usuario[i].atraso.mm == mes_atual && limite_usuario[i].atraso.dd < dia_atual) {
            devolver = true;
        }

        if (devolver && limite_usuario[i].magazine.humano.nome[0] != '\0') {
            cout << "Usuario com pendencia de Revista: " << endl;
            pular_linha();
            cout << "\tUsuario " << "(" << i << "): " << limite_usuario[i].usuario.nome << endl;
            cout << "\tRevista: " <<  limite_usuario[i].magazine.humano.nome << endl;
            cout << "\tData de retirada: " << limite_usuario[i].magazine.humano.data.d << "/" << limite_usuario[i].magazine.humano.data.m << "/" << limite_usuario[i].magazine.humano.data.a << endl;
            pular_linha();
        }
    }
    pausar_tela();
    limpar_tela();
}

void historico (Biblioteca limite_usuario[], Biblioteca limite_livro[], Biblioteca limite_revista[], int &TAM_usuario) {
    static int cont = 0;
    cout << "\tHistorico de retiradas de livros e revistas" << endl;
    pular_linha();
    cout << "Deseja ver o Historico de qual Usuario?" << endl;
    pular_linha();
    mostrar_usuario(limite_usuario);
    pular_linha();
    cout << "Usuario numero: ";
    cin >> cont;
    pular_linha();

    cout << "\tUsuario esta com o livro: " << endl;
    pular_linha();
    if (limite_usuario[cont].obra.pessoa.nome.empty()) {
        cout << "\t\tUsuario nao retirou nenhum Livro" << endl;
    } else {
        cout << "\tTitulo: " << limite_usuario[cont].obra.pessoa.nome << " (Livro)" << endl;
        for (int i = 0; i < TAM_usuario; i++) {
            if (limite_usuario[cont].obra.pessoa.nome == limite_livro[i].obra.titulo.nome_livro) {
                cout << "\tAssunto: " << limite_livro[i].obra.conteudo.tema << endl;
                cout << "\tAutor: " << limite_livro[i].obra.escritor.nome_autor << endl;
                cout << "\tEditora: " << limite_livro[i].obra.editora.nome_editora << endl;
                cout << "\tData de retirada: " << limite_usuario[cont].obra.pessoa.data.d << "/" << limite_usuario[cont].obra.pessoa.data.m << "/" << limite_usuario[cont].obra.pessoa.data.a << endl;
                break;
            }
        }
    }
    pular_linha();
    cout << "\tUsuario esta com a revista: " << endl;
    pular_linha();
    if (limite_usuario[cont].magazine.humano.nome.empty()) {
        cout << "\t\tUsuario nao retirou nenhuma Revista" << endl;
    } else {
        cout << "\tTitulo: " << limite_usuario[cont].magazine.humano.nome << " (Revista)" << endl;
        for (int i = 0; i < TAM_usuario; i++) {
            if (limite_usuario[cont].magazine.humano.nome == limite_revista[i].magazine.titulo.nome_revista) {
                cout << "\tAssunto: " << limite_revista[i].magazine.conteudo.tema << endl;
                cout << "\tEditora: " << limite_revista[i].magazine.editora.nome_editora << endl;
                cout << "\tData de retirada: " << limite_usuario[cont].magazine.humano.data.d << "/" << limite_usuario[cont].magazine.humano.data.m << "/" << limite_usuario[cont].magazine.humano.data.a << endl;
                break;
            }
        }
    }
    pular_linha();
    pausar_tela();
    limpar_tela();
}

int main() {

    int menu, opcao_cadastro, opcao_retirar;
    int TAM_usuario = 5, TAM_autor = 5, TAM_editora = 5, TAM_livro = 5, TAM_revista = 5;
    bool verificar_cadastro = false, autor = false, editora = false, livro = false, revista = false;

    Biblioteca *limite_usuario = new Biblioteca[TAM_usuario];
    Biblioteca *limite_autor = new Biblioteca[TAM_autor];
    Biblioteca *limite_editora = new Biblioteca[TAM_editora];
    Biblioteca *limite_livro = new Biblioteca[TAM_livro];
    Biblioteca *limite_revista = new Biblioteca[TAM_revista];

    do {

        cout << "\t\tBEM-VINDO A BIBLIOTECA" << endl;
        pular_linha();
        cout << "O que deseja fazer?" << endl;
        pular_linha();
        cout << "\t1 - Realizar um cadastro" << endl;
        cout << "\t2 - Pesquisar obras por titulo" << endl;
        cout << "\t3 - Pesquisar obras por autor" << endl;
        cout << "\t4 - Pesquisar obras por editora" << endl;
        cout << "\t5 - Pesquisar obras por assunto" << endl;
        cout << "\t6 - Livros/Revistas em atraso de devolucao" << endl;
        cout << "\t7 - Historico de retiradas de um usuario" << endl;
        cout << "\t8 - SAIR" << endl;
        limpar_quebra_de_linha();
        pular_linha();
        cout << "Escolha: ";
        cin >> menu;
        limpar_tela();

        switch (menu) {
        case 1:
            do {
                cout << "\t\tBIBLIOTECA" << endl;
                pular_linha();
                cout << "O que voce deseja cadastrar?" << endl;
                pular_linha();
                cout << "\t1 - Usuario" << endl;
                cout << "\t2 - Retirar um Livro/Revista (CADASTRADOS)" << endl;
                cout << "\t3 - Autor" << endl;
                cout << "\t4 - Editora" << endl;
                cout << "\t5 - Livro" << endl;
                cout << "\t6 - Revista" << endl;
                cout << "\t7 - SAIR" << endl;
                pular_linha();
                cout << "Escolha: ";
                cin >> opcao_cadastro;
                limpar_tela();
                switch (opcao_cadastro) {
                case 1:

                    cadastrar_usuario(limite_usuario, TAM_usuario);
                    pular_linha();
                    verificar_cadastro = true;

                    break;
                case 2:
                    if (verificar_cadastro) {
                        do {
                            cout << "\t\tBIBLIOTECA" << endl;
                            pular_linha();
                            cout << "Deseja retirar um Livro ou uma Revista?" << endl;
                            pular_linha();
                            cout << "\t1 - Livro" << endl;
                            cout << "\t2 - Revista" << endl;
                            cout << "\t3 - SAIR" << endl;
                            pular_linha();
                            cout << "Digite: ";
                            cin >> opcao_retirar;
                            limpar_tela();

                        } while (opcao_retirar < 1 || opcao_retirar > 3);

                        if (opcao_retirar == 1) {
                            if (livro) {
                                limpar_quebra_de_linha();
                                cout << "\t\tBIBLIOTECA" << endl;
                                pular_linha();
                                retirar_livros(limite_usuario, limite_livro, TAM_livro);
                            } else {
                                limpar_tela();
                                pular_linha();
                                cout << "\t\t\tSistema sem livros cadastrados. Cadastre um Livro para poder retirar." << endl;
                                pular_linha();
                                pausar_tela();
                                limpar_tela();
                            }
                        } else if (opcao_retirar == 2) {
                            if (revista) {
                                limpar_quebra_de_linha();
                                cout << "\t\tBIBLIOTECA" << endl;
                                pular_linha();
                                retirar_revistas(limite_usuario, limite_revista, TAM_livro);
                            } else {
                                limpar_tela();
                                pular_linha();
                                cout << "\t\t\tSistema sem revistas cadastradas. Cadastre um Livro para poder retirar." << endl;
                                pular_linha();
                                pausar_tela();
                                limpar_tela();
                            }
                        } else if (opcao_retirar == 3) {
                            break;
                        } else {
                            limpar_tela();
                            pular_linha();
                            cout << "\t\t\t\t\tOPCAO INVALIDA. Escolha entre 1 e 2." << endl;
                            pular_linha();
                            pausar_tela();
                            limpar_tela();
                            break;
                        }
                    } else {
                        limpar_tela();
                        pular_linha();
                        cout << "\t\t\tNenhum Usuario cadastrado. Cadastre alguem para retirar um Livro/Revista." << endl;
                        pular_linha();;
                        pausar_tela();
                        limpar_tela();
                    }
                    break;
                case 3:
                    int opcao_autor;

                    cout << "\t\tBIBLIOTECA" << endl;
                    pular_linha();
                    cout << "Deseja cadastrar um Autor ou modificar um ja existente?" << endl;
                    pular_linha();
                    cout << "\t1 - Cadastrar" << endl;
                    cout << "\t2 - Modificar" << endl;
                    cout << "\t3 - SAIR" << endl;
                    pular_linha();
                    cout << "Escolha: ";
                    cin >> opcao_autor;
                    limpar_tela();

                    if (opcao_autor == 1) {

                        cadastrar_autor(limite_autor, TAM_autor);
                        autor = true;

                    } else
                        if (opcao_autor == 2) {
                            if (!autor) {
                                limpar_tela();
                                pular_linha();
                                cout << "\t\t\tSistema sem autores cadastrados. Cadastre um Autor para poder modificar." << endl;
                                pular_linha();
                                pausar_tela();
                                limpar_tela();
                            } else {
                                modificar_autor(limite_autor, limite_livro, TAM_autor, TAM_livro);
                            }
                        } else {
                            break;
                        }
                    pular_linha();
                    break;
                case 4:
                    int opcao_editora;

                    cout << "\t\tBIBLIOTECA" << endl;
                    pular_linha();
                    cout << "Deseja cadastrar uma Editora ou modificar um ja existente?" << endl;
                    pular_linha();
                    cout << "\t1 - Cadastrar" << endl;
                    cout << "\t2 - Modificar" << endl;
                    cout << "\t3 - SAIR" << endl;
                    pular_linha();
                    cout << "Escolha: ";
                    cin >> opcao_editora;
                    limpar_tela();

                    if (opcao_editora == 1) {

                        cadastrar_editora(limite_editora, TAM_editora);
                        editora = true;

                    } else
                        if (opcao_editora == 2) {
                            if (!editora) {
                                limpar_tela();
                                pular_linha();
                                cout << "\t\t\tSistema sem editoras cadastradas. Cadastre uma Editora para poder modificar." << endl;
                                pular_linha();
                                pausar_tela();
                                limpar_tela();
                            } else {
                                modificar_editora(limite_editora, limite_livro, limite_revista, TAM_editora, TAM_livro, TAM_revista);
                            }
                        } else {
                            break;
                        }
                    pular_linha();
                    break;
                case 5:
                    int opcao_livro;

                    if (autor && editora) {
                        cout << "\t\tBIBLIOTECA" << endl;
                        pular_linha();
                        cout << "Deseja cadastrar um Livro ou modificar um ja existente?" << endl;
                        pular_linha();
                        cout << "\t1 - Cadastrar" << endl;
                        cout << "\t2 - Modificar" << endl;
                        cout << "\t3 - SAIR" << endl;
                        pular_linha();
                        cout << "Escolha: ";
                        cin >> opcao_livro;
                        limpar_tela();

                        if (opcao_livro == 1) {

                            cadastrar_livro(limite_livro, limite_autor, limite_editora, TAM_livro);
                            livro = true;

                        } else
                            if (opcao_livro == 2) {
                                if (!livro) {
                                    limpar_tela();
                                    pular_linha();
                                    cout << "\t\t\tSistema sem livros cadastrados. Cadastre um Livro para poder modificar." << endl;
                                    pular_linha();
                                    pausar_tela();
                                    limpar_tela();
                                } else {
                                    modificar_livro(limite_livro, TAM_livro);
                                }
                            } else {
                                break;
                            }
                        pular_linha();
                    } else {
                        limpar_tela();
                        pular_linha();
                        cout << "\tSistema sem autores e editoras cadastradas. Cadastre um Autor e uma Editora para poder cadastrar um livro." << endl;
                        pular_linha();
                        pausar_tela();
                        limpar_tela();
                    }
                    break;
                case 6:
                    int opcao_revista;

                    if (editora) {
                        cout << "\t\tBIBLIOTECA" << endl;
                        pular_linha();
                        cout << "Deseja cadastrar uma Revista ou modificar um ja existente?" << endl;
                        pular_linha();
                        cout << "\t1 - Cadastrar" << endl;
                        cout << "\t2 - Modificar" << endl;
                        cout << "\t3 - SAIR" << endl;
                        pular_linha();
                        cout << "Escolha: ";
                        cin >> opcao_revista;
                        limpar_tela();

                        if (opcao_revista == 1) {

                            cadastrar_revista(limite_revista, limite_editora, TAM_revista);
                            revista = true;

                        } else
                            if (opcao_revista == 2) {
                                if (!revista) {
                                    limpar_tela();
                                    pular_linha();
                                    cout << "\t\t\tSistema sem revistas cadastradas. Cadastre um Livro para poder modificar." << endl;
                                    pular_linha();
                                    pausar_tela();
                                    limpar_tela();
                                } else {
                                    modificar_revista(limite_revista, TAM_revista);
                                }
                            } else {
                                break;
                            }
                    } else {
                        limpar_tela();
                        pular_linha();
                        cout << "\t\tSistema sem editoras cadastradas. Cadastre uma Editora para poder cadastrar uma revista." << endl;
                        pular_linha();
                        pausar_tela();
                        limpar_tela();
                    }
                    pular_linha();
                    break;
                case 7:
                    break;
                default:
                    limpar_tela();
                    pular_linha();
                    cout << "\t\t\t\t\tOPCAO INVALIDA. Escolha entre 1 e 8." << endl;
                    pular_linha();
                    pausar_tela();
                    limpar_tela();
                    break;
                }
            } while (opcao_cadastro != 7);
            break;
        case 2:
            mostrar_obras_titulo(limite_livro, limite_revista, TAM_livro, TAM_revista);
            break;
        case 3:
            mostrar_obras_autor(limite_autor, TAM_autor);
            break;
        case 4:
            mostrar_obras_editora(limite_livro, limite_revista, TAM_livro, TAM_revista);
            break;
        case 5:
            mostras_obras_assunto(limite_livro, limite_revista, TAM_livro, TAM_revista);
            break;
        case 6:
            if (verificar_cadastro) {
                limpar_tela();
                cout << "\tLIVROS/REVISTAS EM ATRASO DE DEVOLUCAO" << endl;
                pular_linha();
                devolucao_livro(limite_usuario, TAM_usuario);
                devolucao_revista(limite_usuario, TAM_usuario);
            } else {
                limpar_tela();
                pular_linha();
                cout << "\t\t\tNenhum Usuario cadastrado. Cadastre alguem para retirar um Livro/Revista." << endl;
                pular_linha();;
                pausar_tela();
                limpar_tela();
            }
            break;
        case 7:
            if (verificar_cadastro) {
                historico(limite_usuario, limite_livro, limite_revista, TAM_usuario);
            } else {
                limpar_tela();
                pular_linha();
                cout << "\t\t\tNenhum Usuario cadastrado. Cadastre alguem para retirar um Livro/Revista." << endl;
                pular_linha();;
                pausar_tela();
                limpar_tela();
            }
            break;
        case 8:
            break;
        default:
            limpar_tela();
            pular_linha();
            cout << "\t\t\t\t\tOPCAO INVALIDA. Escolha entre 1 e 8." << endl;
            pular_linha();
            pausar_tela();
            limpar_tela();
            break;
        }
    } while (menu != 8);

    delete[] limite_usuario;
    delete[] limite_autor;
    delete[] limite_editora;
    delete[] limite_livro;
    delete[] limite_revista;

    return 0;
}
