# A program to transpose a nxm matrix.
# author: alexandrecorlet


def transpose(matrix):
    return [*zip(*matrix)]


def main():
    n, m = map(int, input().split()) 
    matrix = [map(int, input().split()) for i in range(n)]

    t_matrix = transpose(matrix)
    
    print("\nTransposed matrix: ",
        *t_matrix, sep='\n')


if __name__ == "__main__":
    main()


