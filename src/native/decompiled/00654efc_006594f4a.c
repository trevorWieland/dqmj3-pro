#include "00654efc_006594f4a.h"



void fn_00656b40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           fn_00657a14(param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9);
  *puVar1 = &DAT_00859694;
  puVar1[0x22] = param_3;
  return;
}



void fn_00656458(int param_1,int param_2)

{
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 4);
  fn_0019bc50(param_1 + 0xc);
  return;
}



void fn_006554d8(void)

{
  undefined4 uVar1;
  
  fn_0033cd44();
  fn_0033cc5c();
  fn_0026d004();
  fn_0026d0a0();
  fn_00202ce0();
  fn_002eb620();
  fn_006a7b54();
  fn_001d50b4();
  fn_00203f28();
  fn_0025beac();
  fn_0028bdfc();
  fn_002e324c();
  fn_002530f4();
  fn_0020c2ac();
  fn_00378bd8();
  fn_0026cdb8();
  fn_0033a3f0();
  fn_00299f00();
  fn_002d81b8();
  fn_00388850();
  fn_0068f844();
  fn_0030c344();
  fn_002ea858();
  fn_00661758();
  fn_00242bb0();
  fn_002ea3b4();
  fn_002cd4b4();
  uVar1 = fn_0039e4cc();
  fn_0026984c(uVar1);
  fn_0025ff50();
  fn_00388954();
  fn_003e6b10();
  fn_00227344();
  fn_0065e50c();
  fn_006917f4();
  fn_006914ec();
  fn_00661028();
  fn_00660ce8();
  fn_00692584();
  return;
}



