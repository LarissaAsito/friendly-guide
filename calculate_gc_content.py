import re
with open("rosalind_gc.txt") as arquivo: #Arquivo no modelo disponibilizado pela atividade http://rosalind.info/problems/list-view/ "Computing GC content"
    all_seq = arquivo.read()
    seq_divided = all_seq.split('>Rosalind_')
    res_percent = 0.0
    res_id = ''
    del seq_divided[0]
    for i in seq_divided:
        length = i.count('C') + i.count('G') + i.count('A') + i.count('T')
        #print(length)
        cgcontent = i.count('C') + i.count('G')
        #print('\n', cgcontent)
        cgpercent = cgcontent / length * 100
        #print('\n', cgpercent)
        if cgpercent > res_percent:
            res_percent = cgpercent
            res_id = re.sub('[^0-9]', '', i)

    print('Rosalind_'+res_id, round(res_percent, 6))
