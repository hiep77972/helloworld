set_2={1,2,3}
lista=[0,5,3,2,7]
for i in range(len(set_2),-1,-1):
    if(len(set_2)!=0):
        print(lista[set_2.pop()])
    else:
        break
