#include "0028c944_0028c944.h"



undefined4 * fn_0028c944(int *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 local_18 [4];
  undefined1 auStack_14 [4];
  
  uVar1 = (undefined1)param_2;
  switch(param_2) {
  case 0:
    puVar5 = (undefined4 *)fn_00145b00(0x10,&DAT_00812c8c);
    if (puVar5 != (undefined4 *)0x0) {
      iVar8 = *param_1;
      puVar5[1] = iVar8;
      *puVar5 = &DAT_00851a74;
      puVar5[2] = *(undefined4 *)(iVar8 + 4);
      *(undefined1 *)(puVar5 + 3) = uVar1;
      *(undefined1 *)((int)puVar5 + 0xd) = 1;
      *puVar5 = &DAT_00851ad8;
    }
    break;
  case 1:
    puVar2 = (undefined4 *)fn_00145b00(0x10,&DAT_00812c8c);
    puVar5 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      iVar8 = *param_1;
      puVar2[1] = iVar8;
      *puVar2 = &DAT_00851a74;
      puVar2[2] = *(undefined4 *)(iVar8 + 4);
      *(undefined1 *)(puVar2 + 3) = uVar1;
      *(undefined1 *)((int)puVar2 + 0xd) = 1;
      *puVar2 = &DAT_00851a88;
      return puVar2;
    }
    break;
  case 2:
    puVar2 = (undefined4 *)fn_00145b00(0x10,&DAT_00812c8c);
    puVar5 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      iVar8 = *param_1;
      puVar2[1] = iVar8;
      *puVar2 = &DAT_00851a74;
      puVar2[2] = *(undefined4 *)(iVar8 + 4);
      *(undefined1 *)(puVar2 + 3) = uVar1;
      *(undefined1 *)((int)puVar2 + 0xd) = 1;
      *puVar2 = &DAT_00851ab0;
      return puVar2;
    }
    break;
  case 3:
    puVar2 = (undefined4 *)fn_00145b00(0x18,&DAT_00812c8c);
    puVar5 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      iVar8 = *param_1;
      puVar2[1] = iVar8;
      *puVar2 = &DAT_00851a74;
      puVar2[2] = *(undefined4 *)(iVar8 + 4);
      *(undefined1 *)(puVar2 + 3) = uVar1;
      *(undefined1 *)((int)puVar2 + 0xd) = 1;
      *puVar2 = &DAT_00851a9c;
      *(undefined1 *)((int)puVar2 + 0xe) = 1;
      *(undefined2 *)(puVar2 + 4) = 0;
      puVar2[5] = 0;
      fn_00404484(*(undefined4 *)(puVar2[2] + 0x80));
      return puVar2;
    }
    break;
  case 4:
    puVar5 = (undefined4 *)fn_00145b00(0x18,&DAT_00812c8c);
    if (puVar5 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    iVar8 = *param_1;
    *puVar5 = &DAT_00851a74;
    puVar5[1] = iVar8;
    puVar5[2] = *(undefined4 *)(iVar8 + 4);
    *(undefined1 *)(puVar5 + 3) = uVar1;
    *(undefined1 *)((int)puVar5 + 0xd) = 1;
    *puVar5 = &DAT_00851b50;
    *(undefined1 *)((int)puVar5 + 0xe) = 0;
    *(undefined1 *)((int)puVar5 + 0xf) = 0;
    puVar5[4] = 0;
    *(undefined1 *)(puVar5 + 5) = 0;
    *(undefined1 *)((int)puVar5 + 0x15) = 0;
    puVar2 = (undefined4 *)(**(code **)(*(int *)puVar5[2] + 8))();
    if (puVar2 != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar6 == &DAT_00890360) goto LAB_0028dc78;
        puVar6 = (undefined4 *)*puVar6;
      } while (puVar6 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)0x0;
