import io
import struct

from elftools.elf.elffile import ELFFile
from native_wave013_common import ROOT,command,record
from native_wave013_file_owner_provider_layout import NAMES
from native_wave013_file_owner_game_layout import arm as game_layout
from native_wave027_owner_session_layout import arm as session_layout


def measure(folder,graph,receipts):
    folder.mkdir(parents=True,exist_ok=True)
    source=ROOT/'toolscripts/native_wave013_file_owner_provider_abi.c';output=folder/'provider-layout.o'
    command([ROOT/'tools/clang-21/clang.exe','--target=aarch64-linux-android29','-std=c11','-O2','-ffreestanding',
        '-Wall','-Wextra','-Werror','-c',source,'-o',output],folder/'probe.log',receipts)
    elf=ELFFile(io.BytesIO(output.read_bytes()))
    symbol=elf.get_section_by_name('.symtab').get_symbol_by_name('pattern_owner_provider_layout_values')[0]
    section=elf.get_section(symbol['st_shndx']);raw=section.data()[symbol['st_value']:symbol['st_value']+symbol['st_size']]
    result=dict(zip(NAMES,struct.unpack('<'+str(len(NAMES))+'I',raw),strict=True))
    result['game']=game_layout(graph);result['session']=session_layout(graph)
    if result['pointerBytes']!=8 or result['game']['ownerBytes']!=96 or result['game']['ownerAlignment']!=8:
        raise ValueError('A64 actual target ABI differs')
    return result,{'probe':record(source),'a64Object':record(output),'actualProfilesExtractedFromA64Objects':True}
