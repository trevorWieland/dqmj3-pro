#include "00245bb8_00246484.h"



void fn_00246484(int param_1,undefined1 param_2)

{
  *(undefined1 *)(*(int *)(param_1 + 8) + 0x8e) = param_2;
  return;
}



void fn_00245e60(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  undefined4 uVar11;
  undefined4 local_28 [4];
  
  cVar1 = *(char *)(param_1 + 6);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      if ((*(int *)(param_1 + 0x1c) == -1) ||
         (iVar3 = fn_001854ac(*(undefined4 *)(param_1 + 0xc)), (*(byte *)(iVar3 + 0x2c) & 1) != 0))
      {
        *(undefined1 *)(param_1 + 6) = 2;
      }
    }
    else if ((cVar1 != '\x02') && (cVar1 == '\x03')) {
      if (*(int *)(param_1 + 0x1c) != -1) {
        iVar3 = fn_001854ac(*(undefined4 *)(param_1 + 0xc));
        if ((*(byte *)(iVar3 + 0x2c) & 1) == 0) goto LAB_00245f08;
        if (*(int *)(param_1 + 0x1c) != -1) {
          fn_00159f34(*(undefined4 *)(param_1 + 0xc));
          *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
        }
      }
      *(undefined1 *)(param_1 + 6) = 0;
    }
  }
