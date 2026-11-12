#include "003cd404_003d0bc0.h"



bool fn_003d0bc0(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined1 auStack_220 [256];
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [252];
  
  bVar6 = false;
  fn_00301f50(auStack_220,0x100);
  switch(*(undefined4 *)(param_1 + 0x84)) {
  default:
    goto switchD_003d0bf8_caseD_0;
  case 1:
    fn_002e94f0(param_1 + 0x58,*(undefined4 *)(param_1 + 0x54),*(undefined1 *)(param_1 + 0x74));
    uVar5 = fn_0024f870(*(undefined4 *)(param_1 + 0x54));
    fn_002e9394(*(undefined4 *)(param_1 + 0x54),param_1 + 0x58,uVar5);
    fn_0020bbc4(auStack_120,*(undefined4 *)(param_1 + 0x54));
    uVar2 = fn_006c0028(auStack_11c);
    *(undefined2 *)(*(int *)(param_1 + 0x54) + 0x22) = uVar2;
    uVar2 = fn_006c0114(auStack_11c);
    *(undefined2 *)(*(int *)(param_1 + 0x54) + 0x24) = uVar2;
    uVar4 = fn_002467b4(*(char *)(*(int *)(param_1 + 0x54) + 0x2e) + '\x01',
                         *(undefined1 *)(param_1 + 0x88));
    *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x34) = uVar4;
    fn_0024f108(*(undefined4 *)(param_1 + 0x54),uVar5);
    *(byte *)(*(int *)(param_1 + 0x18) + 0x44) = *(byte *)(*(int *)(param_1 + 0x18) + 0x44) & 0xfe;
    *(byte *)(*(int *)(param_1 + 0x28) + 0x44) = *(byte *)(*(int *)(param_1 + 0x28) + 0x44) & 0xfe;
    *(byte *)(*(int *)(param_1 + 0x34) + 0x44) = *(byte *)(*(int *)(param_1 + 0x34) + 0x44) & 0xfe;
    *(byte *)(*(int *)(param_1 + 0x2c) + 0x44) = *(byte *)(*(int *)(param_1 + 0x2c) + 0x44) & 0xfe;
    *(byte *)(*(int *)(param_1 + 0x30) + 0x44) = *(byte *)(*(int *)(param_1 + 0x30) + 0x44) & 0xfe;
    *(byte *)(*(int *)(param_1 + 0x38) + 0x44) = *(byte *)(*(int *)(param_1 + 0x38) + 0x44) & 0xfe;
    *(byte *)(*(int *)(param_1 + 0x3c) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0x3c) + 0x44) & 0xfe | 1;
    *(byte *)(*(int *)(param_1 + 0x40) + 0x44) = *(byte *)(*(int *)(param_1 + 0x40) + 0x44) & 0xfe;
    *(byte *)(*(int *)(param_1 + 0x44) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0x44) + 0x44) & 0xfe | 1;
    *(byte *)(*(int *)(param_1 + 0x48) + 0x44) = *(byte *)(*(int *)(param_1 + 0x48) + 0x44) & 0xfe;
    fn_003efe54(auStack_220,0x80,DAT_008903e0,(int)*(short *)(param_1 + 0x58),0);
    fn_00190d50(*(undefined4 *)(param_1 + 0x3c),auStack_220);
    fn_003efe54(auStack_220,0x80,DAT_008903e4,(int)*(short *)(param_1 + 0x5a),0);
    fn_00190d50(*(undefined4 *)(param_1 + 0x44),auStack_220);
    return true;
  case 2:
    bVar6 = true;
    *(byte *)(*(int *)(param_1 + 0x40) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0x40) + 0x44) & 0xfe | 1;
    *(byte *)(*(int *)(param_1 + 0x48) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0x48) + 0x44) & 0xfe | 1;
    fn_003efe54(auStack_220,0x80,DAT_008903e8,(int)*(short *)(param_1 + 0x5c),0);
    fn_00190d50(*(undefined4 *)(param_1 + 0x3c),auStack_220);
    fn_003efe54(auStack_220,0x80,DAT_008903ec,(int)*(short *)(param_1 + 0x5e),0);
    fn_00190d50(*(undefined4 *)(param_1 + 0x44),auStack_220);
    fn_003efe54(auStack_220,0x80,DAT_008903f0,(int)*(short *)(param_1 + 0x60),0);
    fn_00190d50(*(undefined4 *)(param_1 + 0x40),auStack_220);
    fn_003efe54(auStack_220,0x80,DAT_008903f4,(int)*(short *)(param_1 + 0x62),0);
    fn_00190d50(*(undefined4 *)(param_1 + 0x48),auStack_220);
    uVar3 = *(ushort *)(param_1 + 0x66);
    if ((short)uVar3 < 1) {
      uVar3 = (ushort)*(byte *)(param_1 + 0x7c);
    }
    if (uVar3 != 0) {
      return true;
    }
    break;
  case 3:
    sVar1 = *(short *)(*(int *)(param_1 + 0x54) + 0x3a);
    if (0 < sVar1) {
      *(undefined1 *)(param_1 + 0x7f) = 1;
      *(byte *)(*(int *)(param_1 + 0x40) + 0x44) = *(byte *)(*(int *)(param_1 + 0x40) + 0x44) & 0xfe
      ;
      *(byte *)(*(int *)(param_1 + 0x48) + 0x44) = *(byte *)(*(int *)(param_1 + 0x48) + 0x44) & 0xfe
      ;
      uVar5 = fn_0016ba34(DAT_00897800,DAT_00898780,DAT_008903f8,0);
      fn_00190d50(*(undefined4 *)(param_1 + 0x3c),uVar5);
      fn_003efe54(auStack_220,0x80,DAT_008903fc,(int)*(short *)(param_1 + 0x66),1);
      fn_00190d50(*(undefined4 *)(param_1 + 0x44),auStack_220);
      fn_00144834(0x204,1);
    }
    bVar6 = 0 < sVar1;
    if (*(char *)(param_1 + 0x7c) != '\0') {
      return bVar6;
    }
    break;
  case 4:
    if (*(char *)(param_1 + 0x7c) != '\0') {
      bVar6 = true;
      *(byte *)(*(int *)(param_1 + 0x40) + 0x44) = *(byte *)(*(int *)(param_1 + 0x40) + 0x44) & 0xfe
      ;
      *(byte *)(*(int *)(param_1 + 0x48) + 0x44) = *(byte *)(*(int *)(param_1 + 0x48) + 0x44) & 0xfe
      ;
      fn_00301f50(auStack_120,0x100);
      uVar5 = DAT_00897800;
      fn_001003e0(auStack_120,*(int *)(param_1 + 0x54) + 4);
      uVar4 = fn_0016ba34(uVar5,DAT_00898780,DAT_00890400,0);
      fn_0010313a(auStack_120,uVar4);
      fn_00190d50(*(undefined4 *)(param_1 + 0x3c),auStack_120);
      uVar5 = fn_0016ba34(uVar5,DAT_00898780,DAT_00890404,0);
      fn_00190d50(*(undefined4 *)(param_1 + 0x44),uVar5);
    }
  }
  *(undefined1 *)(param_1 + 0x7e) = 1;
