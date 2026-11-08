def request(amount,alignment):
 if type(amount)is not int or not 0<=amount<=0x10000:raise ValueError('outside measured nonoverflow request domain')
 if type(alignment)is not int or abs(alignment)not in [4,8,16,32,64]:raise ValueError('outside measured power-of-two alignment domain')

def disposal(model,pointer):
 if type(pointer)is not int or not any(row['payload']==pointer for row in model.used):raise ValueError('not a live allocation payload')
 model.validate(bytes(model.bytes))
