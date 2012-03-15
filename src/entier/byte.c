#include "byte.h"

/*
 *	Tests si le bit est à 1 dans le byte octet
 */
int byte_test(byte octet, int bit){
  assert(bit < 8 && bit >= 0);
  return ((octet&(1<<bit))==0)?0:1;
}

/*
 *	Mets à 1 le bit dans le byte octet
 */
void byte_allume(byte* octet, int bit){
  assert(bit < 8 && bit >= 0);
  (*octet)=(*octet)|(1<<bit);

}

/*
 *	Mets à 0 le bit dans le byte octet
 */
void byte_eteint(byte* octet, int bit){
  assert(bit < 8 && bit >= 0);
  (*octet)=(*octet)&~(1<<bit);
}


#ifdef test_byte
int main(int argc, char *argv[]){
  byte byt =0;
  byte_allume(&byt,3);
  byte_allume(&byt,5);
  byte_allume(&byt,7);
  byte_eteint(&byt,3);
  return !(byte_test(byt,5) && byte_test(byt,7) && (!byte_test(byt,3)));
}

#endif
