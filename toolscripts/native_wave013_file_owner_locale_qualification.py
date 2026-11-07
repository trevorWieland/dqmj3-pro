import json
import struct
from pathlib import Path

from native_wave013_common import ROOT,OUT,MODULE_SHA,record,save
from native_wave013_file_owner_locale_original import load


def qualify():
    original=load()
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    for address,value in [(0x453c50,0xa0002),(0x14e4dc,0x10082),(0x454384,0x8bfb54)]:
        if struct.unpack_from('<I',image,address-0x100000)[0]!=value:
            raise ValueError('CFG literal identity differs')
    for address in [0x454368,0x14e4c8]:
        if struct.unpack_from('<I',image,address-0x100000)[0]!=0xef000032:
            raise ValueError('Actual service instruction differs')
    result=STATIC.copy()
    result['producer']=record(Path(__file__))
    result['originalReader']=record(ROOT/'toolscripts/native_wave013_file_owner_locale_original.py')
    result['functions']=[{'address':address,'instructionRanges':original['functions'][address]['instructionRanges'],
        'literalPoolRanges':original['functions'][address]['literalPoolRanges']} for address in [0x453b34,0x4c46e8]]
    result['indexedDispatchData']=[row for row in original['readonlyData'] if 'indexed' in row['role']]
    result['referenceSdkEntries']=[{'address':address,'instructionRanges':original['functions'][address]['instructionRanges']}
        for address in [0x454388,0x45438c,0x45434c,0x14e494]]
    save(OUT/'file/owner/locale/qualification.json',result)
    return result


STATIC={'schemaVersion': 1, 'status': 'measured-locale-and-CFG-service-qualification', 'moduleSha256': 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126', 'sharedGetterEntry': {'prefix': 4539272, 'bytes': 4, 'instructionRole': 'NOP falling through to shared getter', 'sharedEntry': 4539276, 'sharedBytes': 28, 'newFunctionCreditRequested': 0}, 'protocol': {'svcImmediate': 50, 'regionHeader': 131072, 'languageHeader': 65666, 'languageBlock': 655362, 'languageBytes': 1, 'bufferDescriptor': 28, 'referenceInitializedSessionHandle': 1329, 'kernelAndCommandResultsQualified': [0]}, 'primaryReference': 'https://github.com/devkitPro/libctru/blob/master/libctru/source/services/cfgu.c', 'referenceSupports': 'CFGU_SecureInfoGetRegion and CFGU_GetSystemLanguage wire naming/fields; no historical compiler/version claim', 'sourceConfigurationBoundary': 'Live typed callbacks; no original SDK executable or data mapped in source execution', 'wholeDeviceConfigurationClaimed': False, 'frozenCensusChanged': False, 'sourceCreditGranted': 0}


if __name__=='__main__':
    print(json.dumps({'status':qualify()['status']}),flush=True)