LAB_0028dc78:
    if (*(char *)((int)puVar2 + 0x3d) == '\0') {
      iVar8 = fn_006b5190(*(undefined4 *)(DAT_00897804 + 0x1c));
      *(bool *)((int)puVar5 + 0xf) = iVar8 != 0;
      fn_002425b4(*(undefined4 *)(DAT_00897804 + 0x1c),0);
      uVar1 = fn_006b63fc(*(undefined4 *)(DAT_00897804 + 8));
      *(undefined1 *)((int)puVar5 + 0xe) = uVar1;
    }
    if (*(char *)((int)puVar5 + 0xf) == '\0') {
      if (*(char *)((int)puVar5 + 0xe) == '\0') {
        return puVar5;
      }
    }
    else if (*(char *)((int)puVar5 + 0xe) == '\0') {
      uVar1 = 3;
      goto LAB_0028dce0;
    }
    uVar1 = 2;
LAB_0028dce0:
    *(undefined1 *)(puVar5 + 5) = uVar1;
    *(undefined1 *)((int)puVar5 + 0x15) = 1;
    return puVar5;
  case 5:
    puVar2 = (undefined4 *)fn_00145b00(0x10,&DAT_00812c8c);
    puVar5 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      iVar8 = *param_1;
      *puVar2 = &DAT_00851a74;
      puVar2[1] = iVar8;
      puVar2[2] = *(undefined4 *)(iVar8 + 4);
      *(undefined1 *)(puVar2 + 3) = uVar1;
      *(undefined1 *)((int)puVar2 + 0xd) = 1;
      *puVar2 = &DAT_00851ac4;
      uVar3 = fn_001603f8(auStack_14,0);
      uVar4 = fn_001603f8(local_18,0xff);
      fn_0068869c(DAT_0089780c,uVar4,uVar3,0x14);
      return puVar2;
    }
    break;
  case 6:
    puVar2 = (undefined4 *)fn_00145b00(0x10,&DAT_00812c8c);
    puVar5 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      iVar8 = *param_1;
      puVar2[1] = iVar8;
      *puVar2 = &DAT_00851a74;
      puVar2[2] = *(undefined4 *)(iVar8 + 4);
      *(undefined1 *)(puVar2 + 3) = uVar1;
      *(undefined1 *)((int)puVar2 + 0xd) = 1;
      *puVar2 = &DAT_00851b3c;
      fn_00338bc8(*(undefined4 *)(puVar2[1] + 0x10));
      return puVar2;
    }
    break;
  case 7:
    puVar2 = (undefined4 *)fn_00145b00(0x10,&DAT_00812c8c);
    puVar5 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      iVar8 = *param_1;
      puVar2[1] = iVar8;
      *puVar2 = &DAT_00851a74;
      puVar2[2] = *(undefined4 *)(iVar8 + 4);
      *(undefined1 *)(puVar2 + 3) = uVar1;
      *(undefined1 *)((int)puVar2 + 0xd) = 1;
      *puVar2 = &DAT_00851b64;
      *(undefined1 *)((int)puVar2 + 0xe) = 0;
      return puVar2;
    }
    break;
  case 8:
    puVar2 = (undefined4 *)fn_00145b00(0x18,&DAT_00812c8c);
    puVar5 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      iVar8 = *param_1;
      puVar2[1] = iVar8;
      *puVar2 = &DAT_00851a74;
      puVar2[2] = *(undefined4 *)(iVar8 + 4);
      *(undefined1 *)(puVar2 + 3) = uVar1;
      *(undefined1 *)((int)puVar2 + 0xd) = 1;
      *puVar2 = &DAT_00851b28;
      puVar2[4] = 0;
      *(undefined1 *)(puVar2 + 5) = 0;
      uVar3 = fn_001603f8(auStack_1c,0);
      uVar4 = fn_001603f8(auStack_20,0xff);
      fn_0068869c(DAT_00897808,uVar4,uVar3,0xf);
      uVar3 = fn_001603f8(auStack_20,0);
      uVar4 = fn_001603f8(auStack_1c,0xff);
      fn_0068869c(DAT_0089780c,uVar4,uVar3,0xf);
      puVar5 = (undefined4 *)fn_001f74f8(*(undefined4 *)(puVar2[1] + 4),0x59);
      if (puVar5 != (undefined4 *)0x0) {
        puVar6 = (undefined4 *)(**(code **)*puVar5)(puVar5);
        do {
          if (puVar6 == &DAT_00891c84) goto LAB_0028d748;
          puVar6 = (undefined4 *)*puVar6;
        } while (puVar6 != (undefined4 *)0x0);
      }
      puVar5 = (undefined4 *)0x0;
