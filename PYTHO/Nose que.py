suma=10
numero=2340
Cifranum=0
sum1=0
def Procesososo(suma, numero):
    numero=numero // suma
moding=numero%suma
Cifranum=(Cifranum+1)
sum1=(sum1+moding)
numero=numero // suma
moding=numero%suma
Cifranum=(Cifranum+1)
sum1=(sum1+moding)
print(numero)
print(moding)

numero=numero // suma
moding=numero%suma
sum1=(sum1+moding)
Cifranum=(Cifranum+1)
print(numero)
print(moding)
numero=numero // suma
moding=numero%suma
sum1=(sum1+moding)
Cifranum=(Cifranum+1)
print(numero)
print(moding)
numero=numero // suma
Cifranum=(Cifranum+1)
sum1=(sum1+moding)
moding=numero%suma
print(numero)
print(moding)
print(Cifranum)
print(sum1)
