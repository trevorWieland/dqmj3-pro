def cases():
    values=[]
    for region in [0,1,2,3,4,5,6,7,255]:
        for language in range(256):
            for operation in ['selector','policy']:
                values.append({'regions':[region,region],'language':language,'operation':operation,
                    'configurationScenario':'stable-successful-replies'})
    for region in range(256):
        for language in [0,1,2,5,9,11,255]:
            values.append({'regions':[region,region],'language':language,
                'configurationScenario':'stable-successful-replies'})
    for first in range(7):
        for second in [0,1,2,3,4,5,6,7,255]:
            for language in [*range(12),31,32,255]:
                values.append({'regions':[first,second],'language':language,
                    'configurationScenario':'synthetic-independent-successful-replies'})
    for index,row in enumerate(values):
        row['id']='owner-locale-'+str(index)
        row['selection_input']=(index*0x9e3779b1)&0xffffffff
    return values
