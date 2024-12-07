def calcular_conceito(media):
   if 0.0 <= media < 5.0:
       return 'D'
   elif 5.0 <= media < 7.0:
       return 'C'
   elif 7.0 <= media < 9.0:
       return 'B'
   elif 9.0 <= media <= 10.0:
       return 'A'
def calcular_media_e_conceito(nota1, nota2):
   media = (nota1 + nota2) / 2
   conceito = calcular_conceito(media)
   return media, conceito
def programa_principal():
   for aluno in range(1, 61): 
       nome = input(f"Digite o nome do aluno {aluno}: ")
     
       while True:
           try:
               nota1 = float(input("Digite a nota da primeira avaliação (0.0 a 10.0): "))
               if 0.0 <= nota1 <= 10.0:
                   break
               else:
                   print("Por favor, digite uma nota entre 0.0 e 10.0.")
           except ValueError:
               print("Por favor, digite um número válido.")
       while True:
           try:
               nota2 = float(input("Digite a nota da segunda avaliação (0.0 a 10.0): "))
               if 0.0 <= nota2 <= 10.0:
                   break
               else:
                   print("Por favor, digite uma nota entre 0.0 e 10.0.")
           except ValueError:
               print("Por favor, digite um número válido.")
 
       media, conceito = calcular_media_e_conceito(nota1, nota2)
     
       print(f"\nAluno: {nome}")
       print(f"Média: {media}")
       print(f"Conceito: {conceito}\n")
if __name__ == "__main__":
   programa_principal()