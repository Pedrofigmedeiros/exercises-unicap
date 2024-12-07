def exibirOpcoes():
   print("Menu de opções")
   print("1 – Calcular o volume de um cubo")
   print("2 – Calcular o volume de uma esfera")
   print("3 – Calcular o volume de um paralelepípedo")
   print("4 – Calcular o volume de um cilindro")
   print("0 – Encerrar o programa")
   print("Digite a opção desejada:")


def VolumeCubo(Arest):
   Cubo = Arest ** 3
   return Cubo


def VolumeEsfera(Raio):
   Esfera = (4/3) * 3.1415 * (Raio ** 3)
   return Esfera


def VolumeParalelep(Comp, largura, altura):
   Paralelep = Comp * largura * altura
   return Paralelep


def VolumeCilindro(Raio, altura):
   Cilindro = 3.1415 * (Raio ** 2) * altura
   return Cilindro


x = 1
while x != 0:
   exibirOpcoes()
   x = int(input())
   if x == 1:
       print("Informe a aresta do cubo em metros:")
       Aresta = float(input())
       VolC = VolumeCubo(Aresta)
       print(f"O volume do cubo é de {VolC:.1f} m³")
       print()
   elif x == 2:
       print("Informe o raio da esfera em metros:")
       Raio = float(input())
       VolE = VolumeEsfera(Raio)
       print(f"O volume da esfera é de {VolE:.1f} m³")
       print()
   elif x == 3:
       print("Informe o comprimento em metros:")
       Comprimento = float(input())
       print("Informe a largura em metros:")
       Largura = float(input())
       print("Informe a altura em metros:")
       Altura = float(input())
       VolP = VolumeParalelep(Comprimento, Largura, Altura)
       print(f"O volume do paralelepípedo é de {VolP:.1f} m³")
       print()
   elif x == 4:
       print("Informe o raio da base do cilindro em metros:")
       Raio = float(input())
       print("Informe a altura do cilindro em metros:")
       Altura = float(input())
       VolCil = VolumeCilindro(Raio, Altura)
       print(f"O volume do cilindro é de {VolCil:.1f} m³")
       print()
   elif x == 0:
       print("Fim do programa.")
   else:
       print("Opção inválida.")