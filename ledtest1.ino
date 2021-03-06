/*

OE  1  2  A
    3  4  B
    5  6 
    7  8  CLK
    9 10  SCLK
   11 12
   13 14  R
   15 16
   
   
  convert -depth 8 64x16.png g:dummy.bin 
  import textwrap; s=open('dummy.bin', 'rb').read().encode("hex").upper(); t="".join(["\\x"+x+y for (x,y) in zip(s[0::2], s[1::2])]) ; print "static const char foo[] = \\\n\t\"%s\";"%"\" \\\n\t\"".join(textwrap.wrap(t,80))
   
*/

static const unsigned char bitmap[] = \
	"\xFF\xFF\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" \
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" \
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xFF" \
	"\xFF\x00\xFF\xFF\xFF\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" \
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xFF\x00\x00\x00\x00\x00\x00" \
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" \
	"\x00\x00\x00\x00\xFF\x00\xFF\xFF\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00\x00\x00\x00" \
	"\x00\x00\x00\x00\x00\x00\xFF\xFF\xFF\x00\x00\x00\x00\x00\x00\x00\xFF\x00\x00\x00" \
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xFF\xFF\x00\x00\x00\x00\x00\x00" \
	"\x00\x00\xFF\xFF\xFF\x00\x00\xFF\xFF\x00\x00\xFF\xFF\xFF\xFF\xFF\xFF\x00\x00\x00" \
	"\x00\x00\x00\x00\x00\x00\x00\x00\xFF\xFF\x00\x00\x00\x00\x00\x00\x00\x00\x00\xFF" \
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xFF\xFF\xFF\xFF\x00\x00\x00" \
	"\x00\x00\x00\x00\xFF\xFF\x00\x00\x00\x00\x00\x00\xFF\xFF\x00\xFF\xFF\xFF\x00\xFF" \
	"\xFF\xFF\x00\x00\x00\x00\x00\x00\x00\x00\xFF\xFF\xFF\x00\x00\x00\x00\x00\x00\x00" \
	"\x00\x00\xFF\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xFF" \
	"\xFF\x00\x00\x00\x00\x00\xFF\xFF\xFF\x00\x00\x00\x00\x00\x00\xFF\x00\xFF\x00\xFF" \
	"\xFF\x00\x00\x00\xFF\xFF\xFF\x00\x00\x00\x00\x00\x00\xFF\xFF\xFF\x00\x00\x00\x00" \
	"\x00\x00\x00\x00\x00\xFF\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" \
	"\x00\x00\xFF\xFF\xFF\x00\x00\x00\x00\xFF\xFF\xFF\x00\x00\x00\x00\x00\x00\x00\x00" \
	"\xFF\xFF\x00\xFF\x00\x00\x00\x00\x00\xFF\xFF\xFF\x00\x00\x00\x00\xFF\xFF\xFF\x00" \
	"\x00\x00\x00\x00\x00\x00\x00\x00\xFF\x00\xFF\xFF\x00\x00\x00\x00\xFF\x00\x00\x00" \
	"\xFF\xFF\x00\x00\x00\x00\xFF\xFF\x00\x00\x00\x00\xFF\xFF\xFF\x00\x00\x00\x00\x00" \
	"\x00\x00\x00\xFF\x00\xFF\x00\xFF\xFF\x00\xFF\x00\x00\x00\xFF\x00\x00\x00\x00\x00" \
	"\xFF\xFF\x00\xFF\xFF\xFF\x00\x00\x00\x00\x00\xFF\x00\x00\xFF\xFF\x00\x00\x00\xFF" \
	"\xFF\xFF\x00\xFF\xFF\xFF\x00\x00\x00\x00\xFF\xFF\x00\x00\x00\x00\xFF\xFF\x00\xFF" \
	"\xFF\xFF\x00\x00\x00\x00\x00\x00\xFF\xFF\x00\xFF\x00\x00\x00\x00\x00\x00\x00\x00" \
	"\x00\x00\x00\xFF\xFF\xFF\x00\x00\x00\xFF\xFF\x00\x00\x00\xFF\x00\x00\xFF\xFF\xFF" \
	"\x00\x00\xFF\x00\xFF\xFF\xFF\x00\x00\x00\x00\x00\x00\xFF\xFF\xFF\x00\x00\x00\xFF" \
	"\xFF\xFF\x00\x00\x00\xFF\xFF\x00\x00\x00\x00\xFF\x00\xFF\x00\xFF\xFF\x00\xFF\x00" \
	"\xFF\x00\x00\x00\x00\x00\x00\xFF\xFF\x00\x00\x00\x00\xFF\xFF\x00\x00\xFF\x00\x00" \
	"\x00\xFF\xFF\x00\x00\x00\x00\x00\xFF\xFF\xFF\x00\x00\x00\x00\x00\x00\xFF\xFF\x00" \
	"\x00\x00\x00\xFF\xFF\x00\x00\x00\x00\xFF\xFF\x00\x00\x00\x00\x00\xFF\xFF\x00\xFF" \
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xFF\xFF\x00\x00\x00\x00\xFF\xFF\x00" \
	"\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF\x00\x00\x00\x00\xFF\xFF\x00\x00\x00\x00\x00" \
	"\x00\xFF\xFF\x00\x00\x00\x00\xFF\xFF\x00\x00\x00\x00\xFF\xFF\x00\x00\x00\x00\xFF" \
	"\x00\xFF\x00\xFF\xFF\x00\xFF\x00\xFF\x00\xFF\x00\x00\x00\x00\xFF\xFF\x00\x00\x00" \
	"\x00\xFF\x00\x00\x00\x00\x00\x00\xFF\xFF\x00\x00\x00\x00\x00\x00\xFF\xFF\xFF\x00" \
	"\x00\x00\x00\x00\xFF\xFF\xFF\x00\x00\x00\x00\xFF\xFF\x00\x00\x00\x00\xFF\x00\x00" \
	"\x00\x00\x00\x00\xFF\xFF\x00\xFF\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" \
	"\xFF\x00\x00\x00\xFF\xFF\x00\x00\x00\x00\x00\x00\xFF\xFF\x00\x00\x00\xFF\x00\xFF" \
	"\x00\xFF\xFF\x00\xFF\x00\x00\x00\xFF\xFF\xFF\x00\x00\x00\x00\x00\xFF\x00\x00\x00" \
	"\xFF\xFF\x00\x00\x00\x00\x00\xFF\x00\xFF\x00\xFF\xFF\x00\xFF\x00\xFF\x00\xFF\x00" \
	"\xFF\x00\x00\x00\x00\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00\xFF\xFF\xFF\xFF\xFF\x00" \
	"\x00\xFF\xFF\x00\x00\x00\xFF\xFF\x00\x00\xFF\xFF\xFF\xFF\xFF\xFF\x00\x00\x00\x00" \
	"\x00\xFF\xFF\xFF\xFF\x00\x00\x00\x00\x00\x00\x00\xFF\x00\x00\xFF\x00\x00\x00\x00" \
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" \
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" \
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xFF\xFF\x00\xFF\xFF" \
	"\xFF\x00\xFF\x00\xFF\x00\xFF\x00\xFF\x00\xFF\x00\x00\x00\x00\x00\x00\x00\x00\x00" \
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" \
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" \
	"\xFF\x00\xFF\xFF";

