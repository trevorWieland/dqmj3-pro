#include "0059f630_005b6f2c.h"



void fn_005b6f2c(int *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  short *psVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  short *psVar9;
  short *psVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  
  iVar4 = param_1[0x4f];
  *(char *)((int)param_1 + 0x13d) = (char)iVar4;
  *(char *)(param_1 + 0x4f) = *(char *)((int)param_1 + 0x13e);
  puVar11 = (undefined4 *)0x0;
  param_1[0x50] = param_1[0x50] + 1;
  if ((char)iVar4 == *(char *)((int)param_1 + 0x13e)) {
    param_1[0x51] = param_1[0x51] + 1;
  }
  else {
    param_1[0x51] = 0;
  }
  if ((char)param_1[0x4f] == '\x01') {
    if (param_1[0x51] == 0) {
      uVar5 = fn_0022f584((char *)&DAT_005b7230,0);
      local_58 = 0;
      local_5c = 1;
      local_54 = 0;
      uStack_50 = 1;
      local_60 = 1;
      fn_0036c5f4(param_1[0x17],uVar5,1,0);
      fn_00689bd0(param_1,0x48,0);
      return;
    }
    if (*(char *)(param_1[0x17] + 0x31) == '\x01') {
      *(undefined1 *)((int)param_1 + 0x13e) = 2;
    }
  }
  else {
    if ((char)param_1[0x4f] != '\x02') {
      uVar2 = fn_006f6a5c();
      if ((uVar2 & 0x100000) == 0) {
        if ((uVar2 & 0x200000) != 0) {
          *(undefined1 *)(param_1[0x43] + 0x18) = 2;
        }
      }
      else {
        *(undefined1 *)(param_1[0x43] + 0x18) = 1;
      }
      fn_00380e50(param_1);
      cVar1 = (char)param_1[0x48];
      if (cVar1 != '\0') {
        if (cVar1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00415a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(int *)param_1[0x45] + 0x14))();
          return;
        }
        if (cVar1 != '\x02' && cVar1 != '\x03') {
          return;
        }
      }
      (**(code **)(*(int *)param_1[0x45] + 0x14))();
                    /* WARNING: Could not recover jumptable at 0x00415a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)param_1[0x46] + 0x14))();
      return;
    }
    if (param_1[0x51] == 0) {
      fn_00604a04(param_1[0x4d]);
      uVar5 = *(undefined4 *)(param_1[0x4d] + 0x28);
      puVar3 = (undefined4 *)fn_001f7510(param_1,0x4c);
      if (puVar3 != (undefined4 *)0x0) {
        puVar7 = (undefined4 *)(**(code **)*puVar3)(puVar3);
        do {
          if (puVar7 == &DAT_008946d4) {
            puVar11 = puVar3;
            break;
          }
          puVar7 = (undefined4 *)*puVar7;
        } while (puVar7 != (undefined4 *)0x0);
      }
      *(undefined1 *)(puVar11 + 2) = 3;
      *(undefined1 *)(puVar11 + 7) = 0;
      *(undefined1 *)(puVar11 + 9) = 1;
      iVar4 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar5);
      fn_00231700(&local_60,0x20,(int)*(short *)(iVar4 + 0x1c),0);
      uVar5 = fn_0022f750((char *)&DAT_005b6d9c);
      uVar8 = fn_00100b58();
      fn_00231d04(&local_60,0x20,uVar5,uVar8);
      fn_003212cc(puVar11,&local_60);
      uVar5 = fn_0015b064((int)*(short *)(iVar4 + 0x1c));
      fn_003212bc(puVar11,uVar5);
      fn_00689bd0(param_1,0x4c,1);
                    /* WARNING: Could not recover jumptable at 0x005b722c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 400))(param_1,*(undefined4 *)(param_1[0x4d] + 0x28));
      return;
    }
    puVar11 = (undefined4 *)fn_001f7510(param_1,0x4c);
    if (puVar11 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar11)(puVar11);
      do {
        if (puVar3 == &DAT_008946d4) goto LAB_005b7070;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar11 = (undefined4 *)0x0;
LAB_005b7070:
    if (*(char *)(puVar11 + 7) == '\x01') {
      iVar4 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1[0x4d] + 0x28)
                          );
      uVar5 = fn_0024e350();
      uVar2 = 0;
      psVar6 = (short *)puVar11[5];
      psVar9 = (short *)(iVar4 + 4);
      do {
        uVar2 = uVar2 + 1;
        psVar10 = psVar9 + 1;
        *psVar9 = *psVar6;
        bVar12 = psVar6[1] == 0;
        psVar6 = psVar6 + 1;
        psVar9 = psVar10;
      } while ((bVar12 || uVar2 < 0xb) && (!bVar12 && uVar2 != 10));
      *psVar10 = 0;
      fn_0024f108(iVar4,uVar5);
      *(undefined4 *)(param_1[0x4d] + 0x10) = 0x50;
      *(undefined4 *)(param_1[0x4d] + 0x14) = 0x50;
      *(undefined1 *)(param_1 + 0x54) = 0;
      fn_004156a0(param_1,param_1[0x52],param_1[0x53]);
      *(undefined1 *)(param_1 + 0x54) = 1;
      fn_006049dc(param_1[0x4d]);
      *(undefined1 *)((int)param_1 + 0x13e) = 0;
      return;
    }
  }
  return;
}



void fn_005ae874(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined1 auStack_24 [4];
  float local_20 [4];
  
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 4:
    iVar5 = fn_006b0d10(*(undefined4 *)(param_1 + 0x14),0);
    if (iVar5 == 0) {
LAB_005aeaa4:
      fn_0021718c(param_1,1,0x3c);
      return;
    }
    fn_00683320(iVar5,9,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x13c));
    *(undefined4 *)(param_1 + 0xc) = 5;
    *(undefined4 *)(param_1 + 0x10) = 0;
    break;
  case 5:
    iVar5 = fn_006b0d10(*(undefined4 *)(param_1 + 0x14),1);
    if (iVar5 == 0) {
      fn_0021718c(param_1,1,0x3c);
      return;
    }
    fn_005ae5a4(*(undefined4 *)(param_1 + 0x14),iVar5);
    local_2c = *(undefined4 *)(iVar5 + 0x24);
    iVar5 = fn_005ae400(auStack_24,local_30);
    if (iVar5 != 0) {
      local_20[0] = local_20[0] -
                    (*(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x100) + 4) +
                     *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x100) + 0xc) + 10.0);
      iVar5 = (**(code **)(**(int **)(param_1 + 0x14) + 0x28))(*(int **)(param_1 + 0x14),auStack_24)
      ;
      if (iVar5 != 0) {
        *(undefined4 *)(param_1 + 0xc) = 6;
        *(undefined4 *)(param_1 + 0x10) = 0;
        return;
      }
    }
    break;
  case 6:
    iVar5 = fn_006b0d10(*(undefined4 *)(param_1 + 0x14),1);
    if (iVar5 == 0) goto LAB_005aeaa4;
    iVar5 = fn_001c7764(*(undefined4 *)(param_1 + 0x14),iVar5 + 0x20);
    if (iVar5 != 0) {
      *(undefined4 *)(param_1 + 0xc) = 7;
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(**(int **)(param_1 + 0x14) + 0x44))
                (*(int **)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x58),4,0);
      fn_00214c4c(*(undefined4 *)(param_1 + 0x14),6,1);
                    /* WARNING: Could not recover jumptable at 0x005aea68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0x14) + 0xe4))(*(int **)(param_1 + 0x14),0x1000981,0);
      return;
    }
    break;
  case 7:
    cVar1 = *(char *)(param_1 + 0x5c);
    fn_006a9878(*(undefined4 *)(param_1 + 0x14),(char *)&DAT_005ae7e4);
    iVar5 = fn_005ae400(local_20);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 0x5c) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x5c) = 0;
    }
    if (*(char *)(param_1 + 0x5c) != cVar1) {
      uVar2 = fn_0023ddec(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7534);
      fn_006b0964(*(undefined4 *)(param_1 + 0x14),1);
      fn_0023dd30(*(undefined4 *)(DAT_008977e0 + 0x2c),uVar2);
      (**(code **)(**(int **)(param_1 + 0x14) + 0xe4))(*(int **)(param_1 + 0x14),0x10009ca,0);
    }
    iVar5 = fn_006b0d10(*(undefined4 *)(param_1 + 0x14),1);
    if ((iVar5 != 0) && (iVar3 = fn_006bd500(param_1,iVar5,(char *)&DAT_005ae7e4), iVar3 != 0)) {
      fn_00214640(iVar5,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x13c),2,0x2d);
      fn_00217988(*(undefined4 *)(param_1 + 0x14));
      fn_00215e38(*(undefined4 *)(param_1 + 0x14),6,1);
    }
    iVar5 = (**(code **)(**(int **)(param_1 + 0x14) + 0x48))();
    if (iVar5 != 0) {
      *(undefined4 *)(param_1 + 0xc) = 8;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    return;
  case 8:
    piVar4 = *(int **)(param_1 + 0x14);
    iVar5 = (**(code **)(*piVar4 + 0x28))(piVar4,piVar4[0x5c] + 0x20);
    if (iVar5 != 0) goto LAB_005aeaa4;
  }
  return;
}



void fn_0059f630(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  
  if ((uint)(*(int *)(param_1 + 0xf4) - *(int *)(param_1 + 0xf0) >> 2) <= param_2) {
    fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,param_2);
  }
  puVar4 = (undefined4 *)0x0;
  iVar6 = *(int *)(*(int *)(param_1 + 0xf0) + param_2 * 4);
  if (iVar6 == 0) {
    *(undefined1 *)(param_1 + 0xec) = 1;
    fn_0059f048(param_1,0);
    puVar4 = *(undefined4 **)(param_1 + 0x18);
    pcVar5 = "MenuMessageFavoriteReplacePartyQuery";
    if (puVar4 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
      do {
        if (puVar1 == &DAT_008944a4) goto LAB_0059f774;
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    puVar4 = (undefined4 *)0x0;
LAB_0059f774:
    if (*(char *)(puVar4 + 3) == '\x04') {
      pcVar5 = (char *)&DAT_0059f588;
    }
    else if (((*(char *)(puVar4 + 3) == '\a') && (iVar6 = fn_00154ac8(0x3c), iVar6 != 0)) &&
            (iVar6 = fn_002b0948(*(undefined4 *)(DAT_00897804 + 0x10),
                                  *(undefined4 *)(param_1 + 0xe8)), *(int *)(iVar6 + 0x2c) == 0)) {
      fn_0015b0dc(iVar6 + 4);
      pcVar5 = (char *)&DAT_0059f5b8;
    }
    fn_0059eb9c(param_1,pcVar5,1);
    return;
  }
  if (iVar6 == 1) {
    puVar4 = *(undefined4 **)(param_1 + 0x18);
    if (puVar4 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
      do {
        if (puVar1 == &DAT_008944a4) goto LAB_0059f81c;
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    puVar4 = (undefined4 *)0x0;
LAB_0059f81c:
    if ((*(char *)(puVar4 + 3) == '\x04') &&
       (iVar6 = fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc)), iVar6 == 0)) {
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0x100094d;
      fn_0059eb9c(param_1,(char *)&DAT_0059f954,0);
      return;
    }
    *(undefined1 *)(param_1 + 0xec) = 4;
    fn_0059f048(param_1,1);
    puVar4 = *(undefined4 **)(param_1 + 0x18);
    if (puVar4 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
      do {
        if (puVar1 == &DAT_008944a4) goto LAB_0059f88c;
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    puVar4 = (undefined4 *)0x0;
LAB_0059f88c:
    fn_0059eb9c(param_1,(&DAT_00894594)[*(char *)(puVar4 + 3) == '\x04'],1);
    return;
  }
  if (iVar6 != 2) {
    return;
  }
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x4e);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894694) goto LAB_0059f6e0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0059f6e0:
  puVar1[4] = 0x56;
  puVar1[5] = 0x56;
  puVar1[2] = *(undefined4 *)(param_1 + 0xe8);
  puVar1[3] = 1;
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008944a4) {
        puVar4 = puVar2;
        break;
      }
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  if (*(char *)(puVar4 + 3) == '\x02') {
    puVar1[3] = puVar1[3] | 4;
  }
  fn_006899f4(param_1,0x4e,0,1);
  fn_0068ab44(param_1,0x100094b);
  return;
}