void fn_00654efc(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  int local_14f4;
  int local_14e0 [9];
  int local_14bc;
  undefined1 auStack_14b0 [1048];
  undefined1 auStack_1098 [1048];
  undefined1 auStack_c80 [1048];
  undefined1 auStack_868 [1048];
  undefined1 auStack_450 [1052];
  int iStack_34;
  int local_30;
  int local_2c;
  int iStack_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  iStack_28 = param_4;
  fn_00301f50(auStack_14b0,0x1060);
  iVar5 = 0;
  local_14bc = param_7 + 0x180388;
  iVar1 = param_4 + 4;
  iVar2 = param_4;
  do {
    if (param_6 == 0) {
      local_14e0[iVar5] = local_14bc + (char)iVar2 * 0x418 + -0x4080;
    }
    else {
      local_14e0[iVar5] = local_14bc + (char)iVar2 * 0x418 + -0x4080;
    }
    iVar2 = iVar2 + 1;
    iVar5 = (int)(char)((char)iVar5 + '\x01');
  } while (iVar2 < iVar1);
  iVar2 = 0;
  local_14f4 = 0;
  do {
    iVar5 = param_1 + (char)param_4 * 0x418;
    psVar3 = (short *)(iVar5 + -0x4080);
    if (*(char *)(iVar5 + -0x3c6c) == '\0') {
      if ((0 < *psVar3) && (iVar2 < 4)) {
        fn_0017821c(auStack_14b0 + iVar2 * 0x418,psVar3,0x418);
        iVar2 = (int)(char)((char)iVar2 + '\x01');
      }
    }
    else {
      local_14f4 = (int)(char)param_4;
      iVar5 = 0;
      if (param_5 == 0) {
        iVar5 = 2;
      }
      iVar6 = param_1 + iVar5 * 0x418;
      iVar5 = param_1 + (iVar5 + 1) * 0x418;
      fn_0061a62c(iVar6 + 0x42a0,(int)*(short *)(iVar6 + 0x42cc),(int)*(short *)(iVar5 + 0x42cc));
      fn_0061a324(iVar6 + 0x42a0,(int)*(short *)(iVar6 + 0x42bc),(int)*(short *)(iVar6 + 0x42cc),
                   (int)*(short *)(iVar5 + 0x42bc),(int)*(short *)(iVar5 + 0x42cc));
      iVar5 = 0;
      if (param_5 == 0) {
        iVar5 = 2;
      }
      iVar6 = param_1 + iVar5 * 0x418;
      iVar5 = param_1 + (iVar5 + 1) * 0x418;
      fn_0061a7a4((int)*(short *)(iVar6 + 0x42ce),(int)*(short *)(iVar5 + 0x42ce));
      fn_0061a518((int)*(short *)(iVar6 + 0x42be),(int)*(short *)(iVar6 + 0x42ce),
                   (int)*(short *)(iVar5 + 0x42be),(int)*(short *)(iVar5 + 0x42ce));
      cVar8 = '\0';
      do {
        cVar4 = '\0';
        if (param_5 == 0) {
          cVar4 = '\x02';
        }
        fn_0017821c(auStack_450,param_1 + (char)(cVar4 + cVar8) * 0x418 + 0x42a0,0x418);
        fn_0062ba20(psVar3,auStack_450);
        fn_0017821c(auStack_14b0 + iVar2 * 0x418,auStack_450,0x418);
        iVar2 = (int)(char)((char)iVar2 + '\x01');
        cVar8 = cVar8 + '\x01';
      } while (cVar8 < '\x02');
    }
    param_4 = param_4 + 1;
  } while (param_4 < iVar1);
  fn_0017821c(local_14e0[0],auStack_14b0,0x418);
  fn_0017821c(local_14e0[1],auStack_1098,0x418);
  fn_0017821c(local_14e0[2],auStack_c80,0x418);
  fn_0017821c(local_14e0[3],auStack_868,0x418);
  cVar8 = (char)local_14f4;
  if (param_5 == 0) {
    *(char *)(param_7 + 0x185ef3) = cVar8;
    *(char *)(param_7 + 0x185ef4) = cVar8 + '\x01';
  }
  else {
    *(char *)(param_7 + 0x185ef1) = cVar8;
    *(char *)(param_7 + 0x185ef2) = cVar8 + '\x01';
  }
  if (param_6 != 0) {
    iVar2 = local_14bc + local_30 * 8;
    iVar1 = local_14bc + local_2c * 8;
    cVar4 = *(char *)(iVar1 + 0x4182);
    if (local_14f4 < *(char *)(iVar2 + 0x4182)) {
      *(char *)(iVar2 + 0x4182) = *(char *)(iVar2 + 0x4182) + '\x01';
    }
    if (local_14f4 < cVar4) {
      *(char *)(iVar1 + 0x4182) = cVar4 + '\x01';
    }
    bVar9 = *(char *)(iVar2 + 0x4182) != local_14f4;
    bVar10 = *(char *)(iVar1 + 0x4182) == local_14f4;
    if (!bVar9 || bVar10) {
      if (bVar9) {
        iVar2 = 0;
        if (bVar10) {
          iVar2 = local_14f4;
        }
        cVar4 = (char)iVar2;
      }
      else {
        cVar4 = '\0';
        if (bVar10) {
          cVar4 = cVar8 + '\x01';
        }
        *(char *)(iVar2 + 0x4182) = cVar8;
      }
      if (bVar10) {
        *(char *)(iVar1 + 0x4182) = cVar4;
      }
      uVar7 = 0;
      if ((bVar9) && (bVar10)) {
        uVar7 = 1;
      }
      iVar2 = local_14bc + local_14f4 * 0x418;
      *(bool *)(iVar2 + -0x3fd7) = !bVar9;
      *(undefined1 *)(iVar2 + -0x3fd6) = uVar7;
      if (!bVar9 && bVar10) {
        local_14bc = local_14bc + (char)(cVar8 + '\x01') * 0x418;
        *(undefined1 *)(local_14bc + -0x3fd7) = 0;
        *(undefined1 *)(local_14bc + -0x3fd6) = 1;
      }
    }
  }
  return;
}


