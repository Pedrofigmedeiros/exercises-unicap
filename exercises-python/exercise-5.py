def preencher_vetor(vetor):
   for i in range(len(vetor)):
       while True:
           try:
               valor = float(input(f"Digite o valor para o mês {i+1}: "))
               if valor >= 0:
                   vetor[i] = valor
                   break
               else:
                   print("Por favor, digite um valor maior ou igual a zero.")
           except ValueError:
               print("Por favor, digite um número válido.")


def calcular_lucros(vet_ganhos, vet_gastos, vet_lucros):
   for i in range(len(vet_ganhos)):
       vet_lucros[i] = vet_ganhos[i] - vet_gastos[i]


def calcular_lucro_total(vet_lucros):
   return sum(vet_lucros)


def exibir_resultados(vet_ganhos, vet_gastos, vet_lucros):
   for i in range(len(vet_ganhos)):
       print(f"No mês {i+1}, os ganhos da loja foram R$ {vet_ganhos[i]}, os gastos foram R$ {vet_gastos[i]}, portanto, neste mês o lucro da loja foi R$ {vet_lucros[i]}.")


def main():
   vet_ganhos = [0.0] * 12
   vet_gastos = [0.0] * 12
   vet_lucros = [0.0] * 12


   print("Preencha os valores dos ganhos:")
   preencher_vetor(vet_ganhos)


   print("\nPreencha os valores dos gastos:")
   preencher_vetor(vet_gastos)


   calcular_lucros(vet_ganhos, vet_gastos, vet_lucros)
   lucro_total = calcular_lucro_total(vet_lucros)


   print("\nResultados:")
   exibir_resultados(vet_ganhos, vet_gastos, vet_lucros)
   print(f"\nA loja lucrou um total de R$ {lucro_total} no ano de 2023.")


if __name__ == "__main__":
   main()