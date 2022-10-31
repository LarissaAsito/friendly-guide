# Júlia Pimentel Prado 10882233
# Leonardo dos Santos Gavioli 10716831


from random import randint, choice, sample
import networkx as nx
import numpy as np
import matplotlib.pyplot as plt

N = 200         #número de vértices que o grafo terá
M = 4           #número de comunidades presentes no grafo
K = 16          #grau médio dos vértices do grafo
PI = 0.9        #probabilidade de conexão intra-comunidade
PO = 0.1        #probabilidade de conexão inter-comunidade

# criação do vetor
vertices = np.arange(0,N)

# criação da matriz adjacência zerada
adjMatriz = np.zeros((N,N), dtype = float)


# são formada ligações de acordo com o valor de r (r deve ser menor do que K)
r = 0
while (r < K):

    # intra-comunidade

    comunidadeAleatoria = randint(1,M) - 1      # criação de comunidade aleatória

    nroVertices = int(N/M)                      # quantidade de vértices na comunidade

    # escolha de um vetor
    firstVertice = choice(vertices[comunidadeAleatoria*nroVertices:((comunidadeAleatoria+1)*nroVertices)])

    # escolha de um outro vetor
    secondVertice = choice(vertices[comunidadeAleatoria*nroVertices:((comunidadeAleatoria+1)*nroVertices)])

    # criação de uma probabilidade de conexão
    probabilidadePi = float((sample(list(range(0, 100)),1))[0])

    # se a probabilidade for menor que PI e não ter conexão, irão se conectar
    if (probabilidadePi < PI*100):
        if adjMatriz[firstVertice][secondVertice] == 0:
            adjMatriz[firstVertice][secondVertice] = 1


    # inter-comunidade

    firstVertice = randint(0,N-1)       # criação de um vértice aleatório de 0 a N-1

    secondVertice = randint(0,N-1)      # criação de um segundo vértice aleatório de 0 a N-1

    communityFirstVertice = int((firstVertice/nroVertices) + 1)     # comunidade do primeiro vértice

    communitySecondVertice = int((secondVertice/nroVertices) + 1)   # comunidade do segundo vértice

    # criação de uma probabilidade de conexão
    probabilidadePo = float((sample(list(range(0, 100)),1))[0])

    # se a probabilidade for menor que PO e não ter conexão, irão se conectar
    if (probabilidadePo < PO*100):
        if adjMatriz[firstVertice][secondVertice] == 0:
            adjMatriz[firstVertice][secondVertice] = 1

    # grau médio da matriz adjacência
    t = 0
    for x in range(0,N):
        for y in range(0,N):
            if (adjMatriz[x][y] == 1):
                t += 1
    r = (2*t)/N
    print(f"O Grau Médio é {(r)}")

print ('___________________________________________________________________________________________________________')
print ('MATRIZ ADJACENCIA')
print ('')
for linha in adjMatriz: # mostra a matriz adjacência
    print(linha)

# plotando o grafo
def show_graph_with_labels(adjacency_matrix):
    rows, cols = np.where(adjacency_matrix == 1)
    edges = zip(rows.tolist(), cols.tolist())
    gr = nx.Graph()
    gr.add_edges_from(edges)
    nx.draw(gr, node_size=30, with_labels=True)
    plt.show()

show_graph_with_labels(adjMatriz)
