import sys
print("--------------------------------------")
print("[PYTHON]")
name = sys.argv[1]
print(f"Generando autocompletado para Frases de {name}...\n")

referencePath = f"Entradas/{name}.txt"
referenceFile = open(referencePath, "r")
referenceFileLines = referenceFile.readlines()

frasesPath = f"Frases/{name}.txt"
frasesFile = open(frasesPath, "r")
frasesFileLines = frasesFile.readlines()


splitLines = []
for lines in referenceFileLines:
    splitLines.append(lines[:-1].split())

dict = {}
d = {}

for listaPalabras in splitLines:

    for nP in range(len(listaPalabras)):

        if nP+1 < len(listaPalabras):

            sigPalabra = listaPalabras[nP+1]

            if dict.get(listaPalabras[nP]) == None:
                d[listaPalabras[nP+1]] = 1
                dict[listaPalabras[nP]] = d
                d={}

            elif dict[listaPalabras[nP]].get(listaPalabras[nP+1]) == None:
                dict[listaPalabras[nP]][listaPalabras[nP+1]] = 1
                
            else:
                dict[listaPalabras[nP]][listaPalabras[nP+1]] = dict[listaPalabras[nP]][listaPalabras[nP+1]] + 1

splitLines = []
for lines in frasesFileLines:
    splitLines = lines[:-1].split()
    for nP in range(len(splitLines)):
        if splitLines[nP] == '_':
            # print(lines[:-1])
            
            try:
                out = lines[:-1].replace("_",list(enumerate(dict[splitLines[nP-1]].keys()))[0][1])
                # print(f"{dict[splitLines[nP-1]]}\n")
                # print(list(enumerate(dict[splitLines[nP-1]].keys()))[0][1])
                print(out)
            except KeyError:
                pass



referenceFile.close()
frasesFile.close()
# dict.keys()