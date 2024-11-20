def exibirOpçoes():
   print("Menu de opções:")
   print("1 - Converter graus Celsius em graus Fahrenheit.")
   print("2 - Converter graus Fahrenheit em graus Celsius.")
   print("0 - Encerrar o programa.")
   print("Informe a opção desejada.")
  
  
def CtoF (C):
  F = (C * 1.8) + 32
  return F


def FtoC (F):
   C = (F - 32)/1.8
   return C


op = 3
while op != 0:
   exibirOpçoes()
   op = int(input())
   if op == 1:
       print("Informe a temperatura em graus Celsius")
       Tc = float(input())
       Tf = CtoF(Tc)
       print("O valor em fahrenheit é de ", round(Tf, 1))
   elif op == 2:
       print("Informe a temperatura em fahrenheit")
       Tf = float(input())
       Tc = FtoC(Tf)
       print("O valor em celsius é de ", round(Tc, 1))
   elif op == 0:
       print("Fim de programa.")
   else:
       print("Opção inválida.")