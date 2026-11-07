def mutations():
    fresh={'operation':'initialize','unallocated':True,'initialized':0,'registered':0,'mounted':0,
        'sdk_constructor':True,'instruction_limit':100000}
    return [
      ('allocate-while-unready','pattern_file_owner_memory.c','memory_ready != 0','memory_ready == 0',
       {**fresh,'operation':'allocate','memory_ready':0,'requested_bytes':4097}),
      ('wrong-archive','pattern_file_owner_resource.c','0x000400db00010302ull','0x000400db00010303ull',fresh),
      ('wrong-raw-work-budget','pattern_file_owner_resource.c','owner->resource_work, 0x800','owner->resource_work, 0x400',fresh),
      ('wrong-mounted-flag','pattern_file_owner_resource.c','owner->mounted = 1;','owner->mounted = 0;',fresh),
      ('wrong-initialized-error','pattern_file_owner_memory.c','return 0xe0e0ebebu;','return 0xe0e0ebecu;',
       {**fresh,'unallocated':False,'initialized':1}),
      ('wrong-scratch','pattern_file_owner_memory.c','owner->scratch = storage;','owner->scratch = storage->file_buffer;',fresh),
      ('wrong-candidate-buffer','pattern_file_owner_memory.c','owner->candidate_storage = storage->candidate_storage;',
       'owner->candidate_storage = storage->file_buffer;',fresh),
      ('wrong-initialized-flag','pattern_file_owner_memory.c','owner->initialized = 1;','owner->initialized = 0;',fresh),
      ('wrong-page-rounding','pattern_file_owner_memory.c','(bytes + 0xfff) & ~0xfffu','(bytes + 0x1fff) & ~0xfffu',fresh),
      ('preserve-allocation-flag','pattern_file_owner_memory.c','block->unknown_flag = 0;','(void)block;',fresh),
    ]
