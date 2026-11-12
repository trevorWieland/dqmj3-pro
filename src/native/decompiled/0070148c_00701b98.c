#include "0070148c_00701b98.h"



void fn_00701b98(void)

{
  undefined4 uVar1;
  
  DAT_0089188c = 0x42300000;
  DAT_00891890 = 0x42300000;
  DAT_008c8e00 = 0xc1200000;
  DAT_008c8e04 = 0x41200000;
  DAT_008c8e08 = 0;
  DAT_008c8e0c = 0xc1b00000;
  DAT_008c8e10 = 0x41b00000;
  DAT_008c8e14 = 0;
  uVar1 = 0x42700000;
  fn_0017fe34();
  DAT_00891888 = uVar1;
  return;
}



void fn_00701b34(void)

{
  DAT_00890ac0 = 0x42300000;
  DAT_00890ac4 = 0x42300000;
  DAT_008c8014 = 0xc1200000;
  DAT_008c8018 = 0x41200000;
  DAT_008c801c = 0;
  DAT_008c8028 = 0;
  DAT_008c8020 = 0xc1b00000;
  DAT_008c8024 = 0x41b00000;
  return;
}



void fn_00701ad0(void)

{
  DAT_008924a0 = 0x42300000;
  DAT_008924a4 = 0x42300000;
  DAT_008c961c = 0xc1200000;
  DAT_008c9620 = 0x41200000;
  DAT_008c9624 = 0;
  DAT_008c9630 = 0;
  DAT_008c9628 = 0xc1b00000;
  DAT_008c962c = 0x41b00000;
  return;
}



void fn_00701aa8(void)

{
  undefined4 uVar1;
  
  uVar1 = fn_00103d64(&DAT_00892484);
  fn_00303b10(uVar1,&LAB_00104074_1,0x100000);
  return;
}



void fn_00701a44(void)

{
  DAT_008909b0 = 0x42300000;
  DAT_008909b4 = 0x42300000;
  DAT_008c7f28 = 0xc1200000;
  DAT_008c7f2c = 0x41200000;
  DAT_008c7f30 = 0;
  DAT_008c7f3c = 0;
  DAT_008c7f34 = 0xc1b00000;
  DAT_008c7f38 = 0x41b00000;
  return;
}



void fn_007019e0(void)

{
  DAT_00890230 = 0x42300000;
  DAT_00890234 = 0x42300000;
  DAT_008c783c = 0xc1200000;
  DAT_008c7840 = 0x41200000;
  DAT_008c7844 = 0;
  DAT_008c7850 = 0;
  DAT_008c7848 = 0xc1b00000;
  DAT_008c784c = 0x41b00000;
  return;
}



void fn_0070199c(void)

{
  DAT_008c780c = 0xc1a00000;
  DAT_008c7810 = 0x42200000;
  DAT_008c7814 = 0xc3480000;
  DAT_008c7818 = 0;
  DAT_008c781c = 0x41f00000;
  DAT_008c7820 = 0;
  return;
}



void fn_0070197c(void)

{
  DAT_008f7524 = &DAT_008f7524;
  DAT_008f7520 = 0;
  DAT_008f7528 = &DAT_008f7524;
  return;
}



void fn_007018b0(void)

{
  DAT_0089a930 = &DAT_0089a924;
  return;
}



void fn_00701898(void)

{
  DAT_0089a92c = &DAT_0089a924;
  return;
}



