#include "single_004ed478_r.h"


extern undefined4 _local_10;

uint fn_004ed478(undefined4 param_1)

{
  undefined *local_78 [22];
  uint local_20 [4];
  undefined1 local_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  
  _local_10 = CONCAT13((char)param_1,
                       CONCAT12((char)((uint)param_1 >> 8),
                                CONCAT11((char)((uint)param_1 >> 0x10),(char)((uint)param_1 >> 0x18)
                                        )));
  local_78[0] = &DAT_00856c74;
  fn_004ecad8(local_78);
  fn_004ece20(local_78,&local_10,4);
  fn_004eceec(local_78,local_20);
  return local_20[0] >> 0x18 |
         local_20[0] << 0x18 | (local_20[0] >> 8 & 0xff) << 0x10 | (local_20[0] >> 0x10 & 0xff) << 8
  ;
}


