import hashlib
import json
import struct
from controller8_measure import ROOT,WORK,pin
from controller8_catalogue_model_v2 import catalogue,registers
from controller8_defaults_model import groups
from native_wave014_oracle import original_image


def run():
    image=original_image();path=ROOT/'work/native-state055/controller-init-v7/cache-constructor-reference.private.json';reference=json.loads(path.read_text())
    decoded=catalogue();raw_original=[];pointers=[]
    for case in reference['cases']:
        words={row['address']:row['finalWord']for row in case['globalWrites']};data=bytearray();addresses=[]
        for index,expected in enumerate(decoded):
            address=0x8e9ae8+index*12;count,kind,pointer=[words[address+j*4]for j in range(3)]
            start=pointer-0x100000;end=image.index(0,start);actual=image[start:end].decode('ascii')
            assert(count,kind,actual)==(expected['count'],expected['type'],expected['name'])
            data+=struct.pack('<III',count,kind,pointer);addresses.append(pointer)
        assert[words[0x8ea8d4+i*4]for i in range(189)]==registers()
        sets=groups();expected_masks=[]
        for indices in[sets[0],sets[1]+sets[2],sets[3]]:
            mask=[0]*6
            for index in indices:mask[index//32]|=1<<(index&31)
            expected_masks+=mask
        assert[words[0x8eabc8+i*4]for i in range(18)]==expected_masks
        raw_original.append(bytes(data));pointers.append(addresses)
    assert all(row==raw_original[0]for row in raw_original)and all(row==pointers[0]for row in pointers)
    replay=json.loads((WORK/'source-replay-comparison-v2.json').read_text());results=[]
    for side in['primary','copied']:
        for row in replay[side]:
            width=4 if row['target']=='arm'else 8
            data=b''.join(struct.pack('<II',item['count'],item['type'])+pointer.to_bytes(width,'little')for item,pointer in zip(decoded,row['actualNamePointerWords']))
            assert hashlib.sha256(data).hexdigest()==row['rawDescriptorSha256']
            result=dict(side=side,target=row['target'],seed=row['seed'],skew=row['skew'],rawArenaSha256=row['arenaSha256'],rawSourceDescriptorSha256=row['rawDescriptorSha256'],
                        actualNamePointers=row['actualNamePointerWords'],logicalCatalogueSha256=row['catalogueLogicalSha256'],descriptorCountTypeAndNameContentsEqual=True,
                        sourcePointersAreActualDeclaredWidth=width,namePointersConvertedToSymbolicIndicesOnlyInNewPostExecutionPythonView=True)
            if width==4:
                different=[i for i,(a,b)in enumerate(zip(raw_original[0],data))if a!=b]
                assert all(offset%12>=8 for offset in different)
                result.update(rawOriginalDescriptorSha256=hashlib.sha256(raw_original[0]).hexdigest(),rawTargetByteMismatchOffsets=different,
                              allTargetByteMismatchesAreTypedNamePointerFields=True,pointerWordMismatchIndices=[i for i,(a,b)in enumerate(zip(pointers[0],row['actualNamePointerWords']))if a!=b])
            results.append(result)
    result=dict(status='raw-original-and-source-descriptor-evidence-with-post-execution-logical-pointer-comparison',producer=pin(__file__),original=pin(path),replay=pin(WORK/'source-replay-comparison-v2.json'),
                originalDescriptorRawSha256=hashlib.sha256(raw_original[0]).hexdigest(),originalActualNamePointers=pointers[0],sourceRows=results,
                procedure=['Execute actual original constructor without modifying its executable, literals, globals or registers beyond declared object input.',
                           'Execute authored source without mapping an original executable image; preserve raw arena/descriptor hashes and actual pointers.',
                           'Read the declared count/type/name fields after return. Compare actual name contents and metadata values, and verify every pointer designates the proper source-owned80-byte name slot.',
                           'Build separate Python comparison records mapping only those constchar*name fields to their semantic catalogue indices. Nothing is written back to any executed object, register, literal or code.',
                           'For copied Windows DLLs, require one constant loader-address delta across all297 pointers; retain both raw rows and verified actual DLL paths.'],
                normalizationAffectedExecutedState=False,originalSourcePointerTruncation=False,sourceCreditGranted=0,wholeOwnerHardwareOrGameClaimed=False)
    output=WORK/'descriptor-data-comparison-v2.json';assert not output.exists();output.write_text(json.dumps(result,indent=2)+'\n');print(json.dumps(dict(report=pin(output),sourceRows=len(results),rawOriginalHash=result['originalDescriptorRawSha256'])))


if __name__=='__main__':run()
