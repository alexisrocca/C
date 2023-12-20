
f = open("nombres_out.txt","r")
fileLines = f.readlines()
f.close()

k = int(fileLines[0])
lastLine = fileLines.index("Afinidades\n")

print("Ingrese dos nombres de los siguientes:")

for nline in range(len(fileLines)):
    if ((nline > 1) and (nline < lastLine)):
        print(fileLines[nline][:-1])

nombre1 = input("Nombre 1: ")
nombre2 = input("Nombre 2: ")

printed = 0

for nline in range(len(fileLines)):
    if (nline > lastLine) and (printed < k):
        splittedLine = fileLines[nline][:-1].split(", ")
        if ((splittedLine[0] == nombre1) or (splittedLine[1] == nombre1)) or ((splittedLine[0] == nombre2) or (splittedLine[1] == nombre2)):
            print(fileLines[nline][:-1])
            printed+=1

