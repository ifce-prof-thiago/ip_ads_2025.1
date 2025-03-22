#include <iostream>

using namespace std;

void verificarSaldo(double saldo, string mes) {
    cout << mes << ": " << saldo << endl;
    if (saldo < 0) {
        cout << "NEGATIVO!" << endl;
    } else {
        cout << "POSITIVO\n";
    }
}

double calcularDespesa(
    double aluguel,
    double contaDeAgua,
    double contaDeLuz,
    double internet,
    double transporte,
    double alimentacao,
    double lazer,
    double academia
) {
    double despesa = aluguel + contaDeAgua + contaDeLuz + internet + transporte + alimentacao + lazer + academia;
    return despesa;
}

double calcularSaldo(double saldoInicial, double salario, double despesa) {
    double novoSaldo = saldoInicial + salario - despesa;
    return novoSaldo;
}

int main() {
    double saldo = 0.00;

    // JANEIRO
    double salarioJan = 1518.50;
    double aluguelJan = 400.00;
    double contaDeAguaJan = 39.99;
    double contaDeLuzJan = 85.60;
    double internetJan = 89.99;
    double transporteJan = 100.00;
    double alimentacaoJan = 600.00;
    double lazerJan = 300.00;
    double academiaJan = 90.00;

    double despesaJan = calcularDespesa(
        aluguelJan,
        contaDeAguaJan,
        contaDeLuzJan,
        internetJan,
        transporteJan,
        alimentacaoJan,
        lazerJan,
        academiaJan
    );
    saldo = calcularSaldo(saldo, salarioJan, despesaJan);
    verificarSaldo(saldo, "JANEIRO");

    // FEVEREIRO
    double salarioFev = 1520.50;
    double aluguelFev = 400.00;
    double contaDeAguaFev = 39.99;
    double contaDeLuzFev = 85.60;
    double internetFev = 89.99;
    double transporteFev = 100.00;
    double alimentacaoFev = 800.00;
    double lazerFev = 300.00;
    double academiaFev = 90.00;

    double despesaFev = calcularDespesa(
        aluguelFev,
        contaDeAguaFev,
        contaDeLuzFev,
        internetFev,
        transporteFev,
        alimentacaoFev,
        lazerFev,
        academiaFev
    );
    saldo = calcularSaldo(saldo, salarioFev, despesaFev);
    verificarSaldo(saldo, "FEVEREIRO");

    // MARÇO
    double salarioMar = 3000.80;
    double aluguelMar = 400.00;
    double contaDeAguaMar = 39.99;
    double contaDeLuzMar = 85.60;
    double internetMar = 89.99;
    double transporteMar = 100.00;
    double alimentacaoMar = 800.00;
    double lazerMar = 300.00;
    double academiaMar = 90.00;

    double despesaMar = calcularDespesa(
        aluguelMar,
        contaDeAguaMar,
        contaDeLuzMar,
        internetMar,
        transporteMar,
        alimentacaoMar,
        lazerMar,
        academiaMar
    );

    saldo = calcularSaldo(saldo, salarioMar, despesaMar);
    verificarSaldo(saldo, "MARÇO");
}
