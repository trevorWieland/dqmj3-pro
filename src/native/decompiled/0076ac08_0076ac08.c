#include "0076ac08_0076ac08.h"



void fn_0076ac08(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint in_r12;
  char *pcVar11;
  byte *pbVar12;
  bool bVar13;
  
  *param_1 = *(undefined4 *)(param_2 + 0x10);
  iVar4 = *(int *)(param_2 + 0x10);
  iVar7 = *(int *)(iVar4 + 8);
  bVar13 = *param_3 == iVar7;
  if (bVar13) {
    iVar7 = *param_4;
  }
  if ((bVar13 && iVar7 == iVar4) && (*(int *)(param_2 + 0x14) != 0)) {
    iVar7 = *(int *)(iVar4 + 4);
    while (iVar7 != 0) {
      fn_0076b3a4(param_2,*(undefined4 *)(iVar7 + 0xc));
      iVar4 = *(int *)(iVar7 + 8);
      *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(param_2 + 4);
      fn_0014f1bc(*(undefined4 *)(iVar7 + 0x18));
      fn_00170f54(iVar7 + 0x10);
      *(int *)(param_2 + 4) = iVar7;
      iVar7 = iVar4;
    }
    *(int *)(*(int *)(param_2 + 0x10) + 8) = *(int *)(param_2 + 0x10);
    *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
    *(int *)(*(int *)(param_2 + 0x10) + 0xc) = *(int *)(param_2 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *param_1 = *(undefined4 *)(param_2 + 0x10);
  }
  else {
    while (pbVar9 = (byte *)*param_3, pbVar9 != (byte *)*param_4) {
      iVar7 = *(int *)(pbVar9 + 0xc);
      if (iVar7 == 0) {
        iVar4 = *(int *)(pbVar9 + 4);
        iVar7 = iVar4;
        if (pbVar9 == *(byte **)(iVar4 + 0xc)) {
          do {
            *param_3 = iVar7;
            iVar4 = *(int *)(iVar7 + 4);
            bVar13 = iVar7 == *(int *)(iVar4 + 0xc);
            iVar7 = iVar4;
          } while (bVar13);
        }
        if (*(int *)(*param_3 + 0xc) != iVar4) {
          *param_3 = iVar4;
        }
      }
      else {
        *param_3 = iVar7;
        while (iVar7 = *(int *)(iVar7 + 8), iVar7 != 0) {
          *param_3 = iVar7;
        }
      }
      pbVar5 = *(byte **)(param_2 + 0x10);
      if (pbVar9 != pbVar5) {
        pbVar10 = *(byte **)(pbVar9 + 0xc);
        if (*(byte **)(pbVar9 + 0xc) == (byte *)0x0) {
          pbVar10 = *(byte **)(pbVar9 + 4);
          pbVar5 = pbVar9;
          if (pbVar9 == *(byte **)(pbVar10 + 0xc)) {
            do {
              pbVar5 = pbVar10;
              pbVar10 = *(byte **)(pbVar5 + 4);
            } while (pbVar5 == *(byte **)(pbVar10 + 0xc));
          }
          if (*(byte **)(pbVar5 + 0xc) != pbVar10) {
            pbVar5 = pbVar10;
          }
        }
        else {
          do {
            pbVar5 = pbVar10;
            pbVar10 = *(byte **)(pbVar5 + 8);
          } while (*(byte **)(pbVar5 + 8) != (byte *)0x0);
        }
        pbVar8 = *(byte **)(pbVar9 + 8);
        pbVar6 = *(byte **)(pbVar9 + 0xc);
        pbVar10 = pbVar9;
        if (pbVar8 == (byte *)0x0) {
          if (pbVar6 != (byte *)0x0) goto LAB_0076ade4;
          pbVar6 = *(byte **)(pbVar9 + 4);
          if (*(byte **)(param_2 + 0x10) == pbVar6) {
            *(byte **)(*(byte **)(param_2 + 0x10) + 0xc) = pbVar6;
            *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar6;
            *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
          }
          else if (*(byte **)(pbVar6 + 8) == pbVar9) {
            pbVar6[8] = 0;
            pbVar6[9] = 0;
            pbVar6[10] = 0;
            pbVar6[0xb] = 0;
            if (*(byte **)(*(int *)(param_2 + 0x10) + 8) == pbVar9) {
              *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar6;
            }
          }
          else {
            pbVar6[0xc] = 0;
            pbVar6[0xd] = 0;
            pbVar6[0xe] = 0;
            pbVar6[0xf] = 0;
            if (*(byte **)(*(int *)(param_2 + 0x10) + 0xc) == pbVar9) {
              *(byte **)(*(int *)(param_2 + 0x10) + 0xc) = pbVar6;
            }
          }
        }
        else {
          if (pbVar6 == (byte *)0x0) {
            pbVar6 = pbVar8;
          }
          else {
            iVar7 = *(int *)(pbVar6 + 8);
            pbVar10 = pbVar6;
            while (iVar7 != 0) {
              pbVar10 = *(byte **)(pbVar10 + 8);
              iVar7 = *(int *)(pbVar10 + 8);
            }
            pbVar6 = *(byte **)(pbVar10 + 0xc);
          }
LAB_0076ade4:
          if (pbVar10 == pbVar9) {
            *(undefined4 *)(pbVar6 + 4) = *(undefined4 *)(pbVar10 + 4);
            if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar9) {
              *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar6;
            }
            else {
              iVar7 = *(int *)(pbVar9 + 4);
              if (*(byte **)(iVar7 + 8) == pbVar9) {
                *(byte **)(iVar7 + 8) = pbVar6;
              }
              else {
                *(byte **)(iVar7 + 0xc) = pbVar6;
              }
            }
            iVar7 = *(int *)(param_2 + 0x10);
            if (*(byte **)(iVar7 + 8) == pbVar9) {
              if (*(int *)(pbVar9 + 0xc) == 0) {
                *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(pbVar9 + 4);
              }
              else {
                pbVar12 = *(byte **)(pbVar6 + 8);
                pbVar8 = pbVar6;
                while (pbVar3 = pbVar12, pbVar3 != (byte *)0x0) {
                  pbVar8 = pbVar3;
                  pbVar12 = *(byte **)(pbVar3 + 8);
                }
                *(byte **)(iVar7 + 8) = pbVar8;
                in_r12 = 0;
              }
            }
            iVar7 = *(int *)(param_2 + 0x10);
            if (*(byte **)(iVar7 + 0xc) == pbVar9) {
              if (*(int *)(pbVar9 + 8) == 0) {
                *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(pbVar9 + 4);
              }
              else {
                pbVar8 = *(byte **)(pbVar6 + 0xc);
                pbVar9 = pbVar6;
                while (pbVar12 = pbVar8, pbVar12 != (byte *)0x0) {
                  pbVar9 = pbVar12;
                  pbVar8 = *(byte **)(pbVar12 + 0xc);
                }
                *(byte **)(iVar7 + 0xc) = pbVar9;
              }
            }
          }
          else {
            *(byte **)(pbVar8 + 4) = pbVar10;
            *(undefined4 *)(pbVar10 + 8) = *(undefined4 *)(pbVar9 + 8);
            if (*(byte **)(pbVar9 + 0xc) == pbVar10) {
              if (pbVar6 != (byte *)0x0) {
                *(byte **)(pbVar6 + 4) = pbVar10;
              }
            }
            else {
              if (pbVar6 != (byte *)0x0) {
                *(undefined4 *)(pbVar6 + 4) = *(undefined4 *)(pbVar10 + 4);
              }
              *(byte **)(*(int *)(pbVar10 + 4) + 8) = pbVar6;
              *(undefined4 *)(pbVar10 + 0xc) = *(undefined4 *)(pbVar9 + 0xc);
              *(byte **)(*(int *)(pbVar9 + 0xc) + 4) = pbVar10;
            }
            if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar9) {
              *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar10;
            }
            else {
              iVar7 = *(int *)(pbVar9 + 4);
              if (*(byte **)(iVar7 + 8) == pbVar9) {
                *(byte **)(iVar7 + 8) = pbVar10;
              }
              else {
                *(byte **)(iVar7 + 0xc) = pbVar10;
              }
            }
            if (pbVar6 == (byte *)0x0) {
              pbVar6 = pbVar10;
            }
            *(undefined4 *)(pbVar10 + 4) = *(undefined4 *)(pbVar9 + 4);
            bVar1 = *pbVar10;
            *pbVar10 = *pbVar9;
            *pbVar9 = bVar1;
            pbVar10 = pbVar9;
          }
        }
        pbVar9 = *(byte **)(param_2 + 0x10);
        bVar13 = pbVar9 != pbVar6;
        if (bVar13) {
          pbVar9 = (byte *)(uint)*pbVar10;
        }
        if (bVar13 && pbVar9 != (byte *)0x0) {
          while( true ) {
            if ((*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar6) || (*pbVar6 != 1))
            goto LAB_0076b144;
            pbVar8 = *(byte **)(pbVar6 + 4);
            pbVar9 = *(byte **)(pbVar8 + 8);
            if (pbVar9 != pbVar6) break;
            pbVar9 = *(byte **)(pbVar8 + 0xc);
            if (pbVar9 == (byte *)0x0) {
LAB_0076b100:
              *pbVar6 = 0;
              pbVar6 = pbVar8;
            }
            else {
              if (*pbVar9 == 0) {
                *pbVar9 = 1;
                **(undefined1 **)(pbVar6 + 4) = 0;
                iVar7 = *(int *)(pbVar6 + 4);
                iVar4 = *(int *)(iVar7 + 0xc);
                *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar4 + 8);
                if (*(int *)(iVar4 + 8) != 0) {
                  *(int *)(*(int *)(iVar4 + 8) + 4) = iVar7;
                }
                *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar7 + 4);
                in_r12 = *(uint *)(param_2 + 0x10);
                if (*(int *)(in_r12 + 4) == iVar7) {
                  *(int *)(in_r12 + 4) = iVar4;
                }
                else {
                  in_r12 = *(uint *)(iVar7 + 4);
                  if (*(int *)(in_r12 + 8) == iVar7) {
                    *(int *)(in_r12 + 8) = iVar4;
                  }
                  else {
                    *(int *)(in_r12 + 0xc) = iVar4;
                  }
                }
                *(int *)(iVar4 + 8) = iVar7;
                *(int *)(iVar7 + 4) = iVar4;
                pbVar8 = *(byte **)(pbVar6 + 4);
                pbVar9 = *(byte **)(pbVar8 + 0xc);
                if (pbVar9 == (byte *)0x0) goto LAB_0076b100;
              }
              pbVar8 = *(byte **)(pbVar9 + 8);
              if (pbVar8 != (byte *)0x0) {
                in_r12 = (uint)*pbVar8;
              }
              if (pbVar8 != (byte *)0x0 && in_r12 != 1) {
LAB_0076b008:
                pcVar11 = *(char **)(pbVar9 + 0xc);
                cVar2 = '\0';
                if (pcVar11 != (char *)0x0) {
                  cVar2 = *pcVar11;
                }
                if (pcVar11 == (char *)0x0 || cVar2 == '\x01') {
                  if (pbVar8 != (byte *)0x0) {
                    *pbVar8 = 1;
                  }
                  *pbVar9 = 0;
                  iVar7 = *(int *)(pbVar9 + 8);
                  *(undefined4 *)(pbVar9 + 8) = *(undefined4 *)(iVar7 + 0xc);
                  if (*(int *)(iVar7 + 0xc) != 0) {
                    *(byte **)(*(int *)(iVar7 + 0xc) + 4) = pbVar9;
                  }
                  *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(pbVar9 + 4);
                  in_r12 = *(uint *)(param_2 + 0x10);
                  if (*(byte **)(in_r12 + 4) == pbVar9) {
                    *(int *)(in_r12 + 4) = iVar7;
                  }
                  else {
                    in_r12 = *(uint *)(pbVar9 + 4);
                    if (*(byte **)(in_r12 + 0xc) == pbVar9) {
                      *(int *)(in_r12 + 0xc) = iVar7;
                    }
                    else {
                      *(int *)(in_r12 + 8) = iVar7;
                    }
                  }
                  *(byte **)(iVar7 + 0xc) = pbVar9;
                  *(int *)(pbVar9 + 4) = iVar7;
                  pbVar9 = *(byte **)(*(int *)(pbVar6 + 4) + 0xc);
                  if (pbVar9 == (byte *)0x0) goto LAB_0076b144;
                }
                *pbVar9 = **(byte **)(pbVar6 + 4);
                **(undefined1 **)(pbVar6 + 4) = 1;
                if (*(undefined1 **)(pbVar9 + 0xc) != (undefined1 *)0x0) {
                  **(undefined1 **)(pbVar9 + 0xc) = 1;
                }
                iVar7 = *(int *)(pbVar6 + 4);
                iVar4 = *(int *)(iVar7 + 0xc);
                *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar4 + 8);
                if (*(int *)(iVar4 + 8) != 0) {
                  *(int *)(*(int *)(iVar4 + 8) + 4) = iVar7;
                }
                *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar7 + 4);
                in_r12 = *(uint *)(param_2 + 0x10);
                if (*(int *)(in_r12 + 4) == iVar7) {
                  *(int *)(in_r12 + 4) = iVar4;
                }
                else {
                  in_r12 = *(uint *)(iVar7 + 4);
                  if (*(int *)(in_r12 + 8) == iVar7) {
                    *(int *)(in_r12 + 8) = iVar4;
                  }
                  else {
                    *(int *)(in_r12 + 0xc) = iVar4;
                  }
                }
                *(int *)(iVar4 + 8) = iVar7;
                goto LAB_0076b2a0;
              }
              pbVar12 = *(byte **)(pbVar9 + 0xc);
              in_r12 = 0;
              if (pbVar12 != (byte *)0x0) {
                in_r12 = (uint)*pbVar12;
              }
              if (pbVar12 != (byte *)0x0 && in_r12 != 1) goto LAB_0076b008;
LAB_0076b120:
              *pbVar9 = 0;
              pbVar6 = *(byte **)(pbVar6 + 4);
            }
          }
          if (pbVar9 == (byte *)0x0) goto LAB_0076b100;
          if (*pbVar9 == 0) {
            *pbVar9 = 1;
            **(undefined1 **)(pbVar6 + 4) = 0;
            iVar7 = *(int *)(pbVar6 + 4);
            iVar4 = *(int *)(iVar7 + 8);
            *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar4 + 0xc);
            if (*(int *)(iVar4 + 0xc) != 0) {
              *(int *)(*(int *)(iVar4 + 0xc) + 4) = iVar7;
            }
            *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar7 + 4);
            in_r12 = *(uint *)(param_2 + 0x10);
            if (*(int *)(in_r12 + 4) == iVar7) {
              *(int *)(in_r12 + 4) = iVar4;
            }
            else {
              in_r12 = *(uint *)(iVar7 + 4);
              if (*(int *)(in_r12 + 0xc) == iVar7) {
                *(int *)(in_r12 + 0xc) = iVar4;
              }
              else {
                *(int *)(in_r12 + 8) = iVar4;
              }
            }
            *(int *)(iVar4 + 0xc) = iVar7;
            *(int *)(iVar7 + 4) = iVar4;
            pbVar8 = *(byte **)(pbVar6 + 4);
            pbVar9 = *(byte **)(pbVar8 + 8);
            if (pbVar9 == (byte *)0x0) goto LAB_0076b100;
          }
          pbVar8 = *(byte **)(pbVar9 + 0xc);
          if (pbVar8 != (byte *)0x0) {
            in_r12 = (uint)*pbVar8;
          }
          if (pbVar8 == (byte *)0x0 || in_r12 == 1) {
            pbVar12 = *(byte **)(pbVar9 + 8);
            in_r12 = 0;
            if (pbVar12 != (byte *)0x0) {
              in_r12 = (uint)*pbVar12;
            }
            if (pbVar12 == (byte *)0x0 || in_r12 == 1) goto LAB_0076b120;
          }
          pcVar11 = *(char **)(pbVar9 + 8);
          cVar2 = '\0';
          if (pcVar11 != (char *)0x0) {
            cVar2 = *pcVar11;
          }
          if (pcVar11 == (char *)0x0 || cVar2 == '\x01') {
            if (pbVar8 != (byte *)0x0) {
              *pbVar8 = 1;
            }
            *pbVar9 = 0;
            in_r12 = *(uint *)(pbVar9 + 0xc);
            *(undefined4 *)(pbVar9 + 0xc) = *(undefined4 *)(in_r12 + 8);
            if (*(int *)(in_r12 + 8) != 0) {
              *(byte **)(*(int *)(in_r12 + 8) + 4) = pbVar9;
            }
            *(undefined4 *)(in_r12 + 4) = *(undefined4 *)(pbVar9 + 4);
            if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar9) {
              *(uint *)(*(int *)(param_2 + 0x10) + 4) = in_r12;
            }
            else {
              iVar7 = *(int *)(pbVar9 + 4);
              if (*(byte **)(iVar7 + 8) == pbVar9) {
                *(uint *)(iVar7 + 8) = in_r12;
              }
              else {
                *(uint *)(iVar7 + 0xc) = in_r12;
              }
            }
            *(byte **)(in_r12 + 8) = pbVar9;
            *(uint *)(pbVar9 + 4) = in_r12;
            pbVar9 = *(byte **)(*(int *)(pbVar6 + 4) + 8);
            if (pbVar9 != (byte *)0x0) goto LAB_0076b230;
          }
          else {
LAB_0076b230:
            *pbVar9 = **(byte **)(pbVar6 + 4);
            **(undefined1 **)(pbVar6 + 4) = 1;
            if (*(undefined1 **)(pbVar9 + 8) != (undefined1 *)0x0) {
              **(undefined1 **)(pbVar9 + 8) = 1;
            }
            iVar7 = *(int *)(pbVar6 + 4);
            iVar4 = *(int *)(iVar7 + 8);
            *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar4 + 0xc);
            if (*(int *)(iVar4 + 0xc) != 0) {
              *(int *)(*(int *)(iVar4 + 0xc) + 4) = iVar7;
            }
            *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar7 + 4);
            in_r12 = *(uint *)(param_2 + 0x10);
            if (*(int *)(in_r12 + 4) == iVar7) {
              *(int *)(in_r12 + 4) = iVar4;
            }
            else {
              in_r12 = *(uint *)(iVar7 + 4);
              if (*(int *)(in_r12 + 0xc) == iVar7) {
                *(int *)(in_r12 + 0xc) = iVar4;
              }
              else {
                *(int *)(in_r12 + 8) = iVar4;
              }
            }
            *(int *)(iVar4 + 0xc) = iVar7;
LAB_0076b2a0:
            *(int *)(iVar7 + 4) = iVar4;
          }
LAB_0076b144:
          *pbVar6 = 1;
        }
        *(undefined4 *)(pbVar10 + 0xc) = *(undefined4 *)(param_2 + 4);
        fn_0014f1bc(*(undefined4 *)(pbVar10 + 0x18));
        fn_00170f54(pbVar10 + 0x10);
        *(byte **)(param_2 + 4) = pbVar10;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
      }
      *param_1 = pbVar5;
    }
  }
  return;
}


