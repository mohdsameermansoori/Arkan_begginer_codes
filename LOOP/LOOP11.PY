# Use nested for loops to print the elements of a matrix (list of lists).
matrix = [ [ 1 , 2 , 3 ],
           [ 4 , 5 , 6 ],
           [ 7 , 8 , 9 ]
          ]
for row in matrix:
    for element in row :
        print (element,end="")
    print()    