void fn_0070183c(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  DAT_008f32b0 = 0;
  DAT_008f32b4 = 0;
  DAT_008f32b8 = 0;
  DAT_008f32bc = 0;
  DAT_008f32c0 = 0;
  DAT_008f32c4 = 0;
  DAT_008f32c8 = 0;
  DAT_008f3310 = 0xa5;
  uVar2 = 0;
  do {
    iVar3 = 4;
    uVar1 = uVar2;
    do {
      if ((uVar1 & 0x80) == 0) {
        uVar1 = uVar1 << 1;
      }
      else {
        uVar1 = uVar1 << 1 ^ 7;
      }
      if ((uVar1 & 0x80) == 0) {
        uVar1 = uVar1 << 1;
      }
      else {
        uVar1 = uVar1 << 1 ^ 7;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    (&DAT_008f3315)[uVar2] = (char)uVar1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x100);
  return;
}



void fn_0070180c(void)

{
  fn_00101a1c(0x8f772c,&UNK_0044e79c,0x10,8);
  return;
}



void fn_00701794(void)

{
  DAT_008e3304 = 0;
  fn_0013c500(&DAT_008e3304);
  DAT_008e32ec = 0;
  DAT_008e32f4 = 0xffffffff;
  DAT_008e32f0 = 0;
  DAT_008e32f8 = 0;
  DAT_008e3300 = 0xffffffff;
  DAT_008e32fc = 0;
  fn_00303b10(&DAT_008e32f8,&DAT_0044f5d4,0x100000);
  return;
}



void fn_00701768(void)

{
  DAT_008c0640 = 0xffffffff;
  DAT_008c0644 = 0xffffffff;
  DAT_008c0648 = 0;
  DAT_008c064c = 0;
  return;
}



void fn_007016e4(void)

{
  DAT_008bfb78 = 0x8202;
  DAT_008bfb7c = 0x40030;
  DAT_008bfb80 = 0x8f02;
  DAT_008bfb84 = 0x40030;
  DAT_008bfb88 = 0x9802;
  DAT_008bfb8c = 0x40030;
  DAT_008bfb90 = 0xa102;
  DAT_008bfb94 = 0x40030;
  DAT_008bfb98 = 0xa902;
  DAT_008bfb9c = 0x40030;
  DAT_008bfba0 = 0xb102;
  DAT_008bfba4 = 0x40030;
  return;
}



void fn_007016ac(void)

{
  DAT_008e3230 = 0;
  fn_0013c500(&DAT_008e3230);
  fn_00303b10(&DAT_008e3230,&DAT_0044f5d4,0x100000);
  return;
}



void fn_0070148c(void)

{
  DAT_008cfe48 = 0x3f800000;
  DAT_008cfe4c = 0;
  DAT_008cfe50 = 0;
  DAT_008cfe54 = 0;
  DAT_008cfe58 = 0;
  DAT_008cfe5c = 0x3f800000;
  DAT_008cfe60 = 0;
  DAT_008cfe64 = 0;
  DAT_008cfe68 = 0;
  DAT_008cfe6c = 0;
  DAT_008cfe70 = 0x3f800000;
  DAT_008cfe74 = 0;
  DAT_008cfe78 = 0x3f800000;
  DAT_008cfe7c = 0x3f800000;
  DAT_008cfe80 = 0;
  DAT_008cfe84 = 0;
  DAT_008cfe88 = 0x3f800000;
  DAT_008cfe8c = 0;
  DAT_008cfe90 = 0;
  DAT_008cfe94 = 0;
  DAT_008cfe98 = 0;
  DAT_008cfe9c = 0;
  DAT_008cfea0 = 0;
  DAT_008cfea4 = 0;
  DAT_008cfea8 = 0;
  DAT_008cfeac = 0;
  DAT_008cfeb0 = 0;
  DAT_008cfeb4 = 0;
  DAT_008987dc = 0;
  DAT_008987dd = 2;
  DAT_008987de = 0xff;
  DAT_008987df = 0xff;
  DAT_008987e0 = 0;
  DAT_008987e4 = 0;
  DAT_008987e5 = 2;
  DAT_008987e6 = 0xff;
  DAT_008987e7 = 0xff;
  DAT_008987e8 = 0;
  DAT_008987ec = 0;
  DAT_008987ed = 2;
  DAT_008987ee = 0xff;
  DAT_008987ef = 0xff;
  DAT_008987f0 = 0;
  DAT_008987f4 = 0;
  DAT_008987f5 = 2;
  DAT_008987f6 = 0xff;
  DAT_008987f7 = 0xff;
  DAT_008987f8 = 0;
  DAT_008987fc = 0;
  DAT_008987fd = 2;
  DAT_008987fe = 0xff;
  DAT_008987ff = 0xff;
  DAT_00898800 = 0;
  DAT_00898804 = 0;
  DAT_00898805 = 2;
  DAT_00898806 = 0xff;
  DAT_00898807 = 0xff;
  DAT_00898808 = 0;
  DAT_0089880c = 0;
  DAT_0089880d = 2;
  DAT_0089880e = 0xff;
  DAT_0089880f = 0xff;
  DAT_00898810 = 0;
  DAT_00898814 = 0;
  DAT_00898815 = 2;
  DAT_00898816 = 0xff;
  DAT_00898817 = 0xff;
  DAT_00898818 = 0;
  DAT_0089881c = 0;
  DAT_0089881d = 2;
  DAT_0089881e = 0xff;
  DAT_0089881f = 0xff;
  DAT_00898820 = 0;
  DAT_00898824 = 0;
  DAT_00898825 = 1;
  DAT_00898826 = 0xff;
  DAT_00898827 = 0xff;
  DAT_00898828 = 0;
  DAT_0089882c = 0;
  DAT_0089882d = 1;
  DAT_0089882e = 0xff;
  DAT_0089882f = 0xff;
  DAT_00898830 = 0;
  DAT_00898834 = 0;
  DAT_00898835 = 1;
  DAT_00898836 = 0xff;
  DAT_00898837 = 0xff;
  DAT_00898838 = 0;
  DAT_008987d4 = 0;
  DAT_008987d8 = 0;
  fn_00303b10(&DAT_008987d8,&DAT_00763c4c,0x100000);
  return;
}


