def cases():
    values=[]
    for capacity in [0,1,15,16,31,32,64,127,255,4096]:
        for size in sorted(set([0,1,15,16,17,32,63,capacity,capacity+1])):
            for margin in [0,1,3,16,64]:
                values.append({'capacity':capacity,'operations':[{'kind':'allocate','slot':0,'bytes':size,'margin':margin}]})
    for blocks in [[{'slot':0,'offset':0,'bytes':16}],
        [{'slot':0,'offset':32,'bytes':16}],
        [{'slot':0,'offset':0,'bytes':16},{'slot':1,'offset':64,'bytes':16},{'slot':2,'offset':128,'bytes':16}],
        [{'slot':0,'offset':64,'bytes':16},{'slot':1,'offset':128,'bytes':128}]]:
        for size in [1,8,16,17,31,32,48,63,64,65,127,256]:
            for margin in [0,1,8,16]:
                values.append({'capacity':256,'blocks':blocks,
                    'operations':[{'kind':'allocate','slot':3,'bytes':size,'margin':margin}]})
        for row in blocks:
            values.append({'capacity':256,'blocks':blocks,'operations':[{'kind':'free','slot':row['slot']}]})
    for count in [1,2,3,8,16]:
        operations=[{'kind':'allocate','slot':i,'bytes':16+i} for i in range(count)]
        for slot in range(count):
            operations.append({'kind':'free','slot':slot})
        values.append({'operations':operations})
        operations=[{'kind':'allocate','slot':i,'bytes':16+i} for i in range(count)]
        for slot in range(count-1,-1,-1):
            operations.append({'kind':'free','slot':slot})
        values.append({'operations':operations})
    for depth in [1,2,8]:
        values.append({'depth':depth,'operations':[{'kind':'allocate','slot':0,'bytes':64},
            {'kind':'free','slot':0},{'kind':'allocate','slot':0,'bytes':128}]})
    for index,row in enumerate(values):row['id']='owner-heap-'+str(index)
    return values
