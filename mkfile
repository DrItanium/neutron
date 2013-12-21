<$PLAN9/src/mkhdr
# neutron is the version of electron that uses plan9port
TARG=neutron
BIN=/usr/local/bin/
LDFLAGS="-lrt -lm -lc -L/usr/lib /usr/local/lib/libelectron.a"
CFLAGS=-Os -I/usr/include -I/usr/local/include/electron 

OFILES=\
       neutron.$O\
       userfunctions.$O\
       input.$O\
       draw.$O\
       evt.$O\
       edraw.$O\

HFILES=\
      neutron.h\

<$PLAN9/src/mkone
