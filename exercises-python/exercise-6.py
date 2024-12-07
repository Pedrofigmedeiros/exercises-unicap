def computar_voto(voto, votos_candidatos):
   if voto == 0:
       votos_candidatos[0] += 1 
   elif 1 <= voto <= 8:
       votos_candidatos[voto] += 1 
   else:
       votos_candidatos[9] += 1 


def main():
   candidatos = ["João", "Maria", "Pedro", "Luís", "Ana", "Luiza", "Silvia", "André"]
   votos_candidatos = [0] * 10 
   continuar_votacao = True
   while continuar_votacao:
       print("\nOpções de voto:")
       print("0 – Voto em branco")
       for i, candidato in enumerate(candidatos, start=1):
           print(f"{i} – Voto em {candidato}")
     
       try:
           voto = int(input("\nDigite o número correspondente ao seu voto: "))
           computar_voto(voto, votos_candidatos)
       except ValueError:
           print("Voto inválido. Será computado como nulo.")
       continuar = input("Deseja continuar votando? (S/N): ")
       if continuar.lower() != 's':
           continuar_votacao = False
   total_votos = sum(votos_candidatos)
   percentuais = [(candidato, (votos / total_votos) * 100) for candidato, votos in enumerate(votos_candidatos)]
   print("\nResultado da votação:")
   for i, (candidato, percentual) in enumerate(percentuais):
       if i == 0:
           print(f"Votos em branco: {percentual:.2f}%")
       elif i == 9:
           print(f"Votos nulos: {percentual:.2f}%")
       else:
           print(f"Votos para {candidatos[i-1]}: {percentual:.2f}%")
if __name__ == "__main__":
   main()