int OE = 3;
int SCLK = 4;
int CLK = 5;
int R = 6;
int A = 8;
int B = 9;

int sintable[256];

void setup() {
  pinMode(OE, OUTPUT);
  pinMode(CLK, OUTPUT);
  pinMode(SCLK, OUTPUT);
  pinMode(R, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  for(int i=0; i<256; i++) {
    sintable[i] = round(128.0f + 127.0f * sin((float)i * M_PI / 128.0f));
  }
  /*
  for(int j=0; j<16*32*10; j++) {
    digitalWrite(R, random() % 2);
    digitalWrite(SCLK, 1);
    digitalWrite(SCLK, 0);
  }
  */

}


int t = 0;
int rowaddress = 0;

static int ylookup[16] = {
  0,
  4,
  8,
  12,

  1,
  5,
  9,
  13,

  2,
  6,
  10,
  14,

  3,
  7,
  11,
  15
};


static int alookup[4] = {
  0,
  1,
  0,
  1
};

static int blookup[4] = {
  0,
  1,
  1,
  0
};

void loop() {
  
  for(int rowaddress=0; rowaddress<4; rowaddress++) {

    digitalWrite(SCLK, 1);
    delayMicroseconds(1);

    digitalWrite(SCLK, 0);
    delayMicroseconds(1);

    digitalWrite(A, alookup[rowaddress]);  
    digitalWrite(B, blookup[rowaddress]);

    for(int s=0; s<8; s++) {
      for(int r=0; r<4; r++) {
        for(int c=0; c<8; c++) {  

          int x = 63 - ((c % 8) + (s * 8));// + 0) & 63; 
          
          int y = ylookup[rowaddress * 4 + r];
          
          y += sintable[(t*5 + x*1) & 255] / 16;
          y &= 15;

          x += sintable[(t*7) & 255] / 4;
          x &= 63;

          // +  15 - ((r * 4) + (3 - rowaddress));// * 4);
          int o = (y * 64) + x;
      
          digitalWrite(R, (bitmap[o] < 127) ? 1  : 0);// (j+t) % 10 != 0);// == hl) );

          digitalWrite(CLK, 0);
          delayMicroseconds(1);

          digitalWrite(CLK, 1);
          delayMicroseconds(1);
        }
      }
    }

    // delay(0);
    delayMicroseconds(1000); // blanking
    digitalWrite(OE, 1);

    delay(1);

    digitalWrite(OE, 0);
    delayMicroseconds(1000); // blanking
  }
  t ++;
 }

