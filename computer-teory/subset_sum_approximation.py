import time
# função principal
def exact_subset_sum(conjunto, numero, erro):
    tam = len(conjunto) + 1
    lists = []
    list_zero = [0]
    lists.append(list_zero)
    error_for_trim =  erro/(2*tam)

    #Caso queira ver etapa por etapa das quebras de conjuntos descomente os prints
    for i in range(1, tam):
        auxVetor = merge_list(lists[i-1], conjunto[i-1])
        # print("vetor depois do merje")
        # print(auxVetor)
        auxVetor = trim(auxVetor,error_for_trim)
        # print("vetor depois do trim")
        # print(auxVetor)
        auxVetor = remove_bigest_values(auxVetor,numero)
        # print("vetor depois do remove bigest values")
        # print(auxVetor)
        lists.append(auxVetor)
    
    return get_maior(lists[-1])  

# função de merjar as listas com as listas somadas
def merge_list(list, sumNumber):
    vetorAux = []

    for j in range(len(list)):
        auxNum = list[j] + sumNumber
        vetorAux.append(auxNum)
        vetorAux.append(list[j])
    return clean_duplicate_values(vetorAux)

# Helpers
def trim(subLista, erro):
    tam = len(subLista)
    lists = []
    lists.append(subLista[0])
    ultimo = subLista[0]
    for i in range(1, tam):
        calcDesbastar = (1-erro) * subLista[i]
        if (ultimo < calcDesbastar):
            lists.append(subLista[i])
            ultimo = subLista[i]
    return lists


def clean_duplicate_values(auxVetor):
    auxVetor = set(auxVetor)
    auxVetor = list(auxVetor)
    auxVetor = sorted(auxVetor)
    return auxVetor

def remove_bigest_values(list,numero):
    auxVetor = filter(lambda num: num <= numero, list)
    return clean_duplicate_values(auxVetor)

def get_maior(list):
    maior = 0
    for i in range(len(list)):
        if(maior<list[i]):
            maior = list[i]
    return maior   
#Tests

def test_sum_list():
    testeEntrada = [10,11,12,15,]
    sumNumber = 3
    testeResposta = [10,11,12,13,14,15,18]
    testeComp = merge_list(testeEntrada,sumNumber)
    if(testeComp == testeResposta ):
        print("Teste MergeList --> Passou(✓)")
    else:
        print("Teste MergeList -->  Reprovou(X)")

def test_trim_function():
    testeEntrada = [10,11,12,15,20,21,22,23,24,29]
    testeResposta = [10, 12, 15, 20, 23, 29]
    error = 0.1
    testeComp = trim(testeEntrada,error)
    if(testeComp == testeResposta ):
        print("Teste Trim --> Passou(✓)")
    else:
        print("Teste Trim --> Reprovou(X)")

def test_remove_bigest_values():
    testeEntrada = [10,11,12,13,14,15,18]
    bigestNumber = 12
    testeResposta = [10,11,12]
    testeComp = remove_bigest_values(testeEntrada,bigestNumber)
    if(testeComp == testeResposta ):
        print("Teste Remove Bigest Values --> Passou(✓)")
    else:
        print("Teste Remove Bigest Values --> Reprovou(X)")
def test_exact_subset_sum():
    conjunto = [104, 102, 201, 101]
    numero = 308
    error = 0.40
    testRetorno = 302
    result = exact_subset_sum(conjunto, numero, error)
    if testRetorno == result:
        print("Teste Exact subset sum --> Passou(✓)")
    else:
        print("Teste Exact subset sum--> Reprovou(X)")
    
# Main
if __name__ == '__main__':
    test_trim_function()
    test_sum_list()
    test_remove_bigest_values()
    test_exact_subset_sum()
    #    Inserção dos itens do conjunto
    conjunto = []
    item = input(
        'Insira um elemento no conjunto ou digite "-" para parar de inserir\n')
    conjunto.append(int(item))

    while item:
        item = input(
            'Insira um elemento no conjunto ou digite "-" para parar de inserir\n')
        if (item != '-'):
            conjunto.append(int(item))
        else:
            break
    # Inserção do numero que estou buscando nos subconjuntos somados
    numero = int(
        input('Digite o numero que esta buscando na soma do conjunto: \n'))
     # Inserção do numero de erro para a aproximação
    error = float(
        input('Digite o erro da aproximação: \n'))
    # Ordenando conjunto e criando variaveis auxiliares
    conjunto = sorted(conjunto)
    conjunto = set(conjunto)
    conjunto = list(conjunto)
    tam = len(conjunto)
    start = time.time()
    result = exact_subset_sum(conjunto, numero, error)
    print("o algoritmo retorna ",result)
    print("O tempo utilizado pra executar esse programa foi de:") 
    end = time.time()
    print(end - start)        
