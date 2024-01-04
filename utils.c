/* Binary search implementation */
int ilog2(int x)
{
  if (x>>16) {
    if (x>>24) {
      if (x>>28) {
        if (x>>30) {
          if (x>>31) {
	    return 31;
          } else {
	    return 30;
          }
        } else {
          if (x>>29) {
	    return 29;
          } else {
	    return 28;
          }
        }
      } else {
        if (x>>26) {
          if (x>>27) {
	    return 27;
          } else {
	    return 26;
          }
        } else {
          if (x>>25) {
	    return 25;
          } else {
	    return 24;
          }
        }
      }
    } else {
      if (x>>20) {
        if (x>>22) {
          if (x>>23) {
	    return 23;
          } else {
	    return 22;
          }
        } else {
          if (x>>21) {
	    return 21;
          } else {
	    return 20;
          }
        }
      } else {
        if (x>>18) {
          if (x>>19) {
	    return 19;
          } else {
	    return 18;
          }
        } else {
          if (x>>17) {
	    return 17;
          } else {
	    return 16;
          }
        }
      }
    }
  } else {
    if (x>>8) {
      if (x>>12) {
        if (x>>14) {
          if (x>>15) {
	    return 15;
          } else {
	    return 14;
          }
        } else {
          if (x>>13) {
	    return 13;
          } else {
	    return 12;
          }
        }
      } else {
        if (x>>10) {
          if (x>>11) {
	    return 11;
          } else {
	    return 10;
          }
        } else {
          if (x>>9) {
	    return 9;
          } else {
	    return 8;
          }
        }
      }
    } else {
      if (x>>4) {
        if (x>>6) {
          if (x>>7) {
	    return 7;
          } else {
	    return 6;
          }
        } else {
          if (x>>5) {
	    return 5;
          } else {
	    return 4;
          }
        }
      } else {
        if (x>>2) {
          if (x>>3) {
	    return 3;
          } else {
	    return 2;
          }
        } else {
          if (x>>1) {
	    return 1;
          } else {
	    return 0;
          }
        }
      }
    }
  }
}
