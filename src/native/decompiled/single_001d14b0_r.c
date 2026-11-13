#include "single_001d14b0_r.h"


extern undefined4 stack0xffffffd1;
extern undefined4 _local_30;

void fn_001d14b0(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  uint uVar13;
  bool bVar14;
  undefined8 uVar15;
  short local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  char local_5a;
  undefined1 local_59;
  undefined2 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined1 local_4f;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined1 local_49;
  undefined2 local_48;
  undefined2 local_46;
  undefined1 local_44;
  undefined1 local_43;
  undefined2 local_42;
  undefined2 local_40;
  char local_3c [4];
  int *local_38;
  int local_34;
  char local_30 [4];
  int local_2c;
  int local_28;
  
  iVar3 = fn_00174828(DAT_008977e4);
  local_28 = param_1 + 0x2300;
  uVar13 = 0;
  do {
    iVar11 = param_1 + uVar13 * 0x24;
    psVar12 = (short *)(iVar11 + 0x38);
    if (*psVar12 != 0) {
      cVar1 = (char)uVar13 + '\x14';
      _local_30 = CONCAT71(stack0xffffffd1,cVar1);
      iVar4 = iVar3 + cVar1 * 0x418;
      iVar10 = iVar4 + -0x4080;
      fn_001d068c(param_1,psVar12,iVar10);
      uVar5 = (uint)*(short *)(iVar11 + 0x3c);
      if (((int)uVar5 < 0) || (0x12 < uVar5)) {
        uVar5 = 0;
      }
      iVar7 = uVar5 * 3;
      cVar1 = (&DAT_007ba7d8)[iVar7];
      if (cVar1 != '\0') {
        if (cVar1 == '\x01') {
          local_38 = &local_34;
          local_34 = 1;
          iVar8 = fn_0068f8dc((&DAT_007ba7d9)[iVar7]);
          _local_30 = CONCAT44(iVar8,local_30);
          piVar9 = &local_2c;
          if (local_34 <= iVar8) {
            piVar9 = local_38;
          }
          local_38 = (int *)0x0;
          fn_00180350(iVar4 + -0x4025,(&DAT_007ba7d9)[iVar7],(int)(char)(&DAT_007ba7da)[iVar7],
                       (int)(char)*piVar9);
        }
        else if (cVar1 == '\x02') {
          local_38 = (int *)0x0;
          fn_00180350(iVar4 + -0x4025,2,(int)(char)(&DAT_007ba7da)[iVar7],1);
          local_38 = (int *)0x0;
          fn_00180350(iVar4 + -0x4025,3,(int)(char)(&DAT_007ba7da)[iVar7],1);
          local_38 = (int *)0x0;
          fn_00180350(iVar4 + -0x4025,4,(int)(char)(&DAT_007ba7da)[iVar7],1);
          local_38 = (int *)0x0;
          fn_00180350(iVar4 + -0x4025,5,(int)(char)(&DAT_007ba7da)[iVar7],1);
        }
        else if (cVar1 == '\x03') {
          fn_001743e8(iVar10);
        }
      }
      uVar6 = fn_00182988(DAT_008977e4);
      iVar7 = fn_0026a548(uVar6,local_30);
      if (*(char *)(iVar11 + 0x3e) == '\0') {
        uVar6 = fn_002ea244((int)*psVar12);
        *(undefined4 *)(iVar7 + 0x14) = uVar6;
        uVar6 = fn_002ea2b0((int)*psVar12);
        *(undefined4 *)(iVar7 + 0x18) = uVar6;
      }
      fn_0017821c(iVar7,iVar11 + 0x48,0x12);
      bVar2 = false;
      iVar7 = fn_00174828(DAT_008977e4);
      iVar8 = fn_00174870(param_1);
      iVar11 = iVar7 + 0x1160;
      bVar14 = iVar11 == iVar10;
      if (!bVar14) {
        iVar11 = iVar7 + 0x1578;
      }
      if (bVar14 || iVar11 == iVar10) {
LAB_001d16e4:
        bVar2 = true;
      }
      else {
        iVar11 = iVar7 + 0x1990;
        bVar14 = iVar11 != iVar10;
        if (bVar14) {
          iVar11 = iVar7 + 0x1da8;
        }
        if (!bVar14 || iVar11 == iVar10) goto LAB_001d16e4;
      }
      if (*(int *)(param_1 + 0x23f4) != 0 && *(int *)(iVar8 + 4) != 0) {
        uVar6 = fn_00182cc8();
        if (((*(char *)(local_28 + 0xf1) == '\0') && (bVar2)) &&
           (iVar11 = fn_006b3ec4(*(undefined4 *)(param_1 + 0x23f4),uVar6), iVar11 != 0)) {
          uVar5 = fn_006f3068(iVar10);
          if (uVar5 < 0x4c) {
            *(undefined2 *)(iVar10 + uVar5 * 2 + 0x284) = 0x209;
          }
          *(undefined1 *)(param_1 + 0x23f1) = 1;
        }
        fn_00654c74(iVar4 + -0x3dfc);
      }
    }
    uVar13 = uVar13 + 1;
    if (3 < uVar13) {
      fn_001d2900(param_1);
      fn_001d2ff8(param_1);
      fn_001d22ac(param_1);
      fn_001d42e4(param_1);
      local_28 = param_1;
      iVar3 = fn_00174828(DAT_008977e4);
      if (*(short *)(local_28 + 0x38) != 0x445) {
        if (*(short *)(local_28 + 0x38) == 0x446) {
          fn_001d1980(&local_60);
          local_60 = 0x447;
          local_5e = fn_002ea524();
          local_5a = '\0';
          fn_001d068c(local_28,&local_60,iVar3 + 0x3220);
          local_3c[0] = '\x1c';
          uVar6 = fn_00182988(DAT_008977e4);
          iVar3 = fn_0026a548(uVar6,local_3c);
          if (local_5a == '\0') {
            uVar6 = fn_002ea244((int)local_60);
            *(undefined4 *)(iVar3 + 0x14) = uVar6;
            uVar6 = fn_002ea2b0((int)local_60);
            *(undefined4 *)(iVar3 + 0x18) = uVar6;
          }
        }
        return;
      }
      uVar15 = 0x3f800000;
      uVar13 = 0;
      local_38 = (int *)0x4460447;
      do {
        local_5e = 0;
        local_5c = 0;
        local_54 = (undefined4)uVar15;
        cVar1 = (char)uVar13 + '\x1c';
        local_58 = 0xffff;
        local_5a = 0;
        local_59 = 3;
        local_50 = 0;
        local_4c = 0;
        local_44 = 0;
        local_4f = 0;
        local_4a = 0;
        local_48 = 0;
        local_43 = 0;
        local_4e = 0;
        local_49 = 0;
        local_46 = 0;
        local_42 = 0;
        local_40 = 0;
        local_60 = *(short *)(local_3c + uVar13 * 2 + 4);
        local_5e = fn_002ea524();
        local_5a = '\0';
        fn_001d068c(local_28,&local_60,iVar3 + cVar1 * 0x418 + -0x4080);
        local_3c[0] = cVar1;
        uVar6 = fn_00182988(DAT_008977e4);
        iVar11 = fn_0026a548(uVar6,local_3c);
        if (local_5a == '\0') {
          uVar6 = fn_002ea244((int)local_60);
          *(undefined4 *)(iVar11 + 0x14) = uVar6;
          uVar6 = fn_002ea2b0((int)local_60);
          *(undefined4 *)(iVar11 + 0x18) = uVar6;
        }
        uVar13 = (uint)(char)((char)uVar13 + '\x01');
      } while (uVar13 < 2);
      return;
    }
  } while( true );
}


