import argparse
import hashlib
import importlib.util
import io
import json
import struct
import subprocess
import sys
import importlib
import os

import unicorn
from pathlib import Path

from elftools.elf.elffile import ELFFile

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / 'source/squirrel-wave001'
UPSTREAM = SOURCE / 'upstream'
PROBE = SOURCE / 'probe'
WORK = ROOT / 'work/squirrel-source-wave001'
EVIDENCE = ROOT / 'evidence/lanes/squirrel-source-wave001'
UPSTREAM_MANIFEST_SHA = '9beee14b4c91333778f4258726832ebec6eb58013333962efdeb3d001046c396'
NATIVE_INPUTS_SHA = 'ab5dfac01cb70c4ab3bd8cf08f9c008d036945d85162c2b1b16b4c510c62c28d'
MODULE_SHA = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'
LAYOUT_NAMES = ['version', 'pointerBytes', 'integerBytes', 'floatBytes', 'charBytes', 'hashBytes',
    'objectBytes', 'objectPtrBytes', 'unionBytes', 'refCountedBytes', 'vmBytes', 'stringBytes',
    'classBytes', 'instanceBytes', 'instructionBytes', 'object.type', 'object.value',
    'ref.refcount', 'ref.weakref', 'vm.stack', 'vm.top', 'vm.stackbase', 'string.length',
    'string.hash', 'string.characters', 'class.locked', 'class.userdataSize', 'instance.class',
    'instance.values', 'instruction.arg1', 'instruction.op', 'instruction.arg0',
    'instruction.arg2', 'instruction.arg3', 'OT_NULL', 'OT_INTEGER', 'OT_FLOAT', 'OT_STRING',
    'OT_ARRAY', 'OT_CLASS', 'OT_INSTANCE', 'REF_MASK', 'MEMBER_METHOD', 'MEMBER_FIELD',
    'SLOT_ATTRIBUTES', 'SLOT_STATIC', 'OP_LINE', 'OP_ARITH', 'OP_RETURN', 'OP_NEWARRAY',
    'OP_CLASS', 'OP_NEWSLOTA', 'rawBytes', 'typeBytes', 'boolBytes', 'refcountBytes',
    'objectVectorBytes', 'arrayBytes', 'array.values', 'collectableBytes',
    'collectable.next', 'collectable.previous', 'collectable.sharedState']
NATIVE = {0x157ff4: ('sq_gettop', 16, 'sq_wrong_top'),
    0x173d40: ('_ZN4SQVM5GetAtEi', 12, 'sq_wrong_at'),
    0x173d1c: ('_ZN4SQVM4PushERK11SQObjectPtr', 36, 'sq_wrong_push'),
    0x19e864: ('_ZN11SQObjectPtraSERKS_', 96, 'sq_wrong_assign'),
    0x19e8c4: ('AddToChain', 36, 'sq_wrong_chain')}


def sha(data):
    return hashlib.sha256(data).hexdigest()


def record(path):
    path = Path(path).resolve()
    return {'path': path.relative_to(ROOT).as_posix(), 'bytes': path.stat().st_size,
            'sha256': sha(path.read_bytes())}


