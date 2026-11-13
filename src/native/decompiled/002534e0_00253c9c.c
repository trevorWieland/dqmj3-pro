#include "002534e0_00253c9c.h"



void fn_00253c9c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_90 [132];
  
  fn_00101a50(auStack_90,0x80,L"rom:/data/Motion/%s.bch",param_2);
  fn_0016b874(param_1,4,param_3,auStack_90,0,0);
  return;
}



void fn_002539bc(undefined4 param_1)

{
  fn_0016b874(param_1,8,0,L"rom:/data/Model/MapFilter.bch",0,0);
  return;
}



undefined4 fn_002537b4(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r3;
  undefined4 local_10;
  
  local_10 = in_r3;
  fn_00129004();
  fn_00241bd4();
  fn_00129004();
  fn_00121054();
  iVar2 = fn_00174858(DAT_008977e4);
  (**(code **)(**(int **)(iVar2 + 0x14) + 0x2c))(*(int **)(iVar2 + 0x14),0xe4,0);
  uVar1 = DAT_0089780c;
  local_10 = 0;
  fn_00163988(DAT_00897808,&local_10,1);
  local_10 = 0;
  fn_00163988(uVar1,&local_10,1);
  return 1;
}



undefined4 fn_002536b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_18;
  
  local_18 = param_4;
  uVar1 = fn_00174828(DAT_008977e4);
  iVar2 = fn_00174834(DAT_008977e4);
  if (*(char *)(iVar2 + 0x180384) == '\0') {
    fn_0017821c(uVar1,iVar2 + 0x180388,0x5b34);
  }
  fn_005df93c(DAT_008977e4,*(undefined4 *)(param_1 + 0xc));
  fn_001c3ca0();
  fn_001c3550();
  uVar1 = fn_001c2338(DAT_008977e4);
  uVar3 = fn_00129004();
  fn_0012f13c(uVar3,uVar1);
  uVar1 = fn_001c235c(DAT_008977e4);
  uVar3 = fn_00129004();
  fn_00241760(uVar3,uVar1,0);
  uVar1 = DAT_0089780c;
  local_18 = 0xff000000;
  fn_00163988(DAT_00897808,&local_18,1);
  local_18 = 0xff000000;
  fn_00163988(uVar1,&local_18,1);
  return 1;
}



undefined4 fn_002534e0(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  int iVar8;
  ushort uVar9;
  char *pcVar10;
  bool bVar11;
  
  uVar3 = fn_00174828(DAT_008977e4);
  iVar4 = fn_006a7b78(DAT_008977e4);
  iVar5 = fn_00174834(DAT_008977e4);
  if (*(char *)(iVar5 + 0x180384) == '\0') {
    pcVar10 = (char *)(iVar5 + 0x185ec0);
    cVar2 = *(char *)(param_1 + 0x10) + '\x01';
    *(char *)(param_1 + 0x10) = cVar2;
    cVar1 = *pcVar10;
    puVar7 = (ushort *)(iVar4 + 0x30);
    if (cVar1 != '\x03') {
      pcVar10 = (char *)(uint)*(byte *)(iVar5 + 0x185ec9);
    }
    if ((cVar1 != '\x03' && pcVar10 != (char *)0x3) && (cVar1 != '\x02' && pcVar10 != (char *)0x2))
    {
      if (cVar2 < '\x14') {
        uVar9 = (ushort)*(byte *)(iVar4 + 0x36);
        bVar11 = uVar9 == 0;
        if (bVar11) {
          uVar9 = *puVar7;
        }
        if (bVar11 && uVar9 == 0) {
          bVar11 = *(char *)(iVar4 + 0x37) == '\0';
          if (bVar11) {
            puVar7 = (ushort *)(uint)*(byte *)(iVar4 + 0x34);
          }
          if ((bVar11 && puVar7 == (ushort *)0x0) && (iVar8 = fn_00607b14(iVar5), iVar8 == 0)) {
            fn_00158f6c(iVar4,0x7a);
            fn_0017821c(uVar3,iVar5 + 0x180388,0x5b34);
            iVar8 = fn_00174828(DAT_008977e4);
            if (*(char *)(iVar8 + 0xe8) == '\x03') {
              *(undefined1 *)(iVar4 + 0x79) = 1;
              fn_002d3828(uVar3,iVar4);
            }
            fn_001c41d0(uVar3,iVar4,iVar5);
            fn_001c2cac(iVar5);
            return 0;
          }
        }
      }
      puVar6 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
      if (puVar6 != (undefined4 *)0x0) {
        *(undefined1 *)(puVar6 + 1) = 1;
        *puVar6 = &DAT_0082deb8;
        *(undefined1 *)((int)puVar6 + 5) = 1;
      }
    }
    else {
      puVar6 = (undefined4 *)fn_00145b00(4,&DAT_00812c8c);
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = &DAT_0083aeac;
      }
    }
  }
  else {
    puVar6 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
    if (puVar6 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar6 + 1) = 1;
      *puVar6 = &DAT_0082ad74;
    }
  }
  *(undefined4 **)(param_1 + 0xc) = puVar6;
  return 1;
}


