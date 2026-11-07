import ctypes


KEYS=['environmentBytes','heapBytes','releasedBytes','slotBytes','ownerBytes','ownerAlignment',
    'heap','filter','candidate','intervening','reentryMode','allocations','releases','requestedBytes',
    'requestedAlignment','slotBefore','slotDuring','released','releasedIdentity','releasedSlot','releasedSnapshot']


def arm(graph):
    row=next(row for row in graph['readonlyObjects'] if row['symbol']=='pattern_game_layout_values')
    raw=next(data[row['address']-address:row['address']-address+row['bytes']] for address,data in graph['blocks']
        if address<=row['address']<row['address']+row['bytes']<=address+len(data))
    return dict(zip(KEYS,[int.from_bytes(raw[index:index+4],'little') for index in range(0,len(raw),4)],strict=True))


def windows(library):
    return dict(zip(KEYS,list((ctypes.c_uint*len(KEYS)).in_dll(library,'pattern_game_layout_values')),strict=True))
