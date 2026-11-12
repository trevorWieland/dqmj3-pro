#include "002fa190_0031264c.h"



void fn_0031264c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  
  if (*(char *)(*(int *)(param_1 + 100) + 9) != '\x01') {
    local_18 = param_4;
    iVar1 = fn_00154a6c(*(undefined4 *)(param_1 + 0x7c));
    if (iVar1 != 0) {
      fn_00159f34(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74));
      iVar1 = *(int *)(param_1 + 0x78) + 1;
      *(int *)(param_1 + 0x78) = iVar1;
      *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
      if (iVar1 == 1) {
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      if (iVar1 == 3) {
        local_18 = 0xff000000;
        fn_00163988(DAT_00897808,&local_18,0x14);
        local_18 = 0xff000000;
        fn_00163988(DAT_0089780c,&local_18,0x14);
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      if (*(int *)(param_1 + 0x78) == 2) {
        *(undefined1 *)(*(int *)(param_1 + 100) + 9) = 1;
      }
      uVar2 = fn_001c804c(*(undefined4 *)(param_1 + 0x68),
                           *(undefined4 *)(&DAT_00890f98 + *(int *)(param_1 + 0x78) * 4),
                           *(undefined4 *)(param_1 + 0x70));
      *(undefined4 *)(param_1 + 0x74) = uVar2;
      uVar2 = fn_001088e0(*(undefined4 *)(param_1 + 0x68),uVar2);
      *(undefined4 *)(param_1 + 0x7c) = uVar2;
      return;
    }
  }
  return;
}



undefined4 fn_0031021c(undefined4 *param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar5 = DAT_00897808;
  puVar6 = (undefined1 *)*param_1;
  switch(*puVar6) {
  case 0:
    local_28 = 0xff000000;
    fn_00163988(DAT_00897808,&local_28,0x1e);
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  case 1:
    uVar2 = *(int *)(puVar6 + 0x1c) * 0xff;
    lVar1 = (longlong)(int)uVar2 * -0x77777777 + ((ulonglong)uVar2 << 0x20);
    *(int *)(puVar6 + 0x1c) = *(int *)(puVar6 + 0x1c) + 1;
    *(char *)(*(int *)(puVar6 + 0x14) + 0x45) = (char)(lVar1 >> 0x24) - (char)(lVar1 >> 0x3f);
    if (*(int *)(iVar5 + 0x14) == *(int *)(iVar5 + 0xc)) {
      *puVar6 = 2;
      *(undefined1 *)(*(int *)(puVar6 + 0x14) + 0x45) = 0xff;
      return 0;
    }
    return 0;
  case 2:
    iVar5 = fn_001828f0(*(undefined4 *)(puVar6 + 0x10),s_Null_floating_008c570f);
    if (iVar5 != 0) {
      *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe | 1;
      uVar4 = fn_0068eb18(DAT_008977e8);
      uVar4 = fn_0025f988(uVar4,s_race_network_error_shutdown_008c571d);
      fn_00190d50(*(undefined4 *)(puVar6 + 0x18),uVar4);
    }
    fn_001296e8(DAT_00897850);
    uVar3 = 3;
    break;
  case 3:
    iVar5 = fn_001296d0(DAT_00897850);
    if (iVar5 != 0) {
      fn_00119854(DAT_00897850);
      return 0;
    }
    fn_0011de7c();
    uVar3 = 4;
    break;
  case 4:
    uVar4 = fn_0068eb18(DAT_008977e8);
    uVar4 = fn_0025f988(uVar4,s_race_network_error_shutdown_comp_008c5739);
    fn_00190d50(*(undefined4 *)(puVar6 + 0x18),uVar4);
    iVar5 = fn_001cce8c();
    if (iVar5 == 0) {
      return 0;
    }
    uVar3 = 5;
    break;
  case 5:
    uVar4 = fn_0068eb18(DAT_008977e8);
    uVar4 = fn_0025f988(uVar4,s_race_network_error_008c575e);
    fn_00190d50(*(undefined4 *)(puVar6 + 0x18),uVar4);
    iVar5 = fn_001cce8c();
    if (iVar5 == 0) {
      return 0;
    }
    *puVar6 = 6;
    local_24 = 0xff000000;
    fn_00163988(DAT_0089780c,&local_24,0x1e);
    return 0;
  case 6:
    if (*(int *)(DAT_0089780c + 0x14) != *(int *)(DAT_0089780c + 0xc)) {
      return 0;
    }
    uVar3 = 7;
    break;
  case 7:
    if (*(int *)(puVar6 + 4) != 0) {
      fn_0016a43c(*(int *)(puVar6 + 4),*(undefined4 *)(puVar6 + 0xc));
                    /* WARNING: Subroutine does not return */
      fn_001482f4(*(undefined4 *)(puVar6 + 4),*(undefined4 *)(puVar6 + 8));
    }
    return 1;
  default:
    goto switchD_00310254_default;
  }
  *puVar6 = uVar3;
switchD_00310254_default:
  return 0;
}



void fn_002fa190(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined1 auStack_14 [4];
  
  iVar2 = fn_006b8478(*(undefined4 *)(DAT_00897804 + 0xc));
  if (499 < iVar2) {
    uVar3 = fn_0022f584((char *)&DAT_002fa304,0);
    local_20 = 0;
    local_24 = 1;
    local_1c = 0;
    uStack_18 = 1;
    local_28 = 0;
    fn_0036c5f4(*(undefined4 *)(param_1 + 0xf8),uVar3,1,1);
    *(undefined1 *)(*(int *)(param_1 + 0xf8) + 0x5c) = 1;
    fn_001f749c(*(undefined4 *)(param_1 + 0xf4),0x48,0);
    uVar3 = fn_001603f8(auStack_14,0);
    fn_00163988(DAT_0089780c,uVar3,1);
    uVar1 = 4;
    goto LAB_002fa2f0;
  }
  if ((*(byte *)(param_1 + 0x10c) & 1) == 0) {
    fn_0025f3f4(*(undefined4 *)(param_1 + 0xfc),param_1);
    piVar4 = *(int **)(*(int *)(param_1 + 0xf4) + 0x14);
    (**(code **)(*piVar4 + 0x24))(piVar4,0x2d,0);
    if ((*(byte *)(param_1 + 0x10c) & 8) == 0) {
      piVar4 = *(int **)(*(int *)(param_1 + 0xf4) + 0xc);
      (**(code **)(*piVar4 + 0x24))(piVar4,0x4c,0);
      uVar3 = fn_001603f8(&local_28,0);
      fn_00163988(DAT_0089780c,uVar3,10);
      goto LAB_002fa2d8;
    }
  }
  else {
    uVar3 = fn_0015b064((int)*(short *)(param_1 + 0x1c));
    fn_001003e0(param_1 + 4,uVar3);
LAB_002fa2d8:
    if ((*(byte *)(param_1 + 0x10c) & 8) == 0) {
      *(undefined1 *)(param_1 + 0xf0) = 6;
      return;
    }
  }
  uVar1 = 2;
LAB_002fa2f0:
  *(undefined1 *)(param_1 + 0xf0) = uVar1;
  return;
}


