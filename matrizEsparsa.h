#ifndef MATRIZESPARSA_H_INCLUDED
#define MATRIZESPARSA_H_INCLUDED

struct celula{
    int linha;
    int coluna;
    int valor;
    struct celula *direita;
    struct celula *abaixo;
};

typedef struct{
    struct celula *cabeca;
    int totalLinha;
    int totalColuna;
} Matriz;

Matriz* inicializarMatriz();                                          // aloca memoria para o tipo Matriz

struct celula* inicializarCabecaMatriz();                             // aloca memoria para o tipo struct celula, funcao de apoio para a inicializar matriz (logo acima desta)!!!!!

void lerArquivoMatriz(Matriz *x, char *fnm);

void criarCabecasMatriz(Matriz *x);

void criarCabecasLinhas(Matriz *x);                                   // funcao auxiliar para criarCabecas Matriz!!

void criarCabecasColunas(Matriz *x);                                  // funcao auxiliar para criarCabecasMatriz!!

struct celula* inicializarCabecaLinha();                              // funcao auxiliar para criarCabecasLinhas

struct celula* inicializarCabecaColuna();                             // funcao auxiliar para criarCabecasColunas!!

void montarMatriz(Matriz *x, int linha, int coluna, int valor);       // encadeia as celulas no seu devido lugar!!

void encadearLinha(struct celula *cabecaMatriz, struct celula *aux);  // funcao auxiliar para montarMatriz!!

void encadearColuna(struct celula *cabecaMatriz, struct celula *aux); // funcao auxiliar para montarMatriz!!

struct celula* criarCelula(int linha, int coluna, int valor);         // funcao auxiliar para montarMatriz!!

Matriz* somaMatriz(Matriz *x, Matriz *y);

Matriz* subtraiMatriz(Matriz *x, Matriz *y);

int existeCelula(Matriz *x, int linha, int coluna);                   // funcao auxiliar para soma e subtracao!!

int valorCelula(Matriz *x, int linha, int coluna);                    // funcao auxiliar para soma e subtracao!!

#endif // MATRIZESPARSA_H_INCLUDED