switchD_003d0bf8_caseD_0:
  return bVar6;
}



undefined4 * fn_003cf788(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_00831084;
  iVar2 = fn_00145b00(8,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_00335ea4();
  }
  puVar1[0x19] = uVar3;
  puVar1[0x1a] = 0;
  iVar2 = fn_00145b00(0x1c,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_001c4578();
  }
  puVar1[0x1b] = uVar3;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_0026e378(iVar2,0x1acb,0,(char *)&DAT_007d246e,0,1);
  }
  puVar1[0x1c] = uVar3;
  puVar1[0x1d] = 0;
  *(undefined1 *)(puVar1 + 0x1e) = 0;
  *(undefined1 *)((int)puVar1 + 0x79) = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *(undefined1 *)(puVar1 + 0x21) = 0;
  piVar4 = (int *)fn_006896fc(puVar1,0xdd);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0xc))(piVar4);
    do {
      if (puVar5 == &DAT_00898a00) goto LAB_003cf86c;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_003cf86c:
  puVar1[0x23] = 0;
  puVar1[0x22] = piVar4;
  puVar1[0x24] = 0;
  *(undefined1 *)(puVar1 + 0x25) = 0;
  *(undefined1 *)((int)puVar1 + 0x95) = 0;
  if (param_2 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(**(code **)*param_2)(param_2);
    do {
      if (puVar5 == &DAT_00898c24) goto LAB_003cf8b4;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  param_2 = (undefined4 *)0x0;
LAB_003cf8b4:
  puVar1[0x27] = 0;
  puVar1[0x26] = param_2;
  return puVar1;
}



void fn_003cd404(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0xc))(param_1);
    if ((iVar2 == 0) &&
       (iVar2 = fn_006ac638(*(undefined4 *)(DAT_008977e0 + 0x30),param_1[1]), iVar2 != 0)) {
      uVar1 = fn_001c7764(iVar2,param_1 + 2);
      *(undefined1 *)(param_1 + 6) = uVar1;
    }
    if ((char)param_1[9] == '\0') {
      if ((char)param_1[6] == '\0') {
        fn_001f5bac(*(undefined4 *)(DAT_008977e0 + 0x30),param_1[1],param_1[7],4);
        *(undefined1 *)(param_1 + 9) = 1;
        return;
      }
      *(undefined1 *)(param_1 + 9) = 2;
    }
    else if (((char)param_1[9] == '\x01') && ((char)param_1[6] != '\0')) {
      fn_001f5bac(*(undefined4 *)(DAT_008977e0 + 0x30),param_1[1],param_1[8],4);
      *(undefined1 *)(param_1 + 9) = 2;
    }
  }
  return;
}