LAB_0028d748:
      puVar2[4] = puVar5;
      uVar3 = *(undefined4 *)(DAT_00897804 + 0xc);
      iVar8 = fn_006b83e4(uVar3);
      iVar9 = 0;
      if (0 < iVar8) {
        do {
          iVar7 = fn_00338f24(*(undefined4 *)(puVar2[1] + 0x10),iVar9);
          if (iVar7 != 0) {
            local_28 = 0;
            local_24 = 0;
            local_28 = fn_00144df4(uVar3,iVar9);
            fn_00567670(puVar2[4],&local_28);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar8);
      }
      *(undefined1 *)(puVar2[4] + 0x1e) = 1;
      fn_001f7414(*(undefined4 *)(puVar2[1] + 4),0xde,0);
      fn_001f748c(*(undefined4 *)(puVar2[1] + 4),0x59,0);
      *(undefined4 *)(puVar2[1] + 0x10) = 0;
      return puVar2;
    }
    break;
  case 9:
    puVar2 = (undefined4 *)fn_00145b00(0x10,&DAT_00812c8c);
    puVar5 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      iVar8 = *param_1;
      puVar2[1] = iVar8;
      *puVar2 = &DAT_00851a74;
      puVar2[2] = *(undefined4 *)(iVar8 + 4);
      *(undefined1 *)(puVar2 + 3) = uVar1;
      *(undefined1 *)((int)puVar2 + 0xd) = 1;
      *puVar2 = &DAT_00851b14;
      return puVar2;
    }
    break;
  default:
    return (undefined4 *)0x0;
  case 0xb:
    puVar2 = (undefined4 *)fn_00145b00(0x10,&DAT_00812c8c);
    puVar5 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      iVar8 = *param_1;
      puVar2[1] = iVar8;
      *puVar2 = &DAT_00851a74;
      puVar2[2] = *(undefined4 *)(iVar8 + 4);
      *(undefined1 *)(puVar2 + 3) = uVar1;
      *(undefined1 *)((int)puVar2 + 0xd) = 1;
      *puVar2 = &DAT_00851b00;
      return puVar2;
    }
    break;
  case 0xc:
    puVar2 = (undefined4 *)fn_00145b00(0x10,&DAT_00812c8c);
    puVar5 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      iVar8 = *param_1;
      puVar2[1] = iVar8;
      *puVar2 = &DAT_00851a74;
      puVar2[2] = *(undefined4 *)(iVar8 + 4);
      *(undefined1 *)(puVar2 + 3) = uVar1;
      *(undefined1 *)((int)puVar2 + 0xd) = 1;
      *puVar2 = &DAT_00851aec;
      local_18[0] = 0x20;
      uVar3 = fn_00182988(DAT_008977e4);
      iVar8 = fn_0026a558(uVar3,local_18);
      fn_0015b0dc(iVar8 + 0x1e);
      uVar3 = fn_00230e1c((char *)&DAT_0028d590);
      fn_00174858(DAT_008977e4);
      uVar4 = fn_0015c948();
      fn_0017faa8(uVar4,uVar3,1,0);
      return puVar2;
    }
  }
  return puVar5;
}


