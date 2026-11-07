def mutations():
    common={'candidates':['a','b'],'flags':[0xffffffff,0x80000000]}
    return [
      ('wrong-clear','pattern_file_owner_apply.c','flags[index] = 0;','flags[index] = 0x80000000u;',common),
      ('wrong-file-id','pattern_file_owner_apply.c','owner->file_id = files[index];',
       'owner->file_id = (unsigned char)(files[index] + 1);',common),
      ('wrong-path','pattern_file_owner_apply.c','file_path(path, files[index]);',
       'file_path(path, (unsigned char)((files[index] + 1) % 17));',common),
      ('skip-last-file','pattern_file_owner_apply.c','index < file_count','index < file_count - 1',
       {**common,'regions':[2,2],'language':2}),
      ('skip-close','pattern_file_owner_apply.c','services->release(services->context, file);',
       'if (file->tagged != 0) services->release(services->context, file);',common),
      ('wrong-validation','pattern_file_owner_apply.c','return 0xe0e0ebf6u;','return 0xe0e0ebf5u;',
       {**common,'null_flags':True}),
      ('constructor-flag','pattern_file_owner_lifecycle.c','owner->final_flag = 1;',
       'owner->final_flag = 0;',{'operation':'construct'}),
      ('skip-unmount','pattern_file_owner_lifecycle.c','if (owner->mounted != 0)',
       'if (owner->mounted == 0)',{'operation':'reset'}),
      ('skip-final-free','pattern_file_owner_lifecycle.c','fn_004c42fc(owner);\n    fn_0044f5b4(&owner->allocation);',
       'fn_004c42fc(owner);',{'operation':'delete','initialized':0}),
      ('skip-owner-release','pattern_file_owner_lifecycle.c','services->delete_owner(services->context, owner);',
       '(void)services;',{'operation':'delete'}),
      ('delayed-clear-same-final','pattern_file_owner_apply.c',
       '    for (unsigned int index = 0; index < count; ++index)\n        flags[index] = 0;\n    unsigned char files[8];',
       '    unsigned char files[8];',common),
    ]


def apply(name,text,before,after):
    if before not in text:raise ValueError('Owner mutation target differs: '+name)
    result=text.replace(before,after,1)
    if name=='delayed-clear-same-final':
        marker='    const PatternFileOwnerServices *services = pattern_owner_services();\n    for (int index = 0; index < file_count; ++index)'
        if marker not in result:raise ValueError('Owner delayed clear placement differs')
        result=result.replace(marker,'    for (unsigned int index = 0; index < count; ++index)\n        flags[index] = 0;\n'+marker,1)
    return result
