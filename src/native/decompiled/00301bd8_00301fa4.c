#include "00301bd8_00301fa4.h"



longlong fn_00301fa4(uint param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  fn_00301e08(param_3);
  cVar1 = *param_2;
  param_2 = param_2 + 1;
  if (cVar1 == 'a') {
    uVar4 = 0x8002;
    uVar3 = 8;
  }
  else if (cVar1 == 'r') {
    uVar4 = 1;
    uVar3 = 0;
  }
  else {
    if (cVar1 != 'w') goto LAB_00302034;
    uVar4 = 2;
    uVar3 = 4;
  }
  while( true ) {
    while( true ) {
      if (*param_2 != '+') break;
      uVar4 = uVar4 | 3;
      uVar3 = uVar3 | 2;
      param_2 = param_2 + 1;
    }
    if (*param_2 != 'b') break;
    uVar4 = uVar4 | 4;
    uVar3 = uVar3 | 1;
    param_2 = param_2 + 1;
  }
  if (*param_2 == 't') {
    uVar3 = uVar3 | 0x10;
  }
  iVar2 = fn_00401038(param_1,uVar3);
  if (iVar2 != -1) {
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined4 *)(param_3 + 4) = 0;
    *(uint *)(param_3 + 0xc) = uVar4;
    *(undefined4 *)(param_3 + 0x1c) = 0x200;
    *(int *)(param_3 + 0x14) = iVar2;
    if ((int)(uVar3 << 0x1c) < 0) {
      fn_00301e54(param_3,0,2);
    }
    *(uint *)(param_3 + 0x50) = *(uint *)(param_3 + 0x50) | 1;
    return CONCAT44(param_1,param_3);
  }
LAB_00302034:
  return (ulonglong)param_1 << 0x20;
}



/* WARNING: Removing unreachable block (ram,0x00301f94) */
/* WARNING: Removing unreachable block (ram,0x00301f98) */
/* WARNING: Removing unreachable block (ram,0x00301f9c) */
/* WARNING: Removing unreachable block (ram,0x00301fa0) */

undefined4 * fn_00301f48(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = 0xe4;
  bVar3 = true;
  do {
    if (bVar3) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      bVar3 = 0x1f < uVar2;
      uVar2 = uVar2 - 0x20;
    }
  } while (bVar3);
  if ((bool)((byte)(uVar2 >> 4) & 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  if ((int)(uVar2 << 0x1c) < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  puVar1 = param_1;
  if ((bool)((byte)((uVar2 & 0xf) >> 2) & 1)) {
    puVar1 = param_1 + 1;
    *param_1 = 0;
  }
  return puVar1;
}



undefined4 fn_00301e54(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = param_1[5];
  if (((*(byte *)(param_1 + 3) & 3) == 0) || (iVar1 = fn_0030235c(iVar7), iVar1 != 0)) {
    return 2;
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      iVar7 = fn_00302364(param_1);
      param_2 = iVar7 + param_2;
    }
    else {
      if (param_3 != 2) {
        return 2;
      }
      iVar7 = fn_003023a8(iVar7);
      uVar2 = param_1[3];
      param_1[3] = uVar2 | 0x10;
      if (iVar7 < 0) {
        fn_00302644(param_1);
        return 1;
      }
      if ((int)((uVar2 | 0x10) << 0xf) < 0) {
        uVar2 = param_1[0xb];
        if ((uint)param_1[0xb] <= (uint)param_1[1]) {
          uVar2 = param_1[1];
        }
        iVar1 = (uVar2 + param_1[6]) - param_1[4];
        if (iVar7 < iVar1) {
          iVar7 = iVar1;
        }
      }
      param_2 = param_2 + iVar7;
    }
  }
  if (param_2 < 0) {
    return 2;
  }
  uVar2 = param_1[1];
  uVar4 = param_1[3];
  if (((uint)param_1[0xb] < uVar2) && (param_1[0xb] = uVar2, (int)(uVar4 << 0xe) < 0)) {
    uVar4 = uVar4 & 0xfffdffff | 0x10;
  }
  iVar7 = param_1[6];
  if (iVar7 <= param_2) {
    uVar3 = param_1[0xb];
    if (uVar2 < uVar3) {
      uVar5 = uVar3;
    }
    else {
      uVar5 = uVar2;
    }
    uVar6 = param_1[4];
    if (param_2 < (int)((uVar5 + iVar7) - uVar6)) {
      if (uVar2 < uVar3) {
        uVar5 = uVar3;
      }
      else {
        uVar5 = uVar2;
      }
      if (uVar5 != uVar6) {
        param_2 = param_2 - iVar7;
        param_1[2] = param_2 - param_1[7];
        if (uVar2 < uVar3) {
          uVar2 = uVar3;
        }
        *param_1 = param_2 - (uVar2 - uVar6);
        param_1[1] = uVar6 + param_2;
        uVar4 = uVar4 & 0xffffffdf;
        goto LAB_00301f36;
      }
    }
  }
  uVar4 = uVar4 | 0x20;
  param_1[2] = 0;
  param_1[10] = param_2;
  *param_1 = 0;
LAB_00301f36:
  param_1[3] = uVar4 & 0xffd7cfbf;
  *(undefined1 *)(param_1 + 0x12) = 0;
  return 0;
}



undefined8 fn_00301e08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0xc);
  if ((uVar3 & 3) != 0) {
    fn_003026a4(param_1);
    iVar2 = fn_00400f54(uVar4);
    if (-1 < iVar2) {
      if ((int)(uVar3 << 0x14) < 0) {
        fn_0030233c(uVar1);
      }
      fn_00301f50(param_1,0x4c);
      *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xfffffffe;
      return 0;
    }
  }
  return 0xffffffff;
}



