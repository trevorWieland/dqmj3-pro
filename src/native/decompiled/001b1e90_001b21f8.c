#include "001b1e90_001b21f8.h"



void fn_001b21f8(undefined4 param_1,undefined4 param_2)

{
  fn_0052676c(param_1,param_2,0x60,0xc,10);
  return;
}



void fn_001b21dc(undefined4 param_1,undefined4 param_2)

{
  fn_00526720(param_1,param_2,0x60,0xc,10);
  return;
}



char fn_001b1e90(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  
  iVar3 = *(int *)(param_1 + 4);
  bVar9 = SBORROW4(iVar3,0xb);
  iVar4 = iVar3 + -0xb;
  bVar8 = iVar3 == 0xb;
  if (iVar3 < 0xc) {
    iVar3 = *(int *)(param_1 + 8);
    bVar9 = SBORROW4(iVar3,5);
    iVar4 = iVar3 + -5;
    bVar8 = iVar3 == 5;
  }
  if (bVar8 || iVar4 < 0 != bVar9) {
    iVar4 = *(int *)(param_1 + 0xc);
    if (iVar4 < 0xc) {
      iVar4 = *(int *)(param_1 + 0x10);
    }
    if (iVar4 < 0xc) {
      iVar3 = *(int *)(param_1 + 0x14);
      bVar9 = SBORROW4(iVar3,0x83);
      iVar4 = iVar3 + -0x83;
      bVar8 = iVar3 == 0x83;
      if (iVar3 < 0x84) {
        iVar3 = *(int *)(param_1 + 0x18);
        bVar9 = SBORROW4(iVar3,7);
        iVar4 = iVar3 + -7;
        bVar8 = iVar3 == 7;
      }
      if (bVar8 || iVar4 < 0 != bVar9) {
        iVar3 = *(int *)(param_1 + 0x1c);
        bVar9 = SBORROW4(iVar3,1);
        iVar4 = iVar3 + -1;
        bVar8 = iVar3 == 1;
        if (iVar3 < 2) {
          iVar3 = *(int *)(param_1 + 0x20);
          bVar9 = SBORROW4(iVar3,0x3b);
          iVar4 = iVar3 + -0x3b;
          bVar8 = iVar3 == 0x3b;
        }
        if (bVar8 || iVar4 < 0 != bVar9) {
          iVar3 = *(int *)(param_1 + 0x24);
          bVar9 = SBORROW4(iVar3,5);
          iVar4 = iVar3 + -5;
          bVar8 = iVar3 == 5;
          if (iVar3 < 6) {
            iVar3 = *(int *)(param_1 + 0x28);
            bVar9 = SBORROW4(iVar3,7);
            iVar4 = iVar3 + -7;
            bVar8 = iVar3 == 7;
          }
          if (bVar8 || iVar4 < 0 != bVar9) {
            iVar3 = *(int *)(param_1 + 0x2c);
            bVar9 = SBORROW4(iVar3,6);
            iVar4 = iVar3 + -6;
            bVar8 = iVar3 == 6;
            if (iVar3 < 7) {
              iVar3 = *(int *)(param_1 + 0x30);
              bVar9 = SBORROW4(iVar3,7);
              iVar4 = iVar3 + -7;
              bVar8 = iVar3 == 7;
            }
            if ((((bVar8 || iVar4 < 0 != bVar9) && (-1 < *(int *)(param_1 + 0x34))) &&
                (*(int *)(param_1 + 0x34) < 0xd)) &&
               ((-1 < *(int *)(param_1 + 0x38) && (*(int *)(param_1 + 0x38) < 0x13)))) {
              iVar3 = *(int *)(param_1 + 0x3c);
              bVar9 = SBORROW4(iVar3,0x17);
              iVar4 = iVar3 + -0x17;
              bVar8 = iVar3 == 0x17;
              if (iVar3 < 0x18) {
                iVar3 = *(int *)(param_1 + 0x40);
                bVar9 = SBORROW4(iVar3,7);
                iVar4 = iVar3 + -7;
                bVar8 = iVar3 == 7;
              }
              if (bVar8 || iVar4 < 0 != bVar9) {
                iVar3 = *(int *)(param_1 + 0x44);
                bVar9 = SBORROW4(iVar3,8);
                iVar4 = iVar3 + -8;
                bVar8 = iVar3 == 8;
                if (iVar3 < 9) {
                  iVar3 = *(int *)(param_1 + 0x48);
                  bVar9 = SBORROW4(iVar3,6);
                  iVar4 = iVar3 + -6;
                  bVar8 = iVar3 == 6;
                }
                bVar7 = iVar4 < 0;
                if (bVar8 || bVar7 != bVar9) {
                  iVar4 = *(int *)(param_1 + 0x4c);
                  bVar9 = SBORROW4(iVar4,0xb);
                  bVar7 = iVar4 + -0xb < 0;
                  bVar8 = iVar4 == 0xb;
                }
                if (((bVar8 || bVar7 != bVar9) && (-1 < *(int *)(param_1 + 0x50))) &&
                   ((*(int *)(param_1 + 0x50) < 0xd && (iVar4 = *(int *)(param_1 + 0x54), 2 < iVar4)
                    ))) {
                  bVar9 = SBORROW4(iVar4,0x12);
                  iVar3 = iVar4 + -0x12;
                  bVar8 = iVar4 == 0x12;
                  if (iVar4 < 0x13) {
                    iVar4 = *(int *)(param_1 + 0x58);
                    bVar9 = SBORROW4(iVar4,0x11);
                    iVar3 = iVar4 + -0x11;
                    bVar8 = iVar4 == 0x11;
                  }
                  if (bVar8 || iVar3 < 0 != bVar9) {
                    iVar3 = *(int *)(param_1 + 0x5c);
                    bVar9 = SBORROW4(iVar3,8);
                    iVar4 = iVar3 + -8;
                    bVar8 = iVar3 == 8;
                    if (iVar3 < 9) {
                      iVar3 = *(int *)(param_1 + 0x60);
                      bVar9 = SBORROW4(iVar3,0x12);
                      iVar4 = iVar3 + -0x12;
                      bVar8 = iVar3 == 0x12;
                    }
                    if (bVar8 || iVar4 < 0 != bVar9) {
                      iVar3 = *(int *)(param_1 + 100);
                      bVar9 = SBORROW4(iVar3,0x23);
                      iVar4 = iVar3 + -0x23;
                      bVar8 = iVar3 == 0x23;
                      if (iVar3 < 0x24) {
                        iVar3 = *(int *)(param_1 + 0x68);
                        bVar9 = SBORROW4(iVar3,4);
                        iVar4 = iVar3 + -4;
                        bVar8 = iVar3 == 4;
                      }
                      if (bVar8 || iVar4 < 0 != bVar9) {
                        iVar3 = *(int *)(param_1 + 0x6c);
                        bVar9 = SBORROW4(iVar3,8);
                        iVar4 = iVar3 + -8;
                        bVar8 = iVar3 == 8;
                        if (iVar3 < 9) {
                          iVar3 = *(int *)(param_1 + 0x70);
                          bVar9 = SBORROW4(iVar3,6);
                          iVar4 = iVar3 + -6;
                          bVar8 = iVar3 == 6;
                        }
                        if (bVar8 || iVar4 < 0 != bVar9) {
                          iVar3 = *(int *)(param_1 + 0x74);
                          bVar9 = SBORROW4(iVar3,0x12);
                          iVar4 = iVar3 + -0x12;
                          bVar8 = iVar3 == 0x12;
                          if (iVar3 < 0x13) {
                            iVar3 = *(int *)(param_1 + 0x78);
                            bVar9 = SBORROW4(iVar3,5);
                            iVar4 = iVar3 + -5;
                            bVar8 = iVar3 == 5;
                          }
                          if (bVar8 || iVar4 < 0 != bVar9) {
                            iVar3 = *(int *)(param_1 + 0x7c);
                            bVar9 = SBORROW4(iVar3,5);
                            iVar4 = iVar3 + -5;
                            bVar8 = iVar3 == 5;
                            if (iVar3 < 6) {
                              iVar3 = *(int *)(param_1 + 0x80);
                              bVar9 = SBORROW4(iVar3,7);
                              iVar4 = iVar3 + -7;
                              bVar8 = iVar3 == 7;
                            }
                            if (bVar8 || iVar4 < 0 != bVar9) {
                              iVar3 = *(int *)(param_1 + 0x84);
                              bVar9 = SBORROW4(iVar3,8);
                              iVar4 = iVar3 + -8;
                              bVar8 = iVar3 == 8;
                              if (iVar3 < 9) {
                                iVar3 = *(int *)(param_1 + 0x88);
                                bVar9 = SBORROW4(iVar3,0x10);
                                iVar4 = iVar3 + -0x10;
                                bVar8 = iVar3 == 0x10;
                              }
                              if (bVar8 || iVar4 < 0 != bVar9) {
                                iVar3 = *(int *)(param_1 + 0x8c);
                                bVar9 = SBORROW4(iVar3,8);
                                iVar4 = iVar3 + -8;
                                bVar8 = iVar3 == 8;
                                if (iVar3 < 9) {
                                  iVar3 = *(int *)(param_1 + 0x90);
                                  bVar9 = SBORROW4(iVar3,5);
                                  iVar4 = iVar3 + -5;
                                  bVar8 = iVar3 == 5;
                                }
                                if (bVar8 || iVar4 < 0 != bVar9) {
                                  iVar3 = *(int *)(param_1 + 0x94);
                                  bVar9 = SBORROW4(iVar3,7);
                                  iVar4 = iVar3 + -7;
                                  bVar8 = iVar3 == 7;
                                  if (iVar3 < 8) {
                                    iVar3 = *(int *)(param_1 + 0x98);
                                    bVar9 = SBORROW4(iVar3,0x14);
                                    iVar4 = iVar3 + -0x14;
                                    bVar8 = iVar3 == 0x14;
                                  }
                                  if (bVar8 || iVar4 < 0 != bVar9) {
                                    iVar3 = *(int *)(param_1 + 0x9c);
                                    bVar9 = SBORROW4(iVar3,1);
                                    iVar4 = iVar3 + -1;
                                    bVar8 = iVar3 == 1;
                                    if (iVar3 < 2) {
                                      iVar3 = *(int *)(param_1 + 0xa0);
                                      bVar9 = SBORROW4(iVar3,8);
                                      iVar4 = iVar3 + -8;
                                      bVar8 = iVar3 == 8;
                                    }
                                    if (bVar8 || iVar4 < 0 != bVar9) {
                                      iVar3 = *(int *)(param_1 + 0xa4);
                                      bVar9 = SBORROW4(iVar3,0x10);
                                      iVar4 = iVar3 + -0x10;
                                      bVar8 = iVar3 == 0x10;
                                      if (iVar3 < 0x11) {
                                        iVar3 = *(int *)(param_1 + 0xa8);
                                        bVar9 = SBORROW4(iVar3,0x1e);
                                        iVar4 = iVar3 + -0x1e;
                                        bVar8 = iVar3 == 0x1e;
                                      }
                                      if (bVar8 || iVar4 < 0 != bVar9) {
                                        if (param_2 != 0) {
                                          if (*(short *)(param_1 + 0xb4) == 0) {
                                            return '\0';
                                          }
                                          iVar4 = 0;
                                          do {
                                            sVar2 = *(short *)(param_1 + 0xb4 + iVar4 * 2);
                                            if (sVar2 == 0) break;
                                            if (sVar2 == 0x25 || sVar2 == 0x5c) {
                                              return '\0';
                                            }
                                            iVar4 = iVar4 + 1;
                                          } while (iVar4 < 10);
                                          iVar4 = 0;
                                          do {
                                            sVar2 = *(short *)(param_1 + 0xca + iVar4 * 2);
                                            if (sVar2 == 0) break;
                                            if (sVar2 == 0x25 || sVar2 == 0x5c) {
                                              return '\0';
                                            }
                                            iVar4 = iVar4 + 1;
                                          } while (iVar4 < 10);
                                        }
                                        iVar4 = *(int *)(param_1 + 0xac);
                                        if (iVar4 < 0x81) {
                                          iVar4 = *(int *)(param_1 + 0xb0);
                                        }
                                        iVar3 = iVar4 + -0x80;
                                        bVar9 = SBORROW4(iVar4,0x80);
                                        bVar8 = iVar4 == 0x80;
                                        if (iVar4 < 0x81) {
                                          iVar4 = *(int *)(param_1 + 0xe0);
                                          bVar9 = SBORROW4(iVar4,1);
                                          iVar3 = iVar4 + -1;
                                          bVar8 = iVar4 == 1;
                                        }
                                        if (bVar8 || iVar3 < 0 != bVar9) {
                                          iVar4 = *(int *)(param_1 + 0xe4);
                                          iVar3 = *(int *)(param_1 + 0xe8);
                                          if ((iVar4 == 0 && iVar3 == 0) ||
                                             (((iVar4 != 0 && iVar3 != 0 && (iVar4 - 1U < 0xc)) &&
                                              (iVar4 = fn_001ba950(), iVar3 <= iVar4)))) {
                                            iVar3 = *(int *)(param_1 + 0xec);
                                            bVar9 = SBORROW4(iVar3,0xb);
                                            iVar4 = iVar3 + -0xb;
                                            bVar8 = iVar3 == 0xb;
                                            if (iVar3 < 0xc) {
                                              iVar3 = *(int *)(param_1 + 0xf4);
                                              bVar9 = SBORROW4(iVar3,3);
                                              iVar4 = iVar3 + -3;
                                              bVar8 = iVar3 == 3;
                                            }
                                            if (bVar8 || iVar4 < 0 != bVar9) {
                                              iVar3 = *(int *)(param_1 + 0xf8);
                                              bVar9 = SBORROW4(iVar3,3);
                                              iVar4 = iVar3 + -3;
                                              bVar8 = iVar3 == 3;
                                              if (iVar3 < 4) {
                                                iVar3 = *(int *)(param_1 + 0xfc);
                                                bVar9 = SBORROW4(iVar3,9);
                                                iVar4 = iVar3 + -9;
                                                bVar8 = iVar3 == 9;
                                              }
                                              bVar7 = iVar4 < 0;
                                              if (bVar8 || bVar7 != bVar9) {
                                                iVar4 = *(int *)(param_1 + 0x100);
                                                bVar9 = SBORROW4(iVar4,9);
                                                bVar7 = iVar4 + -9 < 0;
                                                bVar8 = iVar4 == 9;
                                              }
                                              if ((bVar8 || bVar7 != bVar9) &&
                                                 (*(int *)(param_1 + 0x104) - 1U < 3)) {
                                                pbVar6 = (byte *)(param_1 + 0x108);
                                                if ((pbVar6 != (byte *)0x0) &&
                                                   (*(short *)pbVar6 == 0)) {
                                                  sVar2 = *(short *)(param_1 + 0x10a);
                                                  bVar8 = sVar2 == 0;
                                                  if (bVar8) {
                                                    sVar2 = *(short *)(param_1 + 0x10c);
                                                  }
                                                  if (bVar8 && sVar2 == 0) {
                                                    bVar8 = *(short *)(param_1 + 0x10e) == 0;
                                                    pbVar5 = pbVar6;
                                                    if (bVar8) {
                                                      pbVar5 = (byte *)(uint)*(ushort *)
                                                                              (param_1 + 0x110);
                                                    }
                                                    if (bVar8 && pbVar5 == (byte *)0x0) {
                                                      return '\x01';
                                                    }
                                                  }
                                                }
                                                if ((*pbVar6 & 0x20) != 0) {
                                                  return '\x01';
                                                }
                                                cVar1 = -((char)*pbVar6 >> 7);
                                                bVar8 = cVar1 == '\0';
                                                if (bVar8) {
                                                  cVar1 = *(char *)(param_1 + 0xf3);
                                                }
                                                if (bVar8 && cVar1 == '\0') {
                                                  return cVar1;
                                                }
                                                return '\x01';
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return '\0';
}


