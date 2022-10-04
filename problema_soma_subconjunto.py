#Inserção dos itens do conjunto
conjunto = []
item = input('Insira um elemento no conjunto ou digite "-" para parar de inserir\n')
conjunto.append(int(item))

while item:
    item = input('Insira um elemento no conjunto ou digite "-" para parar de inserir\n')
    if(item!= '-'):
        conjunto.append(int(item))
    else:
        break
#Inserção do numero que estou buscando nos subconjuntos somados
numero = int(input('Digite o numero que esta buscando na soma do conjunto \n'))
#Ordenando conjunto e criando variaveis auxiliares
conjunto = sorted(conjunto)
conjunto = set(conjunto)
conjunto = list(conjunto)
tamExp = pow(2,len(conjunto))
aux = []

#Percorrendo o conjunto e achando o conjunto das partes
for i in range(tamExp):
    for j in range(len(conjunto)):
        if i & (1 << j):
                aux.append(conjunto[j])
    resposta = 0
    for k in range(len(aux)):
        resposta = resposta + aux[k]
#Verificando se a soma de cada conjunto das partes resulta no numero buscado
    if(numero == resposta):
            print("Achei a soma no subconjunto",aux)
    aux.clear()        