LAB_00245f08:
  uVar8 = 3;
  switch(*(undefined1 *)(param_1 + 7)) {
  case 1:
    if ((*(int *)(param_1 + 0x20) == -1) ||
       (iVar3 = fn_001854ac(*(undefined4 *)(param_1 + 0xc)), (*(byte *)(iVar3 + 0x2c) & 1) != 0)) {
      *(undefined4 *)(param_1 + 0x90) = 6;
      *(undefined1 *)(param_1 + 7) = 2;
    }
    break;
  case 2:
    iVar3 = *(int *)(param_1 + 0x90) + -1;
    *(int *)(param_1 + 0x90) = iVar3;
    if (iVar3 < 1) {
      *(undefined1 *)(param_1 + 7) = 3;
    }
    break;
  case 3:
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0xc4)) {
      do {
        iVar7 = param_1 + iVar3 * 4;
        uVar5 = iVar3 + 1;
        iVar6 = *(int *)(iVar7 + 0x9c);
        iVar3 = iVar3 + 1;
        *(byte *)(iVar6 + 0x44) =
             *(byte *)(param_1 + 0x8e) == uVar5 | *(byte *)(iVar6 + 0x44) & 0xfe;
        iVar6 = *(int *)(iVar7 + 0xb0);
        *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe | 1;
      } while (iVar3 < *(int *)(param_1 + 0xc4));
    }
    break;
  case 4:
    if (*(int *)(param_1 + 0x20) != -1) {
      iVar3 = fn_001854ac(*(undefined4 *)(param_1 + 0xc));
      if ((*(byte *)(iVar3 + 0x2c) & 1) == 0) break;
      if (*(int *)(param_1 + 0x20) != -1) {
        fn_00159f34(*(undefined4 *)(param_1 + 0xc));
        *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
      }
    }
    *(byte *)(*(int *)(param_1 + 0x94) + 0x44) = *(byte *)(*(int *)(param_1 + 0x94) + 0x44) & 0xfe;
    *(undefined1 *)(param_1 + 7) = 0;
  }
  switch(*(undefined1 *)(param_1 + 5)) {
  case 1:
    if ((*(int *)(param_1 + 0x18) == -1) ||
       (iVar3 = fn_001854ac(*(undefined4 *)(param_1 + 0xc)), (*(byte *)(iVar3 + 0x2c) & 1) != 0)) {
      *(undefined1 *)(param_1 + 5) = 2;
    }
    break;
  case 2:
    iVar3 = fn_00290c1c(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x34));
    if (iVar3 != 0) {
      fn_00190d50(*(undefined4 *)(param_1 + 0x34));
    }
    bVar2 = fn_006b8954(*(undefined4 *)(param_1 + 0x80));
    *(byte *)(*(int *)(param_1 + 0x58) + 0x44) =
         bVar2 | *(byte *)(*(int *)(param_1 + 0x58) + 0x44) & 0xfe;
    if (*(char *)(*(int *)(param_1 + 0x80) + 0x1c) != -1) {
      fn_002459d0(param_1);
    }
    if (((*(char *)(param_1 + 0x84) != '\0') &&
        (iVar3 = fn_006b8970(*(undefined4 *)(param_1 + 0x80)), iVar3 != 0)) &&
       (iVar3 = *(int *)(param_1 + 0x88) + -1, *(int *)(param_1 + 0x88) = iVar3, iVar3 < 1)) {
      fn_0016b414(param_1);
    }
    break;
  case 3:
    if (*(int *)(param_1 + 0x18) != -1) {
      iVar3 = fn_001854ac(*(undefined4 *)(param_1 + 0xc));
      if ((*(byte *)(iVar3 + 0x2c) & 1) == 0) break;
      if (*(int *)(param_1 + 0x18) != -1) {
        fn_00159f34(*(undefined4 *)(param_1 + 0xc));
        *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
      }
    }
    if (*(int *)(param_1 + 0x24) != -1) {
      fn_00159f34(*(undefined4 *)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
    }
    *(undefined1 *)(param_1 + 5) = 4;
    break;
  case 4:
    cVar1 = *(char *)(param_1 + 6);
    bVar9 = cVar1 == '\0';
    if (bVar9) {
      cVar1 = *(char *)(param_1 + 7);
    }
    if (bVar9 && cVar1 == '\0') {
      fn_00178eec(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14),0);
      *(undefined1 *)(param_1 + 5) = 0;
    }
  }
  switch(*(undefined1 *)(param_1 + 8)) {
  case 1:
    if (*(char *)(param_1 + 4) == '\x02') {
      fn_00291664(*(undefined4 *)(param_1 + 0x80));
      iVar3 = fn_00290c1c(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x7c));
      if (iVar3 != 0) {
        fn_00190d50(*(undefined4 *)(param_1 + 0x7c));
      }
    }
    *(undefined1 *)(param_1 + 8) = 2;
  case 2:
    if (*(char *)(param_1 + 4) == '\x03') {
      iVar3 = *(int *)(param_1 + 0xd4) + 1;
      *(int *)(param_1 + 0xd4) = iVar3;
      if (iVar3 < 0x11) {
        *(byte *)(*(int *)(param_1 + 0x30) + 0x44) =
             *(byte *)(*(int *)(param_1 + 0x30) + 0x44) & 0xfe | 1;
        fVar10 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xd4),
                                            (byte)(in_fpscr >> 0x16) & 3);
        uVar11 = VectorFloatToUnsigned(*(float *)(param_1 + 0xd0) * fVar10,3);
        *(char *)(*(int *)(param_1 + 0x30) + 0x45) = (char)uVar11;
      }
      else {
        *(undefined4 *)(param_1 + 0xd4) = 0;
        *(undefined1 *)(param_1 + 8) = 3;
      }
    }
    else if ((*(int *)(param_1 + 0x28) == -1) ||
            (iVar3 = fn_001854ac(*(undefined4 *)(param_1 + 0xc)),
            (*(byte *)(iVar3 + 0x2c) & 1) != 0)) {
LAB_00246384:
      *(undefined1 *)(param_1 + 8) = uVar8;
    }
    break;
  case 3:
    if ((*(char *)(param_1 + 4) == '\x03') &&
       (iVar3 = fn_00290c1c(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x7c)),
       iVar3 != 0)) {
      fn_00190d50(*(undefined4 *)(param_1 + 0x7c));
    }
    if (((*(char *)(param_1 + 0x84) != '\0') &&
        (iVar3 = fn_006b8970(*(undefined4 *)(param_1 + 0x80)), iVar3 != 0)) &&
       (iVar3 = *(int *)(param_1 + 0x88) + -1, *(int *)(param_1 + 0x88) = iVar3, iVar3 < 1)) {
      fn_0016b414(param_1);
    }
    break;
  case 4:
    uVar8 = 5;
    if (*(char *)(param_1 + 4) == '\x03') {
      iVar3 = *(int *)(param_1 + 0xd4) + 1;
      *(int *)(param_1 + 0xd4) = iVar3;
      if (iVar3 < 0x10) break;
      if (iVar3 == 0x10) {
        local_28[0] = 0xff000000;
        fn_00163988(DAT_00897808,local_28,0x1e);
        local_28[0] = 0;
        fn_00163988(DAT_00897810,local_28,0x1e);
      }
      if (*(int *)(DAT_00897808 + 0x14) != *(int *)(DAT_00897808 + 0xc)) break;
      iVar3 = *(int *)(param_1 + 0x28);
joined_r0x00246374:
      if (iVar3 != -1) {
        fn_00159f34(*(undefined4 *)(param_1 + 0xc));
        *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
      }
    }
    else if (*(int *)(param_1 + 0x28) != -1) {
      iVar3 = fn_001854ac(*(undefined4 *)(param_1 + 0xc));
      if ((*(byte *)(iVar3 + 0x2c) & 1) == 0) break;
      iVar3 = *(int *)(param_1 + 0x28);
      goto joined_r0x00246374;
    }
    goto LAB_00246384;
  case 5:
    fn_00178eec(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14),0);
    *(undefined1 *)(param_1 + 8) = 0;
  }
  fn_001c93c8(*(undefined4 *)(param_1 + 0xc));
  if (*(int *)(param_1 + 0x18) != -1) {
    piVar4 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0xc));
    (**(code **)(*piVar4 + 0xc))();
  }
  if (*(int *)(param_1 + 0x1c) != -1) {
    piVar4 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0xc));
    (**(code **)(*piVar4 + 0xc))();
  }
  if (*(int *)(param_1 + 0x20) != -1) {
    piVar4 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0xc));
    (**(code **)(*piVar4 + 0xc))();
  }
  if (*(int *)(param_1 + 0x24) != -1) {
    piVar4 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0xc));
    (**(code **)(*piVar4 + 0xc))();
  }
  if (*(int *)(param_1 + 0x28) == -1) {
    return;
  }
  piVar4 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0xc));
                    /* WARNING: Could not recover jumptable at 0x00246468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0xc))();
  return;
}



void fn_00245df0(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 5);
  bVar2 = cVar1 == '\0';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 8);
  }
  if (!bVar2 || cVar1 != '\0') {
    if (*(int *)(param_1 + 0x18) != -1) {
      fn_00159f34(*(undefined4 *)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x28) != -1) {
      fn_00159f34(*(undefined4 *)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    }
    fn_00178eec(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14),0);
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



void fn_00245d78(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  fn_0011050c(*(undefined4 *)(param_1 + 0xc));
  uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 0xc),DAT_0088fe6c,&DAT_00245de4,1,1);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = fn_001480d0(*(undefined4 *)(param_1 + 0xc),uVar1,DAT_0088fe70,&DAT_00245dec,0,0,param_4);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}



void fn_00245d34(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  bVar2 = (*(byte *)(iVar1 + 0xd1) & 3) != param_2;
  *(byte *)(iVar1 + 0xd0) = *(byte *)(iVar1 + 0xd0) | bVar2 << 2;
  if (bVar2) {
    *(byte *)(iVar1 + 0xd1) = (byte)param_2 | *(byte *)(iVar1 + 0xd1) & 0xfc;
  }
  return;
}



void fn_00245d18(int param_1)

{
  int iVar1;
  undefined4 in_s0;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  *(undefined4 *)(iVar1 + 0x20) = in_s0;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  return;
}



void fn_00245cd8(int param_1)

{
  int iVar1;
  undefined4 in_s0;
  undefined4 in_s1;
  float in_s2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(iVar1 + 0x34) = in_s0;
  *(undefined4 *)(iVar1 + 0x38) = in_s1;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(float *)(param_1 + 0xd0) = in_s2 * 0.0625;
  *(undefined1 *)(*(int *)(param_1 + 0x30) + 0x45) = 0;
  return;
}



void fn_00245bb8(int param_1,undefined4 param_2)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar8 = *(float *)(*(int *)(param_1 + 0xb0) + 0x1c);
  iVar1 = *(int *)(param_1 + 0x94);
  fVar2 = *(float *)(iVar1 + 0x1c);
  fVar4 = *(float *)(iVar1 + 0x3c);
  fVar5 = *(float *)(iVar1 + 0x40);
  fVar3 = *(float *)(iVar1 + 0x20);
  fVar9 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  fVar11 = *(float *)(*(int *)(param_1 + 0xb0) + 0x40);
  fVar10 = (float)VectorSignedToFloat((int)(fVar9 * (*(float *)(*(int *)(param_1 + 0x34) + 0xb8) +
                                                    *(float *)(*(int *)(param_1 + 0x34) + 0xc4)) +
                                           40.0) + 1U & 0xfffffffe,(byte)(in_fpscr >> 0x16) & 3);
  fVar9 = *(float *)(param_1 + 200);
  iVar1 = *(int *)(param_1 + 0x94);
  uVar6 = *(undefined4 *)(param_1 + 0xc4);
  *(float *)(iVar1 + 0x3c) = fVar10;
  fVar7 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
  fVar7 = fVar11 * fVar7 + 10.0;
  *(float *)(iVar1 + 0x40) = fVar7;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  iVar1 = *(int *)(param_1 + 0x94);
  *(float *)(iVar1 + 0x1c) = *(float *)(param_1 + 0xcc) + (fVar9 - fVar10) * 0.5;
  *(float *)(iVar1 + 0x20) = (fVar3 - fVar5 * 0.5) + fVar7 * 0.5;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  iVar1 = *(int *)(param_1 + 0x98);
  *(float *)(iVar1 + 0x1c) =
       *(float *)(iVar1 + 0x1c) +
       (((*(float *)(*(int *)(param_1 + 0x94) + 0x1c) -
         *(float *)(*(int *)(param_1 + 0x94) + 0x3c) * 0.5) + (fVar8 - (fVar2 - fVar4 * 0.5))) -
       *(float *)(*(int *)(param_1 + 0xb0) + 0x1c));
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  return;
}


