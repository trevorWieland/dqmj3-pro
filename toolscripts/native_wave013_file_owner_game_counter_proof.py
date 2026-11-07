import ctypes
import hashlib
import random
import time

from native_wave013_file_owner_game_counter_runtime import Runner
from native_wave013_file_owner_original import load


def run(source,library):
    started=time.monotonic();original=Runner(load([0x4c3b1c]),False);actual=Runner(source,True)
    function=library.fn_004c3b1c;function.argtypes=[ctypes.POINTER(ctypes.c_ushort)];function.restype=ctypes.c_int
    buffer=(ctypes.c_ushort*4)(0x5a5a,0,0,0x5a5a)
    pointer=ctypes.cast(ctypes.byref(buffer,2),ctypes.POINTER(ctypes.c_ushort))
    digest=hashlib.sha256();members=[]
    for unit in range(65536):
        expected=original.query([unit],seed=unit);result=actual.query([unit],seed=unit)
        buffer[1]=unit;before=bytes(buffer);native=function(pointer)
        if expected!=result or native!=expected or bytes(buffer)!=before:raise RuntimeError('Exhaustive numeric-unit query differs at '+hex(unit))
        digest.update(expected.to_bytes(4,'little',signed=True))
        if expected:members.append(unit)
        if unit%16384==0:print('game numeric scalar '+str(unit),flush=True)
    rng=random.Random(5013)
    fixtures=[None,[],members,[49]*1024,[97]*1024,[49,0,50,51,52,53,54],
        [0x2071]*5,[0x2071]*6,[0x24ea]*6,[0xd800,0xdc00,49]]
    fixtures += [[rng.randrange(65536) for _ in range(rng.randrange(121))] for index in range(128)]
    sequence_digest=hashlib.sha256()
    for index,units in enumerate(fixtures):
        expected=original.query(units,seed=index);result=actual.query(units,seed=index)
        raw=None if units is None else (ctypes.c_ushort*(len(units)+1))(*units,0)
        before=bytes(raw) if raw is not None else None;native=function(raw)
        if expected!=result or native!=expected or (bytes(raw) if raw is not None else None)!=before:
            raise RuntimeError('Numeric sequence differs at '+str(index))
        sequence_digest.update(expected.to_bytes(4,'little',signed=True))
    cross=0
    for flags in range(16):
        for thumb in [False,True]:
            if original.query([0x2071]*6,flags=flags,thumb=thumb)!=actual.query([0x2071]*6,flags=flags,thumb=thumb):
                raise RuntimeError('Numeric counter flags/return profile differs')
            cross+=1
    return {'allPassed':True,'allU16SingleUnitQueries':65536,'positiveUnits':len(members),
        'membershipResultDigest':digest.hexdigest(),'multiunitAndNullQueries':len(fixtures),
        'multiunitResultDigest':sequence_digest.hexdigest(),'maximumSequenceUnits':1024,
        'counterFlagsAndReturnCases':cross,'originalInstructionsReached':sorted(original.path),
        'sourceInstructionsReached':sorted(actual.path),'ownedBodiesOnlyExecuted':True,
        'readWriteFrameModeAndCalleeSaveBoundsChecked':True,'nativeInputAndOuterUnitsPreserved':True,
        'windowsNativeExecuted':True,'originalExecutableMappedDuringSourceExecution':False,
        'originalDataClassificationTablePublished':False,'elapsedSeconds':time.monotonic()-started,
        'universalAllStringsEquivalenceClaimed':False}
