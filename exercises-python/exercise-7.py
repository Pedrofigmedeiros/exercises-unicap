def preencher_vetor_chuvas(vetor_chuvas):
   print("Digite a quantidade de chuva em cada dia do mês:")
   for i in range(len(vetor_chuvas)):
       while True:
           try:
               chuva = float(input(f"Chuva no dia {i+1}: "))
               if chuva >= 0:
                   vetor_chuvas[i] = chuva
                   break
               else:
                   print("Por favor, digite um valor maior ou igual a zero.")
           except ValueError:
               print("Por favor, digite um número válido.")


def calcular_acumulado_chuvas(vetor_chuvas):
   return sum(vetor_chuvas)


def calcular_media_diaria_chuvas(vetor_chuvas):
   total_chuvas = sum(vetor_chuvas)
   return total_chuvas / len(vetor_chuvas)


def calcular_dias_chuva_acima_media(vetor_chuvas, media_mensal):
   dias_acima_media = sum(1 for chuva in vetor_chuvas if chuva > media_mensal)
   return dias_acima_media


def main():
   dias_mes = 30
   vetor_chuvas = [0.0] * dias_mes


   preencher_vetor_chuvas(vetor_chuvas)
   total_chuvas = calcular_acumulado_chuvas(vetor_chuvas)


   chuvas_esperadas = float(input("Informe a quantidade esperada de chuva para o mês: "))


   print("\nResumo do mês:")
   print(f"Total de chuvas no mês: {total_chuvas}")
   if total_chuvas == chuvas_esperadas:
       print("O acumulado do mês foi igual à quantidade esperada.")
   elif total_chuvas > chuvas_esperadas:
       print("O acumulado do mês foi maior que a quantidade esperada.")
   else:
       print("O acumulado do mês foi menor que a quantidade esperada.")


   media_diaria = calcular_media_diaria_chuvas(vetor_chuvas)
   print(f"Média diária de chuvas no mês: {media_diaria}")


   dias_acima_media = calcular_dias_chuva_acima_media(vetor_chuvas, media_diaria)
   print(f"Dias com chuva acima da média do mês: {dias_acima_media}")


if __name__ == "__main__":
   main()