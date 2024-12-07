def quem_ganhou(placar):
   return 1 if placar[0] > placar[1] else 2


def semifinais(placar1, placar2):
   times = ['Brasil', 'França', 'Uruguai', 'Japão']
  
   vencedor1 = quem_ganhou(placar1)
   vencedor2 = quem_ganhou(placar2)
  
   finalistas = [times[0], times[1]] if vencedor1 == 1 else [times[3], times[2]]
   terceiro_lugar = [times[1], times[0]] if vencedor1 == 1 else [times[2], times[3]]
  
   return finalistas, terceiro_lugar


def main():
   def obter_placar(mensagem):
       while True:
           try:
               gols_time1 = int(input(f"Informe a quantidade de gols do primeiro time {mensagem}: "))
               gols_time2 = int(input(f"Informe a quantidade de gols do segundo time {mensagem}: "))
               if gols_time1 >= 0 and gols_time2 >= 0:
                   return [gols_time1, gols_time2]
               else:
                   print("Por favor, informe uma quantidade de gols maior ou igual a zero.")
           except ValueError:
               print("Por favor, informe um número inteiro.")
  
   placar1 = obter_placar("no primeiro jogo")
   placar2 = obter_placar("no segundo jogo")
  
   finalistas, terceiro_lugar = semifinais(placar1, placar2)
  
   print("\nSeleções na grande final:")
   print(f"1. {finalistas[0]}")
   print(f"2. {finalistas[1]}\n")
  
   print("Seleções disputando o 3º lugar:")
   print(f"1. {terceiro_lugar[0]}")
   print(f"2. {terceiro_lugar[1]}")


if __name__ == "__main__":
   main()
