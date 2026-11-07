import hashlib
import json

from native_wave014_oracle import original_image
from squirrel_capture038_build import ROOT,pin,save


PATH=ROOT/'evidence/lanes/squirrel-capture038/reference-sdk-exchange.json'


def write(reference):
    image=original_image()
    rows=[]
    for (address,mode,size),observed in sorted(reference.discovered_instructions.items()):
        data=image[address-0x100000:address-0x100000+size]
        if data!=observed:raise ValueError('038 original runtime instruction identity changed')
        rows.append({'address':address,'mode':mode,'bytes':size,'sha256':hashlib.sha256(data).hexdigest()})
    reads=[{'address':address,'bytes':size,'sha256':hashlib.sha256(image[address-0x100000:address-0x100000+size]).hexdigest()}
        for address,size in sorted(reference.discovered_data)]
    result={'schemaVersion':1,'status':'actual-original-execution-reference-only',
        'moduleSha256':hashlib.sha256(image).hexdigest(),'instructionWitnesses':rows,'dataReadWitnesses':reads,
        'instructionModeAndWidthObservedAtRuntime':True,'sdkSourceOrInventoryCreditGranted':0,
        'actualDefaultCLocaleInitializer':'0x00104c58 reached by startup0x00100004',
        'localeProof':pin(ROOT/'evidence/lanes/squirrel-lookup023/reference-locale-precondition.json'),
        'producer':pin(ROOT/'toolscripts/squirrel_capture038_sdk.py'),'originalPayloadBytesPublished':False}
    save(PATH,result)
    return result


def load(reference):
    record=json.loads(PATH.read_text());image=original_image()
    if hashlib.sha256(image).hexdigest()!=record['moduleSha256']:raise ValueError('038 SDK module changed')
    for row in record['instructionWitnesses']:
        data=image[row['address']-0x100000:row['address']-0x100000+row['bytes']]
        if hashlib.sha256(data).hexdigest()!=row['sha256']:raise ValueError('038 SDK instruction changed')
        reference.sdk_code[row['address']]=(row['mode'],row['bytes'])
    for row in record['dataReadWitnesses']:
        data=image[row['address']-0x100000:row['address']-0x100000+row['bytes']]
        if hashlib.sha256(data).hexdigest()!=row['sha256']:raise ValueError('038 SDK data changed')
        reference.sdk_data.add((row['address'],row['bytes']))
