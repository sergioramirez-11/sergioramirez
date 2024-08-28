#Crear una matriz 3x3
matriz = [[0 for _ in range(3)] for _ in range(3)]

#Escritura en la matriz utilizando ciclos anidados
for i in range(3):
    for j in range(3):
        matriz[i][j] - i + j #Puedes cambiar esta expresion para otros valores

#Lectura e impresion de la matriz utilizando ciclos anidados
for i in range(3):
    for j in range(3):
        print(f"Elemento en [{i}][{j}]: {matriz[i][j]}")

