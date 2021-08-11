def generateMatrix(n):
    matrix = [[0 for i in range(n)] for j in range(n)]
    for i in range(n):
        for j in range(n):
            matrix[i][j] = 10 * i + j
    return matrix

def printMatrix(matrix):
    n = len(matrix)
    for i in range(n):
        for j in range(n):
            print(matrix[i][j], end = " ")
        print()

def transposeMatrix(matrix):
    n = len(matrix)
    for i in range(n):
        for j in range(i + 1, n):
            matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
    return matrix

def main():
    n = int(input("Hello, welcome to tranpose.py, enter a size n: "))
    matrix = generateMatrix(n)
    printMatrix(matrix)
    print("lets flip that!")
    tMatrix = transposeMatrix(matrix)
    printMatrix(tMatrix)
    print("Thanks for working with us! Goodbye!")

if __name__ == "__main__":
    main()
