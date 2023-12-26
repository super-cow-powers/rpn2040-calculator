CC=gcc
LD=ld

OPTFLAGS=-Og -ggdb
LDFLAGS=-lm
DEFS=
INCLUDES=-I./inc
SRCFILES=src/cli-main.c src/emu-core.c src/calc-stack.c
BINDIR=./bin

all: $(BINDIR)/cli_exe

OBJS = $(addprefix $(BINDIR)/,$(notdir $(SRCFILES:.c=.o)))
vpath %.c $(sort $(dir $(SRCFILES)))

CFLAGS+=$(OPTFLAGS) $(LDFLAGS) $(DEFS) $(INCLUDES)


$(BINDIR)/%.o: %.c makefile | $(BINDIR)
	$(CC) -c -o $@ $< $(CFLAGS) $(LDFLAGS) $(DEFS)

$(BINDIR)/cli_exe: $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS)

$(BINDIR):
	mkdir $@

clean:
	rm $(BINDIR)/*
