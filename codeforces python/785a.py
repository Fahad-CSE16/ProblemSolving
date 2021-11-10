t=int(input())
count= 0
for i in range(0,t):
    string= str(input())
    if string == "Tetrahedron":
        count += 4
    elif string == "Cube":
        count += 6
    elif string == "Octahedron":
        count += 8
    elif string == "Dodecahedron":
        count += 12
    elif string == "Icosahedron":
        count += 20
print(count)