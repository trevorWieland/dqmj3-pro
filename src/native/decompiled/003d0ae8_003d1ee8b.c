#include "003d0ae8_003d1ee8b.h"



void fn_003d1ee8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb8,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003d2038(iVar1,param_1);
  return;
}



void fn_003d1e58(int param_1)

{
  fn_00688aa0(*(undefined4 *)(param_1 + 0x68),1);
  return;
}



void fn_003d1e30(int param_1)

{
  fn_00190cdc(*(undefined4 *)(param_1 + 0x68),0);
  fn_00190e00(*(undefined4 *)(param_1 + 0x6c));
  return;
}



void fn_003d1e08(int param_1)

{
  fn_00190cdc(*(undefined4 *)(param_1 + 0x6c),0);
  fn_00190e00(*(undefined4 *)(param_1 + 0x68));
  return;
}



void fn_003d1cf0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &DAT_008311cc;
  uVar1 = *(undefined4 *)(param_1[1] + 8);
  if (param_1[3] != 0) {
    fn_00151954(param_1[3],param_1[5]);
  }
  if (param_1[0x13] != -1) {
    fn_0016a43c(uVar1);
    param_1[0x13] = 0xffffffff;
  }
  fn_002feef8(param_1);
  return;
}



void fn_003d1c2c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_006896e0();
  puVar1[2] = 0;
  *puVar1 = &DAT_008311cc;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[0x13] = 0xffffffff;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  *(undefined2 *)(puVar1 + 0x16) = 0;
  *(undefined2 *)((int)puVar1 + 0x5a) = 0;
  *(undefined2 *)(puVar1 + 0x17) = 0;
  *(undefined2 *)((int)puVar1 + 0x5e) = 0;
  *(undefined2 *)(puVar1 + 0x18) = 0;
  *(undefined2 *)((int)puVar1 + 0x62) = 0;
  *(undefined1 *)(puVar1 + 0x19) = 0;
  *(undefined2 *)((int)puVar1 + 0x66) = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 5;
  *(undefined1 *)(puVar1 + 0x1f) = 0;
  *(undefined1 *)((int)puVar1 + 0x7d) = 0;
  *(undefined1 *)((int)puVar1 + 0x7e) = 0;
  *(undefined1 *)((int)puVar1 + 0x7f) = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  return;
}



void fn_003d1b0c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = fn_00246924(*(undefined4 *)(param_1 + 0x54));
  if (iVar1 == 0) {
    fn_00688c04(param_2,param_3,0);
    iVar1 = fn_00246824(*(undefined4 *)(param_1 + 0x54));
    if (iVar1 <= param_3) {
      *(undefined1 *)(param_1 + 0x7c) = 1;
      local_20 = DAT_008903d4;
      fn_00688d44(param_2,&local_20);
      *(byte *)(*(int *)(param_1 + 0x20) + 0x44) = *(byte *)(*(int *)(param_1 + 0x20) + 0x44) & 0xfe
      ;
      *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) =
           *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) & 0xfe | 1;
      return;
    }
    *(byte *)(*(int *)(param_1 + 0x20) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0x20) + 0x44) & 0xfe | 1;
    iVar1 = *(int *)(param_1 + 0x1c);
    bVar2 = *(byte *)(iVar1 + 0x44) & 0xfe;
  }
  else {
    *(undefined1 *)(param_1 + 0x7c) = 1;
    local_20 = 0;
    local_1c = 0;
    fn_002309d8(&local_20,4,*(undefined1 *)(*(int *)(param_1 + 0x54) + 0x2e),1);
    fn_00190d50(param_2,&local_20);
    *(byte *)(*(int *)(param_1 + 0x20) + 0x44) = *(byte *)(*(int *)(param_1 + 0x20) + 0x44) & 0xfe;
    iVar1 = *(int *)(param_1 + 0x1c);
    bVar2 = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
  }
  *(byte *)(iVar1 + 0x44) = bVar2;
  return;
}



void fn_003d1a10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  
  if (*(char *)(param_1 + 0x7c) == '\0') {
    iVar1 = fn_00246824(*(undefined4 *)(param_1 + 0x54));
    iVar3 = 0;
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x68);
    iVar4 = *(int *)(param_1 + 0x80) + *(int *)(param_1 + 0x68);
    if (0 < iVar1) {
      do {
        iVar2 = fn_002cd49c((int)(char)iVar3,*(undefined1 *)(param_1 + 0x88));
        if (iVar4 < iVar2) break;
        iVar2 = iVar3 + 1;
        iVar3 = iVar3 + 1;
        *(int *)(param_1 + 0x74) = iVar2;
      } while (iVar3 < iVar1);
    }
    if (iVar1 <= *(int *)(param_1 + 0x74)) {
      iVar4 = fn_002cd49c((int)(char)((char)iVar1 + -1),*(undefined1 *)(param_1 + 0x88));
      *(int *)(param_1 + 0x74) = iVar1;
    }
    if (*(uint *)(param_1 + 0x74) != (uint)*(byte *)(*(int *)(param_1 + 0x54) + 0x2e)) {
      fn_003d1030(param_1);
    }
    if (*(int *)(param_1 + 0x74) < iVar1) {
      iVar1 = fn_002cd49c((int)(char)((char)*(int *)(param_1 + 0x74) + -1),
                           *(undefined1 *)(param_1 + 0x88));
      iVar3 = fn_002cd49c((int)*(char *)(param_1 + 0x74),*(undefined1 *)(param_1 + 0x88));
      VectorSignedToFloat(iVar4 - iVar1,(byte)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(iVar3 - iVar1,(byte)(in_fpscr >> 0x16) & 3);
      fn_003d10c4(param_1,iVar4 - iVar1);
      return;
    }
  }
  return;
}


