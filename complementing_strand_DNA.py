#Arquivo txt deve conter apenas os nucleotideos e sem quebra de linha
with open("arquivo.txt") as arquivo:
    seq1 = arquivo.read()
    seqInv = seq1[::-1]
    seq2 = seqInv.replace("T", "X")
    seq2 = seq2.replace("C", "Y")
    seq2 = seq2.replace("A", "T")
    seq2 = seq2.replace("G", "C")
    seq2 = seq2.replace("X", "A")
    seq2 = seq2.replace("Y", "G")
    print(seq2)
