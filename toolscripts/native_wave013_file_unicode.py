import argparse
import hashlib
import json
import struct
import urllib.request
from pathlib import Path

from native_wave013_common import ROOT,WORK,OUT,MODULE_SHA,record,save,sha


URL='https://www.unicode.org/Public/17.0.0/ucd/UnicodeData.txt'
UCD_SHA='2e1efc1dcb59c575eedf5ccae60f95229f706ee6d031835247d843c11d96470c'
SMALL=[0x30a1,0x30a3,0x30a5,0x30a7,0x30a9,0x30c3,0x30e3,0x30e5,0x30e7,0x30ee,0x30f5,0x30f6]


def load():
    path=WORK/'file-unicode/UnicodeData-17.0.0.txt'
    path.parent.mkdir(parents=True,exist_ok=True)
    if not path.exists():
        with urllib.request.urlopen(URL,timeout=60) as response:
            path.write_bytes(response.read())
    raw=path.read_bytes()
    if sha(raw)!=UCD_SHA:
        raise ValueError('Pinned public Unicode source differs')
    records={}
    for line in raw.decode('utf-8').splitlines():
        fields=line.split(';')
        records[int(fields[0],16)]={'name':fields[1],'decomposition':fields[5]}
    return path,records


def derive(records):
    names={row['name']:code for code,row in records.items()}
    small={code:names[records[code]['name'].replace(' LETTER SMALL ',' LETTER ')] for code in SMALL}
    narrow={}
    for code in range(0xff66,0xffa0):
        parts=records[code]['decomposition'].split()
        if len(parts)!=2 or parts[0]!='<narrow>':
            raise ValueError('Selected halfwidth mapping is not a public narrow decomposition')
        narrow[code]=int(parts[1],16)
    compositions={}
    for code,row in records.items():
        parts=row['decomposition'].split()
        if len(parts)==2 and all(not part.startswith('<') for part in parts):
            compositions[tuple(int(part,16) for part in parts)]=code
    voiced={code:compositions[(base,0x3099)] for code,base in narrow.items() if (base,0x3099) in compositions and
        (code==0xff73 or 0xff76<=code<=0xff84 or 0xff8a<=code<=0xff8e)}
    semivoiced={code:compositions[(base,0x309a)] for code,base in narrow.items() if (base,0x309a) in compositions}
    singles={**narrow}
    if len(voiced)!=21 or len(semivoiced)!=5:
        raise ValueError('Measured kana composition selection differs')
    return {'small_kana':small,'halfwidth_voiced':voiced,'halfwidth_semivoiced':semivoiced,'halfwidth_single':singles}


def header_text(derived):
    lines=['#ifndef DQMJ3_WAVE013_PATTERN_CHARACTER_MAPS_H','#define DQMJ3_WAVE013_PATTERN_CHARACTER_MAPS_H','',
           'typedef struct PatternCharacterPair {','    unsigned short from;','    unsigned short to;','} PatternCharacterPair;','']
    for name,table in derived.items():
        lines.append('static const PatternCharacterPair pattern_'+name+'[] = {')
        lines.extend('    {0x'+format(first,'04x')+', 0x'+format(second,'04x')+'},' for first,second in sorted(table.items()))
        lines.extend(['};',''])
    lines.append('#endif')
    text='\n'.join(lines)+'\n'
    return text


def run(emit):
    path,records=load()
    derived=derive(records)
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    if sha(image)!=MODULE_SHA:
        raise ValueError('Original module identity differs')
    results=[]
    for name,location,count in [('small_kana',0x4c46d8,12),('halfwidth_voiced',0x4c46dc,21),
        ('halfwidth_semivoiced',0x4c46e0,5),('halfwidth_single',0x4c46e4,58)]:
        address=struct.unpack_from('<I',image,location-0x100000)[0]
        original=image[address-0x100000:address-0x100000+count*4]
        pairs=sorted(derived[name].items())
        public=b''.join(struct.pack('<HH',*pair) for pair in pairs)
        if original!=public:
            raise ValueError('Public-data derivation differs from complete measured table: '+name)
        results.append({'name':name,'entries':count,'originalStart':address,'bytes':len(original),
            'originalSha256':sha(original),'publicDerivedSha256':sha(public),'allEntriesAgree':True,
            'originalDataSourceCredit':0})
    header=ROOT/'src/native/wave013/pattern_character_maps.h'
    text=header_text(derived)
    if emit:
        header.write_text(text)
    elif not header.exists() or header.read_text()!=text:
        raise ValueError('Generated semantic character data is absent or stale')
    result={'schemaVersion':1,'status':'all96-public-derived-character-mappings-match-private-original-tables',
        'producer':record(Path(__file__)),'moduleSha256':MODULE_SHA,'unicodeVersionUsedForDerivation':'17.0.0',
        'historicalGameUnicodeVersionClaimed':False,'publicSource':{'url':URL,**record(path)},
        'primarySpecifications':['https://www.unicode.org/reports/tr15/','https://www.unicode.org/reports/tr44/'],
        'tables':results,'generatedSemanticData':record(header),'originalDataSourceCredit':0,
        'gameSpecificChoices':['Only the measured twelve small katakana are enlarged by their public Unicode letter names',
            'Hiragana-to-katakana, ASCII/U+3000 removal and selective fullwidth Latin/digit folding are game rules, not generic normalization',
            'All58 single-character halfwidth entries equal public narrow decompositions; selected small-kana enlargement occurs in the following separate game stage',
            'Only the measured21 voiced and5 semivoiced compositions are selected; additional public Unicode compositions remain unsupported game sequences',
            'Characters outside the measured intervals retain game-specific behavior; no complete NFC/NFKC normalizer substituted'],
        'method':'Derived only from pinned public Unicode names/decompositions plus explicit measured selection rules; complete original tables compared privately'}
    save(OUT/'file/unicode-derivation.json',result)
    print(json.dumps({'tables':len(results),'entries':sum(row['entries'] for row in results),'generatedHeader':record(header)}),flush=True)


if __name__=='__main__':
    parser=argparse.ArgumentParser()
    parser.add_argument('--emit',action='store_true')
    parser.add_argument('--public-only',action='store_true')
    arguments=parser.parse_args()
    if arguments.public_only:
        path,records=load()
        header=ROOT/'src/native/wave013/pattern_character_maps.h'
        text=header_text(derive(records))
        if arguments.emit:
            header.write_text(text)
        elif header.read_text()!=text:
            raise ValueError('Public-derived semantic data header is stale')
        print(json.dumps({'status':'public-data-only-no-original-comparison','source':record(path),
            'generatedHeader':record(header),'originalInputsRead':False}),flush=True)
    else:
        run(arguments.emit)
