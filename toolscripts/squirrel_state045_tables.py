import json
from pathlib import Path

from native_wave013_common import ROOT,record,save


def generate():
    measured_path=ROOT/'evidence/lanes/squirrel-state040/registration-tables.json'
    measured=json.loads(measured_path.read_text());callbacks=sorted(measured['callbacks'],key=lambda row:row['address'])
    identities={row['address']:index for index,row in enumerate(callbacks)}
    lines=['#include "initialization.h"',''];bindings=[]
    for row in callbacks:
        actual=row['address']==0x1b33dc
        if row['functionalRegistryEntry'] is not None and not actual:
            raise ValueError('045 measured handler admission requires a reviewed actual source binding')
        if actual:
            symbol='sq_vm_array_native022'
        else:
            symbol=f"required_engine_{row['address']:08x}_045"
            lines.extend([f'SqPrototypeI32 {symbol}(void *vm)',
                '{',f"    return sq_startup_require_engine045(vm,{identities[row['address']]}u);",'}',''])
        bindings.append({'canonicalAddress':row['address'],'mode':row['mode'],'identity':identities[row['address']],
            'sourceSymbol':symbol,'alreadyAdmittedHandlerSourceUsed':actual,'newHandlerCreditGranted':0,
            'bindingRole':'actual-frozen-array-source-with045-vm-providers' if actual else 'typed-uninvoked-required-engine-dependency'})
    names=[]
    for table in measured['tables']:
        name='sq_startup_base_methods045' if table['role']=='base-library' else 'default_methods_'+table['role'].split('-')[-1]+'_045'
        names.append(name);prefix='' if table['role']=='base-library' else 'static '
        lines.extend([prefix+'const SqNativeRegistration045 '+name+'[]={'])
        for entry in table['entries']:
            text=json.dumps(entry['name']['text']);mask=json.dumps(entry['typeMask']['text']) if entry['typeMask'] else None
            callback=next(row['sourceSymbol'] for row in bindings if row['canonicalAddress']==entry['callbackAddress'])
            lines.append('    {(const SqStringByte015*)'+text+','+callback+','+str(entry['parameterCheck'])+','+
                ('(const SqStringByte015*)'+mask if mask is not None else '0')+'},')
        lines.extend(['    {0,0,0,0}','};',''])
    lines.extend(['const SqNativeRegistration045 *const sq_startup_default_methods045[10]={',
        '    '+','.join(names[:5])+',','    '+','.join(names[5:10]),'};',''])
    if len(lines)>500:raise ValueError('045 generated readable registration C exceeds source limit')
    path=ROOT/'source/squirrel-wave045/registration_tables.c';path.write_text('\n'.join(lines))
    save(ROOT/'evidence/lanes/squirrel-state040/initialization045-table-bindings.json',{
        'status':'typed-registration-source-data-not-handler-qualification','producer':record(Path(__file__)),
        'measuredTables':record(measured_path),'ownedSourceRegistrySnapshot':measured['sourceRegistrySnapshot'],
        'source':record(path),'bindings':bindings,'unresolvedUninvokedEngineHandlers':56,
        'actualFrozenHandlerBindings':1,'originalPointersEmbeddedInSourceData':False,'handlerCreditGranted':0,
        'completeInterpreterOrGameClaimed':False})
    print(json.dumps({'source':record(path),'entries':measured['registeredEntryCount'],'bindings':len(bindings),'lines':len(lines)}))


if __name__=='__main__':generate()
