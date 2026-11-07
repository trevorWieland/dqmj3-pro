import json

from native_material_wave011_build import ROOT,pin,save
from native_wave014_oracle import original_image
from squirrel_class034_measure import region


def measure():
    original=ROOT/'evidence/lanes/squirrel-class-call030/claim.json'
    function=next(row for row in json.loads(original.read_text())['functions'] if row['entry']==0x198418)
    result={'schemaVersion':1,'status':'measured-before-unique034-factory-source','function':function,
        'pool':region(original_image(),0x198570,0x198578),'originalClaim':pin(original),
        'uniqueSourceSymbol':'sq_vm_create_instance034','typedActualClass030Parameter':True,
        'normalCall022AdapterRequired':True,'sourceOrInventoryAdmissionGranted':0}
    path=ROOT/'evidence/lanes/squirrel-class034/factory-claim.json'
    if path.exists() and json.loads(path.read_text())!=result:raise ValueError('034 historical factory witness changed')
    save(path,result);return result


if __name__=='__main__':print(measure()['function']['instructionBytes'])
