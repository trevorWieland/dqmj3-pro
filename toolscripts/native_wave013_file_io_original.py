from native_wave013_file_original import load as load_game


def load(canonical,services):
    graph=load_game(canonical)
    graph['blocks'] += services['blocks']
    graph['executableRanges'] += services['executableRanges']
    graph['serviceCallbacks']={name:services['functions'][symbol]['address'] for name,symbol in [
        ('size','pattern_fixture_size'),('read','pattern_fixture_read')]}
    graph['serviceLinkedElf']=services['linkedElf']
    graph['serviceRole']='controlled fixture byte stream; genuine C callbacks, no original executable helpers'
    return graph
