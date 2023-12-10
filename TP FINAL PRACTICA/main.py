import sys
print("--------------------------------------");
print("[PYTHON]")
name = sys.argv[1]
print(f"Generando autocompletado para Frases de {name}...\n")

referencePath = f"Entradas/{name}.txt"
referenceFile = open(referencePath, "r")
referenceFileLines = referenceFile.readlines()

frasesPath = f"Frases/{name}.txt"
frasesFile = open(frasesPath, "r")
frasesFileLines = frasesFile.readlines()


data = []

for line in referenceFileLines:
    data.append(line[:-1].split())

dict = {}
for frase in data:
    for n in range(0,len(frase)):
        if (n+1 < len(frase)) and (n != 0):
            prev = frase[n-1]
            nex = frase[n+1]
            dict[frase[n]] = [prev,nex]
        elif (n == 0):
            nex = frase[n+1]
            dict[frase[n]] = ['',nex]
        else:
            prev = frase[n-1]
            dict[frase[n]] = [prev,'']
        print(f"{frase[n]} : {dict[frase[n]]}")
        
# print(dict)

for line in frasesFileLines:
    print(line[:-1])
    textList = line[:-1].split()
    for n in range(0,len(line[:-1].split())):
        if textList[n] == '_':
            try:
                # print(dict[textList[n-1]][1])
                filled = line.replace('_',dict[textList[n-1]][1])
                print(filled)
            except KeyError:
                print("unknown key")
        



referenceFile.close()
frasesFile.close()