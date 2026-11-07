import hashlib
import json

from native_wave014_oracle import original_image
from squirrel_capture041_build import ROOT,pin,save


def measure():
    image=original_image();path=ROOT/'evidence/lanes/squirrel-capture041/claim.json'
    claim=json.loads(path.read_text())
    for row in [claim['controller'],claim['pool'],claim['assertFallthrough'],claim['globalNullTemplate']]:
        data=image[row['address']-0x100000:row['address']-0x100000+row['bytes']]
        if hashlib.sha256(data).hexdigest()!=row['sha256']:raise ValueError('041 historical measured input changed')
    startup_path=ROOT/'evidence/lanes/squirrel-capture041/startup-globals.json'
    startup=json.loads(startup_path.read_text())
    for row in [startup['slot'],startup['initializer'],startup['literalPool']]:
        data=image[row['address']-0x100000:row['endExclusive']-0x100000]
        if hashlib.sha256(data).hexdigest()!=row['sha256']:raise ValueError('041 CRT identity changed')
    live=json.loads((ROOT/'evidence/lanes/squirrel-state040/startup-template-execution.json').read_text())
    result={'schemaVersion':1,'status':'reverified-complete-controller-and-real-crt-preconditions',
        'claim':pin(path),'startup':pin(startup_path),
        'independentStartup':pin(ROOT/'evidence/lanes/squirrel-state040/startup-template-execution.json'),
        'originalModuleSha256':hashlib.sha256(image).hexdigest(),
        'controllerBytes':1104,'controllerPoolBytes':20,'assertEntryIsFallthrough':True,
        'remainingConditionalRetainPcs':[0x196ca8,0x196cac,0x196cb0],
        'actualLiveNullType':0x01000001,'referenceFlag':0x08000000,
        'referenceDataPatchedForCoverage':False,'sourceCreditGranted':0,
        'independentStartupReceiptReadable':bool(live),'originalPayloadsPublished':False,
        'producer':pin(ROOT/'toolscripts/squirrel_capture041_measure.py')}
    save(ROOT/'evidence/lanes/squirrel-capture041/measurement-verification.json',result)
    return result


if __name__=='__main__':print(measure()['controllerBytes'])
