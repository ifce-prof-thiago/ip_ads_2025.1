# Desafio PBL: Simulador de Investimento em Poupança

## 🎯 Contexto

Um grupo de jovens está começando sua vida financeira e quer entender como funciona a rentabilidade da poupança. Vocês foram contratados para criar um programa em **C++** que calcule quanto dinheiro terão após um período guardando na poupança.

---

## 📋 O que deve ser feito

Desenvolver um programa que calcule o **rendimento** e o **valor final** de um investimento na poupança.

### Dados de Entrada
- Nome do investidor (texto)
- Valor inicial depositado em R$ (número decimal)
- Taxa de rendimento mensal em % (número decimal)
- Quantidade de meses (número inteiro)

### Dados de Saída
- Nome do investidor
- Valor investido inicialmente
- Rendimento total em R$
- Valor final acumulado em R$

---

## 📐 Fórmulas

```
Rendimento Total (R$) = Valor Inicial × (Taxa / 100) × Meses
Valor Final (R$) = Valor Inicial + Rendimento Total
```

---

## 🧪 Caso de Teste

**Entrada:**
```
Nome: Maria Silva
Valor inicial: R$ 1000.00
Taxa mensal: 0.5%
Meses: 12
```

**Saída esperada:**
```
Investidor: Maria Silva
Valor investido: R$ 1000.00
Rendimento total: R$ 60.00
Valor final: R$ 1060.00
```

---

## ✅ Critérios de Avaliação

| Critério | Pontos |
|----------|--------|
| Declaração correta dos tipos de dados (`string`, `int`, `float`) | 3 |
| Sequência lógica correta (entrada → processamento → saída) | 3 |
| Operadores aritméticos funcionando (`+`, `*`, `/`) | 2 |
| Programa compila e executa sem erros | 2 |

---

## 🚀 Desafio Extra

Após concluir o programa principal, adicione:

1. Cálculo do rendimento médio por mês
2. Mensagem mostrando quanto o investidor ganhou comparado a guardar no cofre (sem rendimento)

---

## 💡 Reflexões para Discussão em Sala

Após implementar o programa, reflita sobre as seguintes questões:

1. **O que acontece se a taxa for 0%?** Qual seria o valor final?
2. **E se o valor inicial for 0?** O programa ainda faz sentido?
3. **Por que usamos `float` para valores em dinheiro** em vez de `int`?
4. **Qual a diferença entre guardar R$ 100 por 12 meses vs R$ 1200 por 1 mês?**
5. **O que acontece se o usuário digitar uma taxa negativa?** Isso é possível na vida real?

---

## 📊 Dicas de Investimento (Contexto Real)

Para enriquecer a discussão, considere estes dados reais:

| Tipo de Investimento | Rendimento Médio Mensal | Risco |
|---------------------|------------------------|-------|
| Poupança | 0,5% a 0,6% | Muito baixo |
| CDB | 0,7% a 1,0% | Baixo |
| Tesouro Direto | 0,8% a 1,2% | Baixo |
| Ações | Variável | Alto |

### Regras de Ouro para Iniciantes:
- **Regra dos 50-30-20:** 50% para necessidades, 30% para desejos, 20% para investir
- **Reserva de emergência:** Guarde o equivalente a 6 meses de despesas antes de investir
- **Juros compostos:** "O tempo é o melhor amigo do investidor" - quanto antes começar, melhor

### Curiosidade Matemática:
Com a **Regra dos 72**, você pode estimar em quantos meses seu dinheiro dobra:

```
Meses para dobrar ≈ 72 / Taxa mensal
```

Exemplo: Com taxa de 0,5% ao mês → 72 / 0,5 = **144 meses (12 anos)**