def save(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


def command(argv, log, receipts, require=True):
    result = subprocess.run([str(a) for a in argv], capture_output=True, timeout=90)
    log.write_bytes(result.stdout + result.stderr)
    receipts.append({'argv': [str(a).replace(str(ROOT), '${ROOT}') for a in argv],
                     'exitCode': result.returncode, 'log': record(log)})
    if require and result.returncode:
        raise RuntimeError('Build/execution failed: ' + str(log))
    return result


def elf_symbols(path):
    elf = ELFFile(io.BytesIO(path.read_bytes()))
    rows = {}
    table = elf.get_section_by_name('.symtab')
    for s in table.iter_symbols():
        if not isinstance(s['st_shndx'], int) or not s.name:
            continue
        sec = elf.get_section(s['st_shndx'])
        off = s['st_value'] - sec['sh_addr']
        rows[s.name] = {'address': s['st_value'], 'bytes': s['st_size'],
            'code': sec.data()[off:off+s['st_size']], 'section': sec.name,
            'function': s['st_info']['type'] == 'STT_FUNC'}
    undefined = [s.name for s in table.iter_symbols() if s.name and s['st_shndx'] == 'SHN_UNDEF']
    return rows, undefined


def coff_data(path, name):
    b = path.read_bytes()
    machine, count, _, symbols, nsyms, optional, _ = struct.unpack_from('<HHIIIHH', b)
    if machine != 0x8664:
        raise RuntimeError('Expected Win64 COFF')
    strings = symbols + nsyms * 18
    for i in range(nsyms):
        pos = symbols + i*18
        short = b[pos:pos+8]
        if short[:4] == bytes(4):
            p = strings + struct.unpack_from('<I', short, 4)[0]
            current = b[p:b.index(0, p)].decode()
        else:
            current = short.rstrip(b'\0').decode(errors='replace')
        if current == name:
            value, section = struct.unpack_from('<Ih', b, pos+8)
            head = 20 + optional + (section-1)*40
            size, raw = struct.unpack_from('<II', b, head+16)
            if section < 1 or section > count or value+len(LAYOUT_NAMES)*4 > size:
                raise RuntimeError('Invalid COFF data geometry')
            return b[raw+value:raw+value+len(LAYOUT_NAMES)*4]
    raise RuntimeError('Missing layout symbol')


def check_import():
    manifest_path=SOURCE/'upstream-manifest.json'
    if sha(manifest_path.read_bytes()) != UPSTREAM_MANIFEST_SHA:
        raise RuntimeError('Upstream manifest identity changed')
    manifest = json.loads(manifest_path.read_text())
    actual = set()
    for row in manifest['files']:
        p = SOURCE / row['path']
        if p.stat().st_size != row['bytes'] or sha(p.read_bytes()) != row['sha256']:
            raise RuntimeError('Imported upstream file changed: '+row['path'])
        actual.add(p.resolve())
    if actual != {p.resolve() for p in UPSTREAM.rglob('*') if p.is_file()}:
        raise RuntimeError('Imported file completeness mismatch')
    return manifest


def link_arm(objects, symbol, address, output, receipts, name):
    script = output/(name+'.ld')
    script.write_text('SECTIONS { /DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) '
        '*(.init_array*) *(.fini_array*) *(.text._GLOBAL__sub_I*) } '
        '.text '+hex(address)+' : { *(.text.'+symbol+') *(.text*) } '
        '.rodata : { *(.rodata*) } .data : { *(.data*) } .bss : { *(.bss*) } }\n')
    target = output/(name+'.elf')
    command([ROOT/'tools/clang-21/ld.lld.exe', '--gc-sections', '--no-undefined', '--fatal-warnings', '--entry='+symbol,
             '-T', script, *objects, '-o', target], output/(name+'-link.log'), receipts)
    rows, undefined = elf_symbols(target)
    elf = ELFFile(io.BytesIO(target.read_bytes()))
    if any(section['sh_type'] in ('SHT_REL', 'SHT_RELA') and section['sh_size'] for section in elf.iter_sections()):
        raise RuntimeError('Linked component retains relocation sections')
    return target, rows


def build(output, publish):
    output.mkdir(parents=True, exist_ok=True)
    receipts = []
    imported = check_import()
    input_path=SOURCE/'native-inputs.json'
    if sha(input_path.read_bytes()) != NATIVE_INPUTS_SHA:
        raise RuntimeError('Native input identity changed')
    native_inputs=json.loads(input_path.read_text())
    for pin in native_inputs['helpers']:
        if record(ROOT/pin['path']) != pin:
            raise RuntimeError('Native helper identity changed')
    pins = [record(p) for p in sorted(PROBE.rglob('*')) if p.is_file()]
    clang = ROOT/'tools/clang-21/clang.exe'
    linker = ROOT/'tools/clang-21/ld.lld.exe'
    version = command([clang, '--version'], output/'compiler-version.log', receipts).stdout.decode()
    base = ['-O2', '-std=c++11', '-fno-exceptions', '-fno-rtti', '-fno-stack-protector',
        '-ffunction-sections', '-fdata-sections', '-fno-unwind-tables',
        '-fno-asynchronous-unwind-tables', '-fno-optimize-sibling-calls', '-nostdinc',
        '-DNDEBUG', '-Wno-invalid-offsetof', '-include', PROBE/'prelude.h',
        '-I', PROBE/'compat', '-I', UPSTREAM/'include', '-I', UPSTREAM/'squirrel']
    arm = ['--target=arm-none-eabi', '-mcpu=mpcore', '-marm', '-ffreestanding', '-fomit-frame-pointer']
    windows = ['--target=x86_64-pc-windows-msvc', '-funsigned-char', '-mno-incremental-linker-compatible']
    profiles = {'arm32-float-narrow-gc': arm, 'arm32-double-narrow-gc': arm+['-DSQUSEDOUBLE'],
        'arm32-float-narrow-no-gc': arm+['-DNO_GARBAGE_COLLECTOR'],
        'arm32-float-wide-gc': arm+['-DSQUNICODE', '-D_MSC_VER=1400', '-fms-extensions', '-fshort-wchar'],
        'windows64-float-narrow-gc': windows,
        'windows64-forced-sq32-diagnostic': windows+['-U_WIN64', '-U_LP64', '-U__LP64__']}
    layouts = {}
    for name, flags in profiles.items():
        path = output/(name+('.obj' if name.startswith('windows') else '.o'))
        command([clang, *flags, *base, '-c', PROBE/'layout.cpp', '-o', path],
                output/(name+'.log'), receipts)
        data = coff_data(path, 'sq_probe_layout') if name.startswith('windows') else elf_symbols(path)[0]['sq_probe_layout']['code']
        values = struct.unpack('<'+'I'*len(LAYOUT_NAMES), data)
        layouts[name] = {'configuration': [str(x).replace(str(ROOT), '${ROOT}') for x in flags+base],
                         'values': dict(zip(LAYOUT_NAMES, values)), 'object': record(path)}
    core = sorted((UPSTREAM/'squirrel').glob('*.cpp'))
    objects = {'arm': [], 'windows': []}
    for kind, flags, suffix in [('arm', arm, '.o'), ('windows', windows, '.obj')]:
        for source in core:
            target = output/(kind+'-'+source.stem+suffix)
            command([clang, *flags, *base, '-c', source, '-o', target],
                    output/(kind+'-'+source.stem+'.log'), receipts)
            objects[kind].append(target)
        print(json.dumps({'coreCompiled': kind, 'translationUnits': len(core)}), flush=True)
    for name, symbols in [('kernel32', ['ExitProcess']), ('msvcrt', ['malloc','realloc','free','abort',
        'abs','atoi','strtol','strtoul','strtod','memcpy','memmove','memset','memcmp','strlen','strcmp',
        'strncmp','strstr','strchr','puts','printf','sprintf','vsprintf','isspace','isdigit','isxdigit','isalpha',
        'iscntrl','isalnum','tolower','toupper','fmod','fflush','_setjmp','longjmp','_initterm','atexit'])]:
        definition = output/(name+'.def')
        definition.write_text('LIBRARY '+name+'.dll\nEXPORTS\n'+'\n'.join(symbols)+'\n')
        command([linker, '-flavor', 'link', '/lib', '/machine:x64', '/def:'+str(definition), '/out:'+str(output/(name+'.lib'))],
                output/(name+'-import.log'), receipts)
    oracle_object = output/'host-oracle.obj'
    command([clang, *windows, *base, '-c', PROBE/'oracle.cpp', '-o', oracle_object], output/'host-oracle-compile.log', receipts)
    executable = output/'squirrel225-public-oracle.exe'
    command([linker, '-flavor', 'link', '/timestamp:0', '/entry:mainCRTStartup', '/subsystem:console', '/nodefaultlib', '/out:'+str(executable),
        oracle_object, *objects['windows'], output/'kernel32.lib', output/'msvcrt.lib'], output/'host-link.log', receipts)
    execution = command([executable], output/'host-execution.jsonl', receipts)
    host_rows = [json.loads(line) for line in execution.stdout.decode().splitlines()]
    if len(host_rows) != 19 or len({row['name'] for row in host_rows}) != 19 or not all(row.get('passed', True) for row in host_rows):
        raise RuntimeError('Public host source-only interpreter smoke failed')
    wrong = output/'arm-wrong.o'
    command([clang, *arm, *base, '-c', PROBE/'wrong.cpp', '-o', wrong], output/'arm-wrong.log', receipts)
    callback_obj = output/'fixture.o'
    command([clang, *arm, '-O2', '-ffunction-sections', '-c', ROOT/'src/native/wave005/fixture.c', '-o', callback_obj],
        output/'fixture-compile.log', receipts)
    callback_elf, callback_rows = link_arm([callback_obj], 'fixture_release', 0x7000000, output, receipts, 'fixture')
    callback = callback_rows['fixture_release']['code']
    spec = importlib.util.spec_from_file_location('squirrel_wave005_oracle', ROOT/'src/native/wave005/oracle.py')
    oracle = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(oracle)
    original_path = ROOT/'generated/update-content0/code.bin'
    original = original_path.read_bytes()
    if sha(original) != MODULE_SHA:
        raise RuntimeError('Original module identity mismatch')
    if {row['address'] for row in native_inputs['intervals']} != set(NATIVE):
        raise RuntimeError('Native function completeness changed')
    for row in native_inputs['intervals']:
        start=row['address']-0x100000
        if row['bytes'] != NATIVE[row['address']][1] or sha(original[start:start+row['bytes']]) != row['sha256']:
            raise RuntimeError('Original function identity changed')
    available = {}
    arm_objects = objects['arm']+[output/'arm32-float-narrow-gc.o']
    for path in arm_objects:
        for name, row in elf_symbols(path)[0].items():
            if row['function'] and row['bytes']:
                available[name] = (path, row)
    expected_layout = {'pointerBytes':4,'integerBytes':4,'floatBytes':4,'objectBytes':8,
        'ref.refcount':4,'ref.weakref':8,'refcountBytes':4,'vm.stack':24,'vm.top':48,'vm.stackbase':52}
    if any(layouts['arm32-float-narrow-gc']['values'][key] != value for key,value in expected_layout.items()):
        raise RuntimeError('Observed native ABI profile no longer reproduced')
    functions = []
    for address, (wanted, original_size, negative_symbol) in NATIVE.items():
        candidates = [name for name in available if name == wanted or wanted == 'AddToChain' and wanted in name]
        if len(candidates) != 1:
            raise RuntimeError('Missing/ambiguous public function: '+wanted)
        symbol = candidates[0]
        target, rows = link_arm(arm_objects, symbol, address, output, receipts, 'public-'+hex(address)[2:])
        row = rows[symbol]
        images = {r['address']: r['code'] for r in rows.values() if r['function'] and r['bytes']}
        inputs = [case for case in oracle.cases(address) if address != 0x173d40 or case['definition'] >= 0]
        if address in (0x173d1c,0x19e864):
            inputs = [case for case in inputs if not (case['definition'][1] and case['definition'][3]==0)
                and not (case['definition'][4] and not case['definition'][5])]
        raw = original[address-0x100000:address-0x100000+original_size]
        observations = []
        for case in inputs:
            reference = oracle.execute({address: raw, **({0x19e864: original[0x9e864:0x9e8c4]} if address==0x173d1c else {})}, callback, case)
            candidate = oracle.execute(images, callback, case)
            if not reference['semanticModelAgreed'] or not candidate['semanticModelAgreed']:
                raise RuntimeError('Public/original bounded behavior mismatch '+hex(address))
            observations.append({'case': case['definition'], 'original': reference, 'public': candidate})
        negative_elf, negative_rows = link_arm(arm_objects+[wrong], negative_symbol, address, output, receipts, 'wrong-'+hex(address)[2:])
        wrong_images = {r['address']: r['code'] for r in negative_rows.values() if r['function'] and r['bytes']}
        negative = oracle.execute(wrong_images, callback, inputs[0])
        if not negative['returnedToSentinel'] or negative['semanticModelAgreed']:
            raise RuntimeError('Wrong public semantic wrapper not rejected after actual return')
        functions.append({'canonicalIdentity':{'build':'owner-archive-update',
            'programId':'0004000e001acb00','module':'content0/.code-decompressed',
            'moduleSha256':MODULE_SHA,'address':address,'mode':'ARM'}, 'address': address, 'mode': 'ARM', 'publicSymbol': symbol,
             'publicObject': record(available[symbol][0]),
            'definitionSource': record(UPSTREAM/'squirrel'/({0x157ff4:'sqapi.cpp',0x173d40:'sqvm.cpp',
                0x173d1c:'sqvm.cpp',0x19e864:'sqobject.h',0x19e8c4:'sqstate.cpp'}[address])),
            'unreferencedUndefinedSymbolMetadata': elf_symbols(target)[1], 'liveUnresolvedRelocations': [], 'originalBytes': original_size,
            'originalSpanSha256': sha(raw), 'publicLinkedBytes': row['bytes'],
            'publicLinkedSha256': sha(row['code']), 'linkedElf': record(target),
            'exactLinkedSpan': row['bytes']==original_size and row['code']==raw,
            'boundedCases': len(inputs), 'observations': observations, 'wrongSourceElf': record(negative_elf),
            'wrongSourceControl': negative, 'acceptedRecoveredSource': False})
        print(json.dumps({'publicFunction':hex(address),'linkedBytes':row['bytes'],'originalBytes':original_size,'cases':len(inputs)}),flush=True)
    hash_elf, hash_rows = link_arm(arm_objects,'sq_probe_hash',0x100000,output,receipts,'public-hash')
    hash_images = {r['address']:r['code'] for r in hash_rows.values() if r['function'] and r['bytes']}
    data = bytes((i*29+128)&255 for i in range(256))
    hash_observations = []
    for length in (3,64,255):
        expected32, expected64 = hash_value(data[:length],32), hash_value(data[:length],64)
        case = oracle.make_case(0x157ff4,(0,0),length)
        memory = bytearray(case['memory'])
        memory[oracle.SOURCE-oracle.DATA:oracle.SOURCE-oracle.DATA+length] = data[:length]
        case.update({'address':0x100000,'arguments':[oracle.SOURCE,length],'memory':memory,
            'expectedMemory':bytes(memory),'readRanges':[(oracle.SOURCE,length)],'writeRanges':[],
            'expectedReturn':expected32,'callbacks':[]})
        observation = oracle.execute(hash_images,callback,case)
        host = next(row for row in host_rows if row['name']=='hash-'+str(length))
        if not observation['semanticModelAgreed'] or host['value'] != expected64:
            raise RuntimeError('Public string hash width model mismatch')
        hash_observations.append({'length':length,'arm32':expected32,'host64':expected64,
            'sameLow32':expected32==(expected64&0xffffffff),'armExecution':observation})
    for pin in pins:
        if record(ROOT/pin['path']) != pin:
            raise RuntimeError('Probe source changed while validating')
    check_import()
    for pin in native_inputs['helpers']:
        if record(ROOT/pin['path']) != pin:
            raise RuntimeError('Native helper changed during execution')
    tools = [record(p) for p in sorted((ROOT/'tools/clang-21').iterdir()) if p.is_file() and p.suffix in ('.exe','.dll')]
    report = {'schemaVersion':1, 'lane':'squirrel-source-wave001', 'status':'review-ready-public-source-component',
        'publicUpstream': imported, 'gameForkIdentity':'unknown', 'importedSourceIsNewRecoveredSource':False,
        'acceptedRecoveredSourceFunctions':0, 'acceptedRecoveredSourceBytes':0,
        'sourceOnlyPublicVMAndCompilerWindowsBuild':True, 'fullGameBuild':False,
        'androidDeviceExecuted':False, 'probeSources':pins, 'script':record(Path(__file__)),
        'compilerVersion':version, 'tools':tools, 'nativeInputs':record(input_path),
        'python':{'version':sys.version,'executableSha256':sha(Path(sys.executable).read_bytes())},
        'unicorn':{'cpuModel':'ARM1176','pythonVersion':unicorn.__version__,'nativeVersion':list(unicorn.uc_version()),
            'nativeLibrarySha256':sha(Path(importlib.import_module('unicorn.unicorn_py3.unicorn').uclib._name).read_bytes())},
        'windowsCrt':{'module':'msvcrt.dll','sha256':sha((Path(os.environ['SystemRoot'])/'System32/msvcrt.dll').read_bytes())}, 'layouts':layouts, 'coreTranslationUnits':len(core),
        'hostExecutable':record(executable), 'hostExecution':host_rows, 'functions':functions,
        'publicStringHash':{'gameBindingResolved':False,'observations':hash_observations,'linkedElf':record(hash_elf)},
        'oracleHelper':record(ROOT/'src/native/wave005/oracle.py'), 'fixture':record(ROOT/'src/native/wave005/fixture.c'),
        'originalModule':record(original_path), 'receipts':receipts,
        'limitations':['Public release identity is verified; exact game fork identity remains unknown',
            'Windows _SQ64 selects 64-bit SQInteger/refcount/hash and 16-byte objects; original ARM uses 32-bit numeric/refcount layout and 8-byte objects',
            'Host interpreter is a grammar/semantic oracle candidate, not game-compatible native VM proof',
            'ARM method links deliberately exclude unused global constructors/destructors and are not full ARM interpreter links',
            'Forcing upstream SQ32 on a 64-bit host leaves a 32-bit raw value inside an 8-byte pointer union and is diagnostic only',
            'ARM compiler setjmp compatibility declaration is object-build-only and not a qualified target C runtime ABI',
            'Unicode public header probe uses explicit MSVC-compatible declarations and 16-bit wchar only to measure layout; encoding of game strings remains unproved',
            'Bounded ARM fixtures declare callback behavior and valid object/slot memory; no universal language, game allocator/destructor or full engine equivalence claim']}
    save(output/'report.json', report)
    if publish:
        save(EVIDENCE/'report.json', report)
    print(json.dumps({'status':report['status'],'hostCases':sum('passed' in x for x in host_rows),
        'armOriginalReturns':sum(x['boundedCases'] for x in functions),
        'publicExactFunctions':sum(x['exactLinkedSpan'] for x in functions), 'acceptedSourceBytes':0}),flush=True)


def hash_value(data,bits):
    length=len(data)
    step=(length>>5)|1
    value=length
    mask=(1<<bits)-1
    for item in data[:length//step]:
        value=(value^((value<<5)+(value>>2)+item))&mask
    return value


def main():
    parser=argparse.ArgumentParser()
    parser.add_argument('--output',type=Path)
    parser.add_argument('--publish',action='store_true')
    args=parser.parse_args()
    output=(ROOT/args.output).resolve() if args.output else WORK/'build'
    if not output.is_relative_to(WORK.resolve()):
        raise RuntimeError('Output must stay under owned squirrel work directory')
    build(output,args.publish)


if __name__=='__main__':
    main()