void fn_00301d60(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined4 uStack_10;
  int local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_38 = &uStack_8;
  *(undefined4 *)(param_2 + 0xc) = 0;
  local_1c = &LAB_00102a2c_1;
  local_20 = &LAB_00102a0c_1;
  local_34 = 4;
  local_30 = 0x7fffffff;
  local_18 = &LAB_00102a50_1;
  uStack_10 = param_1;
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  fn_0030079c(0,param_2,param_1,&local_38);
  return;
}



undefined8 fn_00301bd8(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  uint *local_20;
  uint *local_18;
  
  uVar1 = 0;
  local_18 = param_2;
  do {
    param_1[8] = uVar1;
LAB_00301be2:
    uVar1 = (*(code *)param_1[3])(param_1);
    if (uVar1 == 0) goto LAB_00301d56;
    if (uVar1 != 0x25) {
      pcVar5 = (code *)param_1[1];
      uVar4 = param_1[2];
      goto LAB_00301d4e;
    }
    uVar4 = 0;
    while (((uVar1 = (*(code *)param_1[3])(param_1), 0x1f < (int)uVar1 && (uVar1 < 0x31)) &&
           ((byte)"0123456789ABCDEF@0X"[uVar1 + 8] != 0))) {
      uVar4 = uVar4 | (byte)"0123456789ABCDEF@0X"[uVar1 + 8];
    }
    if ((int)(uVar4 << 0x1e) < 0) {
      uVar4 = uVar4 & 0xfffffffb;
    }
    param_1[7] = 0;
    iVar6 = 0;
    param_1[6] = 0;
    do {
      if (uVar1 == 0x2a) {
        uVar1 = *local_18;
        local_18 = local_18 + 1;
        param_1[iVar6 + 6] = uVar1;
        uVar1 = (*(code *)param_1[3])(param_1);
        if (iVar6 == 1) {
          if ((int)param_1[7] < 0) {
            uVar4 = uVar4 & 0xffffffdf;
          }
          break;
        }
      }
      else {
        iVar2 = fn_00300388(uVar1);
        if (iVar2 != 0) {
          local_20 = param_1 + iVar6;
          local_20[6] = uVar1 - 0x30;
          while( true ) {
            uVar1 = (*(code *)param_1[3])(param_1);
            iVar2 = fn_00300388();
            if (iVar2 == 0) break;
            local_20[6] = (local_20[6] * 10 + uVar1) - 0x30;
          }
        }
        if (iVar6 == 1) break;
      }
      if (uVar1 != 0x2e) break;
      uVar1 = (*(code *)param_1[3])(param_1);
      uVar4 = uVar4 | 0x20;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    if ((int)param_1[6] < 0) {
      param_1[6] = -param_1[6];
      uVar4 = uVar4 | 1;
    }
    if ((uVar4 & 1) != 0) {
      uVar4 = uVar4 & 0xffffffef;
    }
    if ((uVar1 == 0x6c) || (uVar1 == 0x68)) {
      uVar3 = (*(code *)param_1[3])(param_1);
      if (uVar3 == uVar1) {
        if (uVar1 == 0x6c) goto LAB_00301d3a;
        uVar1 = 0x400;
        goto LAB_00301cea;
      }
      if (uVar1 == 0x6c) {
        uVar1 = 0x40;
      }
      else {
        uVar1 = 0x100;
      }
      uVar4 = uVar4 | uVar1;
      uVar1 = uVar3;
    }
    else {
      if (uVar1 != 0x4c) {
        if (uVar1 == 0x6a) {
LAB_00301d3a:
          uVar1 = 0x80;
          goto LAB_00301cea;
        }
        if ((uVar1 != 0x74) && (uVar1 != 0x7a)) goto LAB_00301d00;
      }
      uVar1 = 0;
LAB_00301cea:
      uVar4 = uVar4 | uVar1;
      uVar1 = (*(code *)param_1[3])(param_1);
    }
LAB_00301d00:
    if (uVar1 == 0) {
LAB_00301d56:
      return CONCAT44(local_20,param_1[8]);
    }
    if (uVar1 - 0x41 < 0x1a) {
      uVar4 = uVar4 | 0x800;
      uVar1 = uVar1 + 0x20;
    }
    *param_1 = uVar4;
    iVar6 = fn_00104b08(param_1,uVar1);
    if (iVar6 != 0) {
      if (iVar6 == 1) {
        local_18 = local_18 + 1;
      }
      else {
        local_18 = (uint *)(((int)local_18 + 7U & 0xfffffff8) + 8);
      }
      goto LAB_00301be2;
    }
    pcVar5 = (code *)param_1[1];
    uVar4 = param_1[2];
LAB_00301d4e:
    (*pcVar5)(uVar1,uVar4);
    uVar1 = param_1[8] + 1;
  } while( true );
}


