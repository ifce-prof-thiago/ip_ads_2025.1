// Equipe:Robson,Tainah,Calil,Ilbs,Samuel Honorato

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;


// criar os valores de bairros e dias
const int numBairros = 5;
const int numDias = 7;

// criar a estrutura bairro que comporta 3 matrizes
struct {
    int temperatura[numBairros][numDias];
    int poluição[numBairros][numDias];
    int trafego[numBairros][numDias];
} Bairros;

int main() {
    // iniciar a contagem dos numeros aleatorios
    srand(time(NULL));

    // gerar numeros aleatorios e colocar nas matrizes
    for (int k = 0; k < numBairros * numDias; k++) {
        Bairros.temperatura[k / numDias][k % numDias] = rand() % 36 + 5;
    }


    for (int i = 0; i < numBairros; i++) {
        for (int j = 0; j < numDias; j++) {
            Bairros.poluição[i][j] = rand() % 401 + 200;
        }
    }

    for (int i = 0; i < numBairros; i++) {
        for (int j = 0; j < numDias; j++) {
            Bairros.trafego[i][j] = rand() % 101 + 0;
        }
    }

    // mostrar em tabelas os valores gerados
    printf("Temperaturas (°C):\n");
    printf("Bairro    ");
    for (int d = 1; d <= numDias; d++) {
        printf("Dia %-6i", d);
    }
    printf("\n");
    for (int i = 0; i < numBairros; i++) {
        printf("%-10i", i + 1);
        for (int j = 0; j < numDias; j++)
            printf("%-10i", Bairros.temperatura[i][j]);
        printf("\n");
    }

    printf("\nPoluição (ppm CO²):\n");
    printf("Bairro  ");
    for (int d = 1; d <= numDias; d++) {
        printf("Dia %-3i ", d);
    }
    printf("\n");
    for (int i = 0; i < numBairros; i++) {
        printf("  %i     ", i + 1);
        for (int j = 0; j < numDias; j++)
            printf("%4i   ", Bairros.poluição[i][j]);
        printf("\n");
    }

    printf("\nTráfego (Índice):\n");
    printf("Bairro  ");
    for (int d = 1; d <= numDias; d++) {
        printf("Dia %-3i ", d);
    }
    printf("\n");
    for (int i = 0; i < numBairros; i++) {
        printf("  %i     ", i + 1);
        for (int j = 0; j < numDias; j++)
            printf("%4i   ", Bairros.trafego[i][j]);
        printf("\n");
    }

    // relatorios
    printf("\n=== Relatório de Análise de Semana ===\n");

    // Samuel
    printf("1. Média semanal de temperatura:\n\n");
    int qtdBairro = 0;
    double mediaTemperatura;
    for (int i = 0; i < 5; i++) {
        double soma = 0;
        qtdBairro++;
        for (int j = 0; j < 7; j++) {
            soma += Bairros.temperatura[i][j];
        }
        mediaTemperatura = soma / 7;
        printf("    - Bairro %d: %.1f graus\n", qtdBairro, mediaTemperatura);
    }

    // Ilbs
    double mediaTemperaturas[numBairros] = {0};
    for (int i = 0; i < numBairros; i++) {
        for (int j = 0; j < numDias; j++) {
            mediaTemperaturas[i] += Bairros.temperatura[i][j];
        }
    }

    for (int i = 0; i < numBairros; i++) {
        mediaTemperaturas[i] = mediaTemperaturas[i] / numDias;
    }

    int diaQuente = 0;
    for (int i = 0; i < numBairros; i++) {
        if (mediaTemperaturas[i] > mediaTemperaturas[diaQuente]) {
            diaQuente = i;
        }
    }

    printf("\n2. Bairro mais quente da semana: Bairro %i com %.1f graus.\n", diaQuente + 1,
           mediaTemperaturas[diaQuente]);

    // Robson
    int maiorPoluição = Bairros.poluição[0][0];
    int bairroMax = 0;
    int diaMax = 0;

    for (int i = 0; i < numDias; i++) {
        for (int j = 0; j < numBairros; j++) {
            if (Bairros.poluição[i][j] > maiorPoluição) {
                maiorPoluição = Bairros.poluição[i][j];
                bairroMax = i;
                diaMax = j;
            }
        }
    }

    string diasSemana[numDias] = {
        "Segunda-feira", "Terça-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sábado", "Domingo"
    };
    string diaDaSemana = diasSemana[diaMax];

    printf("\n3. Dia com maior nível de poluição: %s no Bairro %i, com %i ppm CO².\n", diaDaSemana.c_str(),
           bairroMax + 1, maiorPoluição);

    // Calil
    printf("\n4. Média semanal de tráfego: \n");

    qtdBairro = 0;
    double mediaTrafego;
    for (int i = 0; i < 5; i++) {
        qtdBairro++;
        double somaTrafego = 0;
        for (int j = 0; j < 7; j++) {
            somaTrafego = somaTrafego + Bairros.trafego[i][j];
            mediaTrafego = somaTrafego / 7;
        }
        printf("    - Bairro %i: %.1f%%\n", qtdBairro, mediaTrafego);
    }

    // Tainah
    int maiorSoma = 0;
    int maiorBairro = 0;
    for (int i = 0; i < numBairros; i++) {
        int soma = 0;
        for (int j = 0; j < numDias; j++) {
            soma += Bairros.trafego[i][j];
        }
        if (soma > maiorSoma) {
            maiorSoma = soma;
            maiorBairro = i + 1;
        }
    }
    printf("\n5. Bairro com maior tráfego registrado: Bairro %i, com %i%% de tráfego acumulado.", maiorBairro,
           maiorSoma);
}
