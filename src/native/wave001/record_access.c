typedef unsigned int u32;

typedef struct {
    u32 unknown_00;
    u32 field_04;
    u32 unknown_08;
    u32 field_0c;
    u32 unknown_10[5];
    u32 field_24;
    u32 field_28;
    u32 unknown_2c;
    u32 field_30;
    u32 unknown_34;
    u32 field_38;
    u32 unknown_3c;
    u32 field_40;
} Record;

typedef struct {
    const Record *record;
} RecordHandle;

u32 fn_0017481c(const RecordHandle *handle) { return handle->record->field_24; }
u32 fn_00174828(const RecordHandle *handle) { return handle->record->field_04; }
u32 fn_00174834(const RecordHandle *handle) { return handle->record->field_0c; }
u32 fn_00174840(const RecordHandle *handle) { return handle->record->field_40; }
u32 fn_0017484c(const RecordHandle *handle) { return handle->record->field_30; }
u32 fn_00174858(const RecordHandle *handle) { return handle->record->field_38; }
u32 fn_00174864(const RecordHandle *handle) { return handle->record->field_28